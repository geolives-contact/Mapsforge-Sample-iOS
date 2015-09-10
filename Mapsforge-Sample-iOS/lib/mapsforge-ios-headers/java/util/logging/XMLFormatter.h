//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/XMLFormatter.java
//

#ifndef _JavaUtilLoggingXMLFormatter_H_
#define _JavaUtilLoggingXMLFormatter_H_

#include "J2ObjC_header.h"
#include "java/util/logging/Formatter.h"

@class JavaUtilLoggingHandler;
@class JavaUtilLoggingLogRecord;

@interface JavaUtilLoggingXMLFormatter : JavaUtilLoggingFormatter

#pragma mark Public

- (instancetype)init;

- (NSString *)formatWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)r;

- (NSString *)getHeadWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)h;

- (NSString *)getTailWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)h;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingXMLFormatter)

FOUNDATION_EXPORT void JavaUtilLoggingXMLFormatter_init(JavaUtilLoggingXMLFormatter *self);

FOUNDATION_EXPORT JavaUtilLoggingXMLFormatter *new_JavaUtilLoggingXMLFormatter_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingXMLFormatter)

#endif // _JavaUtilLoggingXMLFormatter_H_