//
//  ViewController.h
//  Mapsforge-Sample-iOS
//
//  Created by Christophe Brasseur on 9/09/15.
//  Copyright © 2015 Geolives S.A. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController<MKMapViewDelegate>
{
    
    
}

@property (strong, nonatomic) IBOutlet MKMapView* map;


@end

