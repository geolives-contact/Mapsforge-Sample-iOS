//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/util/BasicLruCache.java
//

#ifndef _LibcoreUtilBasicLruCache_H_
#define _LibcoreUtilBasicLruCache_H_

#include "J2ObjC_header.h"

@protocol JavaUtilMap;

@interface LibcoreUtilBasicLruCache : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)maxSize;

- (void)evictAll;

- (id)getWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (id<JavaUtilMap>)snapshot;

#pragma mark Protected

- (id)createWithId:(id)key;

- (void)entryEvictedWithId:(id)key
                    withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreUtilBasicLruCache)

FOUNDATION_EXPORT void LibcoreUtilBasicLruCache_initWithInt_(LibcoreUtilBasicLruCache *self, jint maxSize);

FOUNDATION_EXPORT LibcoreUtilBasicLruCache *new_LibcoreUtilBasicLruCache_initWithInt_(jint maxSize) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreUtilBasicLruCache)

#endif // _LibcoreUtilBasicLruCache_H_