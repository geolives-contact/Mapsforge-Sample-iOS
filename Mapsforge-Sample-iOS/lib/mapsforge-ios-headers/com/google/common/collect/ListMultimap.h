//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/ListMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectListMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectListMultimap_RESTRICT
#define ComGoogleCommonCollectListMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectListMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectListMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectListMultimap_) && (ComGoogleCommonCollectListMultimap_INCLUDE_ALL || ComGoogleCommonCollectListMultimap_INCLUDE)
#define _ComGoogleCommonCollectListMultimap_

#define ComGoogleCommonCollectMultimap_RESTRICT 1
#define ComGoogleCommonCollectMultimap_INCLUDE 1
#include "com/google/common/collect/Multimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilList;
@protocol JavaUtilMap;

@protocol ComGoogleCommonCollectListMultimap < ComGoogleCommonCollectMultimap, NSObject, JavaObject >

- (id<JavaUtilList>)getWithId:(id)key;

- (id<JavaUtilList>)removeAllWithId:(id)key;

- (id<JavaUtilList>)replaceValuesWithId:(id)key
                   withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilMap>)asMap;

- (jboolean)isEqual:(id)obj;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectListMultimap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectListMultimap)

#endif
#pragma pop_macro("ComGoogleCommonCollectListMultimap_INCLUDE_ALL")