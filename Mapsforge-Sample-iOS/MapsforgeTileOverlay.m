//
//  MapsforgeTileOverlay.m
//  Mapsforge-Sample-iOS
//
//  Created by Christophe Brasseur on 9/09/15.
//  Copyright © 2015 Geolives S.A. All rights reserved.
//

#import "MapsforgeTileOverlay.h"
#import "MapsForgeXmlRenderTheme.h"
#import "java/lang/Thread.h"
#import "java/io/ByteArrayOutputStream.h"
#include "IOSPrimitiveArray.h"

@implementation MapsforgeTileOverlay

-(id)initWithMapFile:(NSString*)mapFile renderFile:(NSString*)renderFile
{
    self = [super init];
    if (self) {
        
        // When an overlay is instantiated we prepare all the needed stuff for the rendering.
        
        // Begin to store the file paths.
        _mapFilePath = mapFile;
        _renderFilePath = renderFile;
        
        // Build the tile cache and the IOSGraphicFactory that gives a context for drawing (scale factor, etc.)
        _tileCache = [[MFInMemoryTileCache alloc] initWithInt:50];
        _graphicFactory = [IOSGraphicFactory instance];
        
        // Prepares the map file.
        _mapFile = [[MFMapFile alloc] initWithNSString:_mapFilePath];
        
        // Instantiate a display model.
        _displayModel = [[MFDisplayModel alloc] init];
        
        // Theme analyzer must be run in background. For convenience here, we'll use the java.lang.thread because the internal process is handled with java threading.
        MapsForgeXmlRenderTheme* mfrt = [[MapsForgeXmlRenderTheme alloc] initWithPath:_renderFilePath];
        _renderTheme = [[MFRenderThemeFuture alloc] initWithOrgMapsforgeCoreGraphicsGraphicFactory:_graphicFactory withOrgMapsforgeMapRenderthemeXmlRenderTheme:mfrt withOrgMapsforgeMapModelDisplayModel:_displayModel];
        
        JavaLangThread* t = [[JavaLangThread alloc] initWithJavaLangRunnable:_renderTheme];
        [t start];
        
        // Prepares the database renderer.
        _databaseRenderer = [[MFDatabaseRenderer alloc] initWithOrgMapsforgeMapReaderMapDataStore:_mapFile withOrgMapsforgeCoreGraphicsGraphicFactory:_graphicFactory withOrgMapsforgeMapLayerCacheTileCache:_tileCache];
        
        // Open info about the map file. These information will be useful to handle out of bounds tiles.
        MFMapFileInfo* fileInfo = [_mapFile getMapFileInfo];
        _boundingBox = fileInfo->boundingBox_;
        _zoomBounds = -1;
        
        int tileSize = 256;
        tileSize = tileSize * [UIScreen mainScreen].scale;
        self.tileSize = CGSizeMake(tileSize, tileSize);
        
    }
    return self;
}

- (void)loadTileAtPath:(MKTileOverlayPath)path result:(void (^)(NSData *data, NSError *error))result
{
    if (!result) {
        return;
    }
    
    // This call is synchronous, so we need to run an async thread to handle the stuff.
    //dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        
        MFTileBitmap *tb = [self _getImageForX:path.x forY:path.y forZ:path.z forScale:path.contentScaleFactor];        // This is NOT an iOS classic Bitmap.
        
        // The MFTileBitmap is not an iOS classic Bitmap, so we need to convert it from the Java type to the iOS type.
        // Consider we must return the result as a NSData, we get the byte array and use the IOSByteArray class to convert it into NSData.
        
        JavaIoByteArrayOutputStream* stream = [[JavaIoByteArrayOutputStream alloc] init];
        
        @try {
            [tb compressWithJavaIoOutputStream:stream];
            
        } @catch (NSException* e) { NSLog(@"%@", e.description); }
        
        IOSByteArray* byteArray = [stream toByteArray];
        NSData* data = [byteArray toNSData];
        
        // We get the image as a NSData variable. Send the result to the map view.
        result(data, nil);
    
    //});
    
}

-(MFTileBitmap*)_getImageForX:(int)x forY:(int)y forZ:(int)z forScale:(float)scaleFactor
{
    // Check if the tile is out of bounds, then ignore it.
    if ([self _tileOutOfBoundsForX:x forY:y forZ:z])
        return nil;
    
    // All the tiles are 256-based, but we use the scale factor to adapt the tiles depending on the DPI of the device.
    int tileSize = 256;
    tileSize = tileSize * scaleFactor;
    
    // Prepares the tile then make a renderer job.
    MFTile* tile = [[MFTile alloc] initWithInt:x withInt:y withByte:z withInt:tileSize];
    MFRendererJob* rendererJob = [[MFRendererJob alloc] initWithOrgMapsforgeCoreModelTile:tile withOrgMapsforgeMapReaderMapDataStore:_mapFile withOrgMapsforgeMapRenderthemeRuleRenderThemeFuture:_renderTheme withOrgMapsforgeMapModelDisplayModel:_displayModel withFloat:1.f withBoolean:NO withBoolean:NO];
    
    // Executes the job!
    @try {
        
        MFTileBitmap* tileBitmap = [_databaseRenderer executeJobWithOrgMapsforgeMapLayerRendererRendererJob:rendererJob];
        [_tileCache putWithOrgMapsforgeMapLayerQueueJob:rendererJob withOrgMapsforgeCoreGraphicsTileBitmap:tileBitmap];
        
        return tileBitmap;
    }
    @catch (NSException *e) {
        NSLog(@"Tile Bitmap %d/%d/%d Error: %@", x,y,z, e.description);
        return nil;
    }
    
}

-(BOOL)_tileOutOfBoundsForX:(int)x forY:(int)y forZ:(int)z
{
    if (z != _zoomBounds)
        [self _recalculateTileBoundsWithZoom:z];
    
    BOOL oob =  (x < _westTileBounds) || (x > _eastTileBounds) || (y < _northTileBounds) || (y > _southTileBounds);
    return oob;
}

-(void)_recalculateTileBoundsWithZoom:(int)zoom
{
    _zoomBounds = zoom;
    _westTileBounds = [self _lon2XTile:_boundingBox->minLongitude_ zoom:_zoomBounds];
    _eastTileBounds = [self _lon2XTile:_boundingBox->maxLongitude_ zoom: _zoomBounds];
    _southTileBounds = [self _lat2YTile:_boundingBox->minLatitude_ zoom: _zoomBounds];
    _northTileBounds = [self _lat2YTile:_boundingBox->maxLatitude_ zoom: _zoomBounds];
}

-(int)_lon2XTile:(double)lon zoom:(int)zoom
{
    return (int)floor((lon + 180) / 360 * (1<<zoom)) ;
}

-(int)_lat2YTile:(double)lat zoom:(int)zoom
{
    
    return (int)floor((1 - log(tan([self _toRadians:lat]) + 1 / cos([self _toRadians:lat])) / M_PI) / 2 * (1<<zoom)) ;
}

-(double)_toRadians:(double)lat
{
    return (lat) * M_PI / 180.0;
}

-(MFMapFileInfo*)vectorDataInfo
{
    MFMapFileInfo* fileInfo = [_mapFile getMapFileInfo];
    return fileInfo;
}

@end
