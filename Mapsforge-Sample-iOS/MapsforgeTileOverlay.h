//
//  MapsforgeTileOverlay.h
//  Mapsforge-Sample-iOS
//
//  Created by Christophe Brasseur on 9/09/15.
//  Copyright © 2015 Geolives S.A. All rights reserved.
//

#import <MapKit/MapKit.h>
#import "mapsforge-ios/MFAliases.h"
#import "MapsForgeHeaders.h"
#import "mapsforge-ios/IOSGraphicFactory.h"

@interface MapsforgeTileOverlay : MKTileOverlay
{
    NSString* _name;
    NSString* _mapFilePath;
    NSString* _renderFilePath;
    
    MFDatabaseRenderer* _databaseRenderer;
    MFMapFile* _mapFile;
    MFBoundingBox* _boundingBox;
    int _zoomBounds;
    MFRenderThemeFuture* _renderTheme;
    MFDisplayModel* _displayModel;
    MFTileCache* _tileCache;
    IOSGraphicFactory* _graphicFactory;
    
    int _westTileBounds;
    int _eastTileBounds;
    int _southTileBounds;
    int _northTileBounds;
}

-(id)initWithMapFile:(NSString*)mapFile renderFile:(NSString*)renderFile;

-(MFMapFileInfo*)vectorDataInfo;

@end
