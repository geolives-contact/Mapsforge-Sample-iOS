//
//  MApsForgeXmlRenderTheme.h
//  SityTrip
//
//  Created by Christophe Brasseur on 10/08/15.
//  Copyright © 2015 Geolives S.A. All rights reserved.
//

#import "mapsforge-ios/MFAliases.h"
#import "mapsforge-ios/org/mapsforge/map/rendertheme/XmlRenderTheme.h"

@interface MapsForgeXmlRenderTheme : NSObject<OrgMapsforgeMapRenderthemeXmlRenderTheme>
{
    
}

@property (copy, nonatomic) NSString* path;

-(id)initWithPath:(NSString*)path;

@end
