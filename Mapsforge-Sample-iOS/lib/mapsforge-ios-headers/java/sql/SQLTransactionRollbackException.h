//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLTransactionRollbackException.java
//

#ifndef _JavaSqlSQLTransactionRollbackException_H_
#define _JavaSqlSQLTransactionRollbackException_H_

#include "J2ObjC_header.h"
#include "java/sql/SQLTransientException.h"

@class JavaLangThrowable;

@interface JavaSqlSQLTransactionRollbackException : JavaSqlSQLTransientException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)reason;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLTransactionRollbackException)

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_init(JavaSqlSQLTransactionRollbackException *self);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_(JavaSqlSQLTransactionRollbackException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_(JavaSqlSQLTransactionRollbackException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withInt_(JavaSqlSQLTransactionRollbackException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithJavaLangThrowable_(JavaSqlSQLTransactionRollbackException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLTransactionRollbackException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLTransactionRollbackException *self, NSString *reason, NSString *sqlState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *sqlState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLTransactionRollbackException *self, NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLTransactionRollbackException)

#endif // _JavaSqlSQLTransactionRollbackException_H_