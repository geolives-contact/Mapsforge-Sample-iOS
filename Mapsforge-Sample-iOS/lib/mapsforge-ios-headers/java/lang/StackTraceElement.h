//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/StackTraceElement.java
//

#ifndef _JavaLangStackTraceElement_H_
#define _JavaLangStackTraceElement_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@interface JavaLangStackTraceElement : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)className_
                    withNSString:(NSString *)methodName
                    withNSString:(NSString *)fileName
                         withInt:(jint)lineNumber;

- (jboolean)isEqual:(id)obj;

- (NSString *)getClassName;

- (NSString *)getFileName;

- (jint)getLineNumber;

- (NSString *)getMethodName;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithLong:(jlong)address;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStackTraceElement)

FOUNDATION_EXPORT void JavaLangStackTraceElement_initWithNSString_withNSString_withNSString_withInt_(JavaLangStackTraceElement *self, NSString *className_, NSString *methodName, NSString *fileName, jint lineNumber);

FOUNDATION_EXPORT JavaLangStackTraceElement *new_JavaLangStackTraceElement_initWithNSString_withNSString_withNSString_withInt_(NSString *className_, NSString *methodName, NSString *fileName, jint lineNumber) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangStackTraceElement_initWithLong_(JavaLangStackTraceElement *self, jlong address);

FOUNDATION_EXPORT JavaLangStackTraceElement *new_JavaLangStackTraceElement_initWithLong_(jlong address) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStackTraceElement)

#endif // _JavaLangStackTraceElement_H_