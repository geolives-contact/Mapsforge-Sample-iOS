//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/WeakHashMap.java
//

#ifndef _JavaUtilWeakHashMap_H_
#define _JavaUtilWeakHashMap_H_

#include "J2ObjC_header.h"
#include "java/lang/ref/WeakReference.h"
#include "java/util/AbstractMap.h"
#include "java/util/Iterator.h"
#include "java/util/Map.h"

@class IOSObjectArray;
@class JavaUtilWeakHashMap_Entry;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

@interface JavaUtilWeakHashMap : JavaUtilAbstractMap < JavaUtilMap > {
 @public
  jint elementCount_;
  IOSObjectArray *elementData_;
  jint modCount_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)capacity;

- (instancetype)initWithInt:(jint)capacity
                  withFloat:(jfloat)loadFactor;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilSet>)entrySet;

- (id)getWithId:(id)key;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)removeWithId:(id)key;

- (jint)size;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (JavaUtilWeakHashMap_Entry *)getEntryWithId:(id)key;

- (void)poll;

- (void)removeEntryWithJavaUtilWeakHashMap_Entry:(JavaUtilWeakHashMap_Entry *)toRemove;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilWeakHashMap)

J2OBJC_FIELD_SETTER(JavaUtilWeakHashMap, elementData_, IOSObjectArray *)

FOUNDATION_EXPORT void JavaUtilWeakHashMap_init(JavaUtilWeakHashMap *self);

FOUNDATION_EXPORT JavaUtilWeakHashMap *new_JavaUtilWeakHashMap_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilWeakHashMap_initWithInt_(JavaUtilWeakHashMap *self, jint capacity);

FOUNDATION_EXPORT JavaUtilWeakHashMap *new_JavaUtilWeakHashMap_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilWeakHashMap_initWithInt_withFloat_(JavaUtilWeakHashMap *self, jint capacity, jfloat loadFactor);

FOUNDATION_EXPORT JavaUtilWeakHashMap *new_JavaUtilWeakHashMap_initWithInt_withFloat_(jint capacity, jfloat loadFactor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilWeakHashMap_initWithJavaUtilMap_(JavaUtilWeakHashMap *self, id<JavaUtilMap> map);

FOUNDATION_EXPORT JavaUtilWeakHashMap *new_JavaUtilWeakHashMap_initWithJavaUtilMap_(id<JavaUtilMap> map) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilWeakHashMap)

@interface JavaUtilWeakHashMap_Entry : JavaLangRefWeakReference < JavaUtilMap_Entry >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilWeakHashMap_Entry)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilWeakHashMap_Entry)

@protocol JavaUtilWeakHashMap_Entry_Type < NSObject, JavaObject >

- (id)getWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilWeakHashMap_Entry_Type)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilWeakHashMap_Entry_Type)

@interface JavaUtilWeakHashMap_HashIterator : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilWeakHashMap_Entry_Type> type_;
}

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilWeakHashMap:(JavaUtilWeakHashMap *)outer$
         withJavaUtilWeakHashMap_Entry_Type:(id<JavaUtilWeakHashMap_Entry_Type>)type;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilWeakHashMap_HashIterator)

J2OBJC_FIELD_SETTER(JavaUtilWeakHashMap_HashIterator, type_, id<JavaUtilWeakHashMap_Entry_Type>)

FOUNDATION_EXPORT void JavaUtilWeakHashMap_HashIterator_initWithJavaUtilWeakHashMap_withJavaUtilWeakHashMap_Entry_Type_(JavaUtilWeakHashMap_HashIterator *self, JavaUtilWeakHashMap *outer$, id<JavaUtilWeakHashMap_Entry_Type> type);

FOUNDATION_EXPORT JavaUtilWeakHashMap_HashIterator *new_JavaUtilWeakHashMap_HashIterator_initWithJavaUtilWeakHashMap_withJavaUtilWeakHashMap_Entry_Type_(JavaUtilWeakHashMap *outer$, id<JavaUtilWeakHashMap_Entry_Type> type) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilWeakHashMap_HashIterator)

#endif // _JavaUtilWeakHashMap_H_