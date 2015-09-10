//
//  MapsForgeHeaders.h
//  SityTrip
//
//  Created by Christophe Brasseur on 10/08/15.
//  Copyright © 2015 Geolives S.A. All rights reserved.
//

#ifndef MapsForgeHeaders_h
#define MapsForgeHeaders_h

#import "mapsforge-ios/org/mapsforge/map/layer/renderer/DatabaseRenderer.h"
#import "mapsforge-ios/org/mapsforge/map/reader/MapFile.h"
//#import "mapsforge-ios/org/mapsforge/map/reader/header/MapFileInfo.h"
#import "mapsforge-ios/org/mapsforge/core/model/BoundingBox.h"
#import "mapsforge-ios/org/mapsforge/map/rendertheme/rule/RenderThemeFuture.h"
#import "mapsforge-ios/org/mapsforge/map/layer/cache/TileCache.h"
//#import "mapsforge-ios/org/mapsforge/map/layer/cache/InMemoryTileCache.h"
#import "mapsforge-ios/org/mapsforge/map/rendertheme/XmlRenderTheme.h"
#import "mapsforge-ios/org/mapsforge/core/graphics/TileBitmap.h"
#import "mapsforge-ios/org/mapsforge/core/model/Tile.h"
#import "mapsforge-ios/org/mapsforge/map/layer/renderer/RendererJob.h"

@compatibility_alias MFDatabaseRenderer OrgMapsforgeMapLayerRendererDatabaseRenderer;
@compatibility_alias MFMapFile OrgMapsforgeMapReaderMapFile;
//@compatibility_alias MFMapFileInfo OrgMapsforgeMapReaderHeaderMapFileInfo;
@compatibility_alias MFBoundingBox OrgMapsforgeCoreModelBoundingBox;
@compatibility_alias MFRenderThemeFuture OrgMapsforgeMapRenderthemeRuleRenderThemeFuture;
typedef NSObject<OrgMapsforgeMapLayerCacheTileCache> MFTileCache;
//@compatibility_alias MFInMemoryTileCache OrgMapsforgeMapLayerCacheInMemoryTileCache;
typedef NSObject<OrgMapsforgeMapRenderthemeXmlRenderTheme> MFXmlRenderTheme;
typedef NSObject<OrgMapsforgeCoreGraphicsTileBitmap> MFTileBitmap;
@compatibility_alias MFTile OrgMapsforgeCoreModelTile;
@compatibility_alias MFRendererJob OrgMapsforgeMapLayerRendererRendererJob;


#endif /* MapsForgeHeaders_h */
