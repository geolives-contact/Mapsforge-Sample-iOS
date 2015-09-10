//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/RegularContiguousSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectRegularContiguousSet_INCLUDE_ALL")
#if ComGoogleCommonCollectRegularContiguousSet_RESTRICT
#define ComGoogleCommonCollectRegularContiguousSet_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectRegularContiguousSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularContiguousSet_RESTRICT

#if !defined (_ComGoogleCommonCollectRegularContiguousSet_) && (ComGoogleCommonCollectRegularContiguousSet_INCLUDE_ALL || ComGoogleCommonCollectRegularContiguousSet_INCLUDE)
#define _ComGoogleCommonCollectRegularContiguousSet_

#define ComGoogleCommonCollectContiguousSet_RESTRICT 1
#define ComGoogleCommonCollectContiguousSet_INCLUDE 1
#include "com/google/common/collect/ContiguousSet.h"

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectDiscreteDomain;
@class ComGoogleCommonCollectRange;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaLangComparable;
@protocol JavaUtilCollection;

@interface ComGoogleCommonCollectRegularContiguousSet : ComGoogleCommonCollectContiguousSet

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)targets;

- (ComGoogleCommonCollectUnmodifiableIterator *)descendingIterator;

- (jboolean)isEqual:(id)object;

- (id)first;

- (NSUInteger)hash;

- (ComGoogleCommonCollectContiguousSet *)intersectionWithComGoogleCommonCollectContiguousSet:(ComGoogleCommonCollectContiguousSet *)other;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (id)last;

- (ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectRange *)rangeWithComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)lowerBoundType
                                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)upperBoundType;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)other;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
           withComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (ComGoogleCommonCollectContiguousSet *)headSetImplWithId:(id<JavaLangComparable>)toElement
                                               withBoolean:(jboolean)inclusive;

- (jint)indexOfWithId:(id)target;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectContiguousSet *)subSetImplWithId:(id<JavaLangComparable>)fromElement
                                              withBoolean:(jboolean)fromInclusive
                                                   withId:(id<JavaLangComparable>)toElement
                                              withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectContiguousSet *)tailSetImplWithId:(id<JavaLangComparable>)fromElement
                                               withBoolean:(jboolean)inclusive;

- (id)writeReplace;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularContiguousSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularContiguousSet_initWithComGoogleCommonCollectRange_withComGoogleCommonCollectDiscreteDomain_(ComGoogleCommonCollectRegularContiguousSet *self, ComGoogleCommonCollectRange *range, ComGoogleCommonCollectDiscreteDomain *domain);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularContiguousSet *new_ComGoogleCommonCollectRegularContiguousSet_initWithComGoogleCommonCollectRange_withComGoogleCommonCollectDiscreteDomain_(ComGoogleCommonCollectRange *range, ComGoogleCommonCollectDiscreteDomain *domain) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularContiguousSet)

#endif

#if !defined (_ComGoogleCommonCollectRegularContiguousSet_SerializedForm_) && (ComGoogleCommonCollectRegularContiguousSet_INCLUDE_ALL || ComGoogleCommonCollectRegularContiguousSet_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectRegularContiguousSet_SerializedForm_

#endif

#if !defined (_ComGoogleCommonCollectRegularContiguousSet_$1_) && (ComGoogleCommonCollectRegularContiguousSet_INCLUDE_ALL || ComGoogleCommonCollectRegularContiguousSet_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularContiguousSet_$1_

#endif

#if !defined (_ComGoogleCommonCollectRegularContiguousSet_$2_) && (ComGoogleCommonCollectRegularContiguousSet_INCLUDE_ALL || ComGoogleCommonCollectRegularContiguousSet_$2_INCLUDE)
#define _ComGoogleCommonCollectRegularContiguousSet_$2_

#endif
#pragma pop_macro("ComGoogleCommonCollectRegularContiguousSet_INCLUDE_ALL")