//
//  MApsForgeXmlRenderTheme.m
//  SityTrip
//
//  Created by Christophe Brasseur on 10/08/15.
//  Copyright © 2015 Geolives S.A. All rights reserved.
//

#import "MapsForgeXmlRenderTheme.h"
#import "mapsforge-ios/org/mapsforge/map/rendertheme/XmlRenderThemeMenuCallback.h"
#import "java/io/FileInputStream.h"

@class JavaIoInputStream;

@implementation MapsForgeXmlRenderTheme

-(id)initWithPath:(NSString *)path
{
    self = [super init];
    if (self)
    {
        self.path = path;
    }
    return self;
}

- (id<OrgMapsforgeMapRenderthemeXmlRenderThemeMenuCallback>)getMenuCallback
{
    return nil;
}

- (NSString *)getRelativePathPrefix
{
    NSString* parentFolder = [self.path stringByDeletingLastPathComponent];
    NSLog(@"%@", parentFolder);
    return parentFolder;
}

- (JavaIoInputStream *)getRenderThemeAsStream
{
    JavaIoFileInputStream *fileStream = [[JavaIoFileInputStream alloc] initWithNSString:self.path];
    return fileStream;
}


@end
