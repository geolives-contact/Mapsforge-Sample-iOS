//
//  MKMapView+ZoomLevel.h
//  Mapsforge-Sample-iOS
//
//  Created by Christophe Brasseur on 9/09/15.
//  Copyright © 2015 Geolives S.A. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface MKMapView (ZoomLevel)

- (void)setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate
                  zoomLevel:(NSUInteger)zoomLevel
                   animated:(BOOL)animated;

@end