//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/math/src/main/java/java/math/Conversion.java
//

#ifndef _JavaMathConversion_H_
#define _JavaMathConversion_H_

#include "J2ObjC_header.h"

@class IOSIntArray;
@class JavaMathBigInteger;

@interface JavaMathConversion : NSObject

#pragma mark Package-Private

+ (jdouble)bigInteger2DoubleWithJavaMathBigInteger:(JavaMathBigInteger *)val;

+ (NSString *)bigInteger2StringWithJavaMathBigInteger:(JavaMathBigInteger *)val
                                              withInt:(jint)radix;

+ (jlong)divideLongByBillionWithLong:(jlong)a;

+ (NSString *)toDecimalScaledStringWithJavaMathBigInteger:(JavaMathBigInteger *)val
                                                  withInt:(jint)scale_;

+ (NSString *)toDecimalScaledStringWithLong:(jlong)value
                                    withInt:(jint)scale_;

@end

J2OBJC_STATIC_INIT(JavaMathConversion)

FOUNDATION_EXPORT IOSIntArray *JavaMathConversion_digitFitInInt_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathConversion, digitFitInInt_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *JavaMathConversion_bigRadices_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathConversion, bigRadices_, IOSIntArray *)

FOUNDATION_EXPORT NSString *JavaMathConversion_bigInteger2StringWithJavaMathBigInteger_withInt_(JavaMathBigInteger *val, jint radix);

FOUNDATION_EXPORT NSString *JavaMathConversion_toDecimalScaledStringWithJavaMathBigInteger_withInt_(JavaMathBigInteger *val, jint scale_);

FOUNDATION_EXPORT NSString *JavaMathConversion_toDecimalScaledStringWithLong_withInt_(jlong value, jint scale_);

FOUNDATION_EXPORT jlong JavaMathConversion_divideLongByBillionWithLong_(jlong a);

FOUNDATION_EXPORT jdouble JavaMathConversion_bigInteger2DoubleWithJavaMathBigInteger_(JavaMathBigInteger *val);

J2OBJC_TYPE_LITERAL_HEADER(JavaMathConversion)

#endif // _JavaMathConversion_H_