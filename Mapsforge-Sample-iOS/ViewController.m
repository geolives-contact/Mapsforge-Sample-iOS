//
//  ViewController.m
//  Mapsforge-Sample-iOS
//
//  Created by Christophe Brasseur on 9/09/15.
//  Copyright © 2015 Geolives S.A. All rights reserved.
//

#import "ViewController.h"
#import "MapsforgeTileOverlay.h"
#import "MKMapView+ZoomLevel.h"
#import "mapsforge-ios/org/mapsforge/core/model/LatLong.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Setting a map type. This will not be rendered because of canReplaceMapContent property on the tile overlay.
    self.map.mapType = MKMapTypeStandard;
    
    // Get the paths for the map file and the style file.
    NSString* mapFile = [[NSBundle mainBundle] pathForResource:@"Data/filemap" ofType:@"map"];
    NSString* renderFile = [[NSBundle mainBundle] pathForResource:@"Data/style" ofType:@"xml"];
    
    // Instantiate a MapsforgeTileOverlay. All the Mapsforge logic is wrapped in.
    MapsforgeTileOverlay* tileOverlay = [[MapsforgeTileOverlay alloc] initWithMapFile:mapFile renderFile:renderFile];
    
    // To tell map view to not render the Apple maps.
    tileOverlay.canReplaceMapContent = YES;
    
    // Now adding it to the map view and let's do the magic!
    [self.map addOverlay:tileOverlay];
    
    // Setting the delegate to allow MapKit to use the default tile overlay renderer.
    self.map.delegate = self;
    
    // Map files contains vector data information that could be used.
    // To display the map properly we'll get the center of the map file.
    MFMapFileInfo *fileInfo = tileOverlay.vectorDataInfo;
    OrgMapsforgeCoreModelLatLong* latLong = [fileInfo->boundingBox_ getCenterPoint];
    CLLocationCoordinate2D coordinate = CLLocationCoordinate2DMake(latLong->latitude_, latLong->longitude_);
    
    // MapKit does not provide any zoom level implementation so we use a property to handle this case. See MKMapView+ZoomLevel.
    [self.map setCenterCoordinate:coordinate zoomLevel:9 animated:NO];
    
}

-(MKOverlayRenderer *)mapView:(MKMapView *)mapView rendererForOverlay:(id<MKOverlay>)overlay
{
    // We use the default tile overlay renderer.
    MKTileOverlayRenderer *renderer = [[MKTileOverlayRenderer alloc] initWithOverlay:overlay];
    return renderer;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
