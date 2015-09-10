//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/StandardTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectStandardTable_INCLUDE_ALL")
#if ComGoogleCommonCollectStandardTable_RESTRICT
#define ComGoogleCommonCollectStandardTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectStandardTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectStandardTable_RESTRICT
#if ComGoogleCommonCollectStandardTable_RowMap_EntrySet_INCLUDE
#define ComGoogleCommonCollectStandardTable_TableSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectStandardTable_RowKeySet_INCLUDE
#define ComGoogleCommonCollectStandardTable_TableSet_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectStandardTable_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include "com/google/common/collect/Table.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectStandardTable : NSObject < ComGoogleCommonCollectTable, JavaIoSerializable > {
 @public
  id<JavaUtilMap> backingMap_;
  id<ComGoogleCommonBaseSupplier> factory_;
}

#pragma mark Public

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (jboolean)isEqual:(id)obj;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (jint)size;

- (NSString *)description;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)backingMap
    withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory;

- (id<JavaUtilIterator>)createColumnKeyIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable, backingMap_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable, factory_, id<ComGoogleCommonBaseSupplier>)

FOUNDATION_EXPORT void ComGoogleCommonCollectStandardTable_initWithJavaUtilMap_withComGoogleCommonBaseSupplier_(ComGoogleCommonCollectStandardTable *self, id<JavaUtilMap> backingMap, id<ComGoogleCommonBaseSupplier> factory);

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable *new_ComGoogleCommonCollectStandardTable_initWithJavaUtilMap_withComGoogleCommonBaseSupplier_(id<JavaUtilMap> backingMap, id<ComGoogleCommonBaseSupplier> factory) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable)

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_TableCollection_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_TableCollection_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_TableCollection_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_TableSet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_TableSet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_TableSet_

#define JavaUtilAbstractSet_RESTRICT 1
#define JavaUtilAbstractSet_INCLUDE 1
#include "java/util/AbstractSet.h"

@interface ComGoogleCommonCollectStandardTable_TableSet : JavaUtilAbstractSet

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_TableSet)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_TableSet)

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_CellSet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_CellSet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_CellSet_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_CellIterator_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_CellIterator_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_CellIterator_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Row_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Row_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Row_

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "java/util/AbstractMap.h"

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectStandardTable_Row : JavaUtilAbstractMap {
 @public
  id rowKey_;
  id<JavaUtilMap> backingRowMap__;
  id<JavaUtilSet> keySet_Row_;
  id<JavaUtilSet> entrySet__;
}

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilSet>)entrySet;

- (id)getWithId:(id)key;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$
                                                     withId:(id)rowKey;

- (id<JavaUtilMap>)backingRowMap;

- (id<JavaUtilMap>)computeBackingRowMap;

- (void)maintainEmptyInvariant;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_Row)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Row, rowKey_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Row, backingRowMap__, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Row, keySet_Row_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectStandardTable_Row, entrySet__, id<JavaUtilSet>)

FOUNDATION_EXPORT void ComGoogleCommonCollectStandardTable_Row_initWithComGoogleCommonCollectStandardTable_withId_(ComGoogleCommonCollectStandardTable_Row *self, ComGoogleCommonCollectStandardTable *outer$, id rowKey);

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable_Row *new_ComGoogleCommonCollectStandardTable_Row_initWithComGoogleCommonCollectStandardTable_withId_(ComGoogleCommonCollectStandardTable *outer$, id rowKey) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_Row)

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Row_1RowKeySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Row_1RowKeySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Row_1RowKeySet_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Row_RowEntrySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Row_RowEntrySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Row_RowEntrySet_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Row_RowEntrySet_$1_$1_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Column_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Column_EntrySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_EntrySet_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_1EntrySetIteratorMapEntry_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_1EntrySetIteratorMapEntry_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_EntrySetIterator_1EntrySetIteratorMapEntry_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Column_KeySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_KeySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_KeySet_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Column_KeySet_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_KeySet_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_KeySet_$1_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Column_Values_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_Values_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_Values_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Column_Values_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_Values_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_Values_$1_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Column_Values_$2_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Column_Values_$2_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Column_Values_$2_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_RowKeySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_RowKeySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_RowKeySet_

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectStandardTable_RowKeySet : ComGoogleCommonCollectStandardTable_TableSet

#pragma mark Public

- (jboolean)containsWithId:(id)obj;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)obj;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_RowKeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectStandardTable_RowKeySet_initWithComGoogleCommonCollectStandardTable_(ComGoogleCommonCollectStandardTable_RowKeySet *self, ComGoogleCommonCollectStandardTable *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable_RowKeySet *new_ComGoogleCommonCollectStandardTable_RowKeySet_initWithComGoogleCommonCollectStandardTable_(ComGoogleCommonCollectStandardTable *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_RowKeySet)

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_ColumnKeySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnKeySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnKeySet_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_ColumnKeyIterator_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnKeyIterator_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnKeyIterator_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Values_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Values_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Values_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_Values_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_Values_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_Values_$1_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_RowMap_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_RowMap_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_RowMap_

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_ImprovedAbstractMap_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectStandardTable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectStandardTable_RowMap : ComGoogleCommonCollectMaps_ImprovedAbstractMap

#pragma mark Public

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilMap>)getWithId:(id)key;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilMap>)removeWithId:(id)key;

#pragma mark Protected

- (id<JavaUtilSet>)createEntrySet;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectStandardTable:(ComGoogleCommonCollectStandardTable *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_RowMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectStandardTable_RowMap_initWithComGoogleCommonCollectStandardTable_(ComGoogleCommonCollectStandardTable_RowMap *self, ComGoogleCommonCollectStandardTable *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable_RowMap *new_ComGoogleCommonCollectStandardTable_RowMap_initWithComGoogleCommonCollectStandardTable_(ComGoogleCommonCollectStandardTable *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_RowMap)

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_RowMap_EntrySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_RowMap_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_RowMap_EntrySet_

@class ComGoogleCommonCollectStandardTable_RowMap;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectStandardTable_RowMap_EntrySet : ComGoogleCommonCollectStandardTable_TableSet

#pragma mark Public

- (jboolean)containsWithId:(id)obj;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)obj;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectStandardTable_RowMap:(ComGoogleCommonCollectStandardTable_RowMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardTable_RowMap_EntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectStandardTable_RowMap_EntrySet_initWithComGoogleCommonCollectStandardTable_RowMap_(ComGoogleCommonCollectStandardTable_RowMap_EntrySet *self, ComGoogleCommonCollectStandardTable_RowMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectStandardTable_RowMap_EntrySet *new_ComGoogleCommonCollectStandardTable_RowMap_EntrySet_initWithComGoogleCommonCollectStandardTable_RowMap_(ComGoogleCommonCollectStandardTable_RowMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardTable_RowMap_EntrySet)

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_RowMap_EntrySet_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_RowMap_EntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_RowMap_EntrySet_$1_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_ColumnMap_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnMap_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnMap_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_$1_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapEntrySet_$1_

#endif

#if !defined (_ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues_) && (ComGoogleCommonCollectStandardTable_INCLUDE_ALL || ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues_INCLUDE)
#define _ComGoogleCommonCollectStandardTable_ColumnMap_ColumnMapValues_

#endif
#pragma pop_macro("ComGoogleCommonCollectStandardTable_INCLUDE_ALL")