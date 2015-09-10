# Mapsforge-Sample-iOS

This is a sample project that delivers Mapsforge tiles into the Apple MapKit for iOS. This uses a library that could be find here : https://github.com/geolives/MapsForge-ios.

## Dependencies

You will need some dependancies to make this works:

* J2OBJC (https://github.com/google/j2objc). Unpackage it and compile using make dist. Please make sure you have Maven installed (https://maven.apache.org/).

Headers and library from https://github.com/geolives/MapsForge-ios (the .a file) are already provided into the project.

## Map and style files

You can change the `style.xml` and the `mapfile.map` to see a different region with a different style. By default, the Feroe islands with the default mapsforge theme are provided into the `/Data` folder.

## Different targets

Some targets available :
* MapKit-Sample (with provided library)
* MapsforgeMap-Sample (_TODO_) (bound with library)
