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

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Setting a map type. This will not be rendered because of canReplaceMapContent property.
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
    self.map.delegate = self;
    [self.map setCenterCoordinate:CLLocationCoordinate2DMake(50.5, 5.5) zoomLevel:16 animated:NO];
    
}

-(MKOverlayRenderer *)mapView:(MKMapView *)mapView rendererForOverlay:(id<MKOverlay>)overlay
{
    MKTileOverlayRenderer *renderer = [[MKTileOverlayRenderer alloc] initWithOverlay:overlay];
    return renderer;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
