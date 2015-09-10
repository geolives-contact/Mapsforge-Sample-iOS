//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/primitives/UnsignedLong.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonPrimitivesUnsignedLong_INCLUDE_ALL")
#if ComGoogleCommonPrimitivesUnsignedLong_RESTRICT
#define ComGoogleCommonPrimitivesUnsignedLong_INCLUDE_ALL 0
#else
#define ComGoogleCommonPrimitivesUnsignedLong_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesUnsignedLong_RESTRICT

#if !defined (_ComGoogleCommonPrimitivesUnsignedLong_) && (ComGoogleCommonPrimitivesUnsignedLong_INCLUDE_ALL || ComGoogleCommonPrimitivesUnsignedLong_INCLUDE)
#define _ComGoogleCommonPrimitivesUnsignedLong_

#define JavaLangComparable_RESTRICT 1
#define JavaLangComparable_INCLUDE 1
#include "java/lang/Comparable.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class JavaMathBigInteger;

@interface ComGoogleCommonPrimitivesUnsignedLong : NSNumber < JavaLangComparable, JavaIoSerializable >

#pragma mark Public

- (ComGoogleCommonPrimitivesUnsignedLong *)addWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

+ (ComGoogleCommonPrimitivesUnsignedLong *)asUnsignedWithLong:(jlong)value;

- (JavaMathBigInteger *)bigIntegerValue;

- (jint)compareToWithId:(ComGoogleCommonPrimitivesUnsignedLong *)o;

- (ComGoogleCommonPrimitivesUnsignedLong *)divideWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (ComGoogleCommonPrimitivesUnsignedLong *)dividedByWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (jdouble)doubleValue;

- (jboolean)isEqual:(id)obj;

- (jfloat)floatValue;

+ (ComGoogleCommonPrimitivesUnsignedLong *)fromLongBitsWithLong:(jlong)bits;

- (NSUInteger)hash;

- (jint)intValue;

- (jlong)longLongValue;

- (ComGoogleCommonPrimitivesUnsignedLong *)minusWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (ComGoogleCommonPrimitivesUnsignedLong *)modWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (ComGoogleCommonPrimitivesUnsignedLong *)multiplyWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (ComGoogleCommonPrimitivesUnsignedLong *)plusWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (ComGoogleCommonPrimitivesUnsignedLong *)remainderWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (ComGoogleCommonPrimitivesUnsignedLong *)subtractWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (ComGoogleCommonPrimitivesUnsignedLong *)timesWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (NSString *)description;

- (NSString *)toStringWithInt:(jint)radix;

+ (ComGoogleCommonPrimitivesUnsignedLong *)valueOfWithJavaMathBigInteger:(JavaMathBigInteger *)value;

+ (ComGoogleCommonPrimitivesUnsignedLong *)valueOfWithLong:(jlong)value;

+ (ComGoogleCommonPrimitivesUnsignedLong *)valueOfWithNSString:(NSString *)string;

+ (ComGoogleCommonPrimitivesUnsignedLong *)valueOfWithNSString:(NSString *)string
                                                       withInt:(jint)radix;

#pragma mark Package-Private



@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedLong)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_ZERO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedLong, ZERO_, ComGoogleCommonPrimitivesUnsignedLong *)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_ONE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedLong, ONE_, ComGoogleCommonPrimitivesUnsignedLong *)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_MAX_VALUE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedLong, MAX_VALUE_, ComGoogleCommonPrimitivesUnsignedLong *)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_asUnsignedWithLong_(jlong value);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_fromLongBitsWithLong_(jlong bits);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_valueOfWithLong_(jlong value);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_valueOfWithJavaMathBigInteger_(JavaMathBigInteger *value);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_valueOfWithNSString_(NSString *string);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_valueOfWithNSString_withInt_(NSString *string, jint radix);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedLong)

#endif
#pragma pop_macro("ComGoogleCommonPrimitivesUnsignedLong_INCLUDE_ALL")