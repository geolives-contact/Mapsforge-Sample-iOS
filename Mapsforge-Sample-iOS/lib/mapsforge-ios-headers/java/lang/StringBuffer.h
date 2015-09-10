//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/StringBuffer.java
//

#ifndef _JavaLangStringBuffer_H_
#define _JavaLangStringBuffer_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/lang/AbstractStringBuilder.h"
#include "java/lang/Appendable.h"
#include "java/lang/CharSequence.h"

@class IOSCharArray;

@interface JavaLangStringBuffer : JavaLangAbstractStringBuilder < JavaLangAppendable, JavaIoSerializable, JavaLangCharSequence >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)cs;

- (instancetype)initWithInt:(jint)capacity;

- (instancetype)initWithNSString:(NSString *)string;

- (JavaLangStringBuffer *)appendWithBoolean:(jboolean)b;

- (JavaLangStringBuffer *)appendWithChar:(jchar)ch;

- (JavaLangStringBuffer *)appendWithCharArray:(IOSCharArray *)chars;

- (JavaLangStringBuffer *)appendWithCharArray:(IOSCharArray *)chars
                                      withInt:(jint)start
                                      withInt:(jint)length;

- (JavaLangStringBuffer *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)s;

- (JavaLangStringBuffer *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                                 withInt:(jint)start
                                                 withInt:(jint)end;

- (JavaLangStringBuffer *)appendWithDouble:(jdouble)d;

- (JavaLangStringBuffer *)appendWithFloat:(jfloat)f;

- (JavaLangStringBuffer *)appendWithInt:(jint)i;

- (JavaLangStringBuffer *)appendWithLong:(jlong)l;

- (JavaLangStringBuffer *)appendWithId:(id)obj;

- (JavaLangStringBuffer *)appendWithNSString:(NSString *)string;

- (JavaLangStringBuffer *)appendWithJavaLangStringBuffer:(JavaLangStringBuffer *)sb;

- (JavaLangStringBuffer *)appendCodePointWithInt:(jint)codePoint;

- (jchar)charAtWithInt:(jint)index;

- (jint)codePointAtWithInt:(jint)index;

- (jint)codePointBeforeWithInt:(jint)index;

- (jint)codePointCountWithInt:(jint)beginIndex
                      withInt:(jint)endIndex;

- (JavaLangStringBuffer *)delete__WithInt:(jint)start
                                  withInt:(jint)end;

- (JavaLangStringBuffer *)deleteCharAtWithInt:(jint)location;

- (void)ensureCapacityWithInt:(jint)min;

- (void)getCharsWithInt:(jint)start
                withInt:(jint)end
          withCharArray:(IOSCharArray *)buffer
                withInt:(jint)idx;

- (jint)indexOfWithNSString:(NSString *)subString
                    withInt:(jint)start;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
                            withBoolean:(jboolean)b;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
                               withChar:(jchar)ch;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
                          withCharArray:(IOSCharArray *)chars;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
                          withCharArray:(IOSCharArray *)chars
                                withInt:(jint)start
                                withInt:(jint)length;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
               withJavaLangCharSequence:(id<JavaLangCharSequence>)s;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
               withJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                withInt:(jint)start
                                withInt:(jint)end;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
                             withDouble:(jdouble)d;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
                              withFloat:(jfloat)f;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
                                withInt:(jint)i;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
                               withLong:(jlong)l;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
                                 withId:(id)obj;

- (JavaLangStringBuffer *)insertWithInt:(jint)index
                           withNSString:(NSString *)string;

- (jint)lastIndexOfWithNSString:(NSString *)subString
                        withInt:(jint)start;

- (jint)length;

- (jint)offsetByCodePointsWithInt:(jint)index
                          withInt:(jint)codePointOffset;

- (JavaLangStringBuffer *)replaceWithInt:(jint)start
                                 withInt:(jint)end
                            withNSString:(NSString *)string;

- (JavaLangStringBuffer *)reverse;

- (void)setCharAtWithInt:(jint)index
                withChar:(jchar)ch;

- (void)setLengthWithInt:(jint)length;

- (id<JavaLangCharSequence>)subSequenceFrom:(jint)start
                                         to:(jint)end;

- (NSString *)substringWithInt:(jint)start;

- (NSString *)substringWithInt:(jint)start
                       withInt:(jint)end;

- (NSString *)description;

- (void)trimToSize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStringBuffer)

FOUNDATION_EXPORT void JavaLangStringBuffer_init(JavaLangStringBuffer *self);

FOUNDATION_EXPORT JavaLangStringBuffer *new_JavaLangStringBuffer_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangStringBuffer_initWithInt_(JavaLangStringBuffer *self, jint capacity);

FOUNDATION_EXPORT JavaLangStringBuffer *new_JavaLangStringBuffer_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangStringBuffer_initWithNSString_(JavaLangStringBuffer *self, NSString *string);

FOUNDATION_EXPORT JavaLangStringBuffer *new_JavaLangStringBuffer_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangStringBuffer_initWithJavaLangCharSequence_(JavaLangStringBuffer *self, id<JavaLangCharSequence> cs);

FOUNDATION_EXPORT JavaLangStringBuffer *new_JavaLangStringBuffer_initWithJavaLangCharSequence_(id<JavaLangCharSequence> cs) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStringBuffer)

#endif // _JavaLangStringBuffer_H_