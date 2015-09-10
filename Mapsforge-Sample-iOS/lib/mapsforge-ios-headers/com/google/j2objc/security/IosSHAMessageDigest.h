//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/security/IosSHAMessageDigest.java
//

#ifndef _ComGoogleJ2objcSecurityIosSHAMessageDigest_H_
#define _ComGoogleJ2objcSecurityIosSHAMessageDigest_H_

#include "J2ObjC_header.h"
#include "java/security/MessageDigest.h"

@class IOSByteArray;
@class JavaIoByteArrayOutputStream;

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest : JavaSecurityMessageDigest < NSCopying > {
 @public
  JavaIoByteArrayOutputStream *buffer_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)algorithm;

#pragma mark Protected

- (void)engineReset;

- (void)engineUpdateWithByte:(jbyte)input;

- (void)engineUpdateWithByteArray:(IOSByteArray *)input
                          withInt:(jint)offset
                          withInt:(jint)len;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSHAMessageDigest)

J2OBJC_FIELD_SETTER(ComGoogleJ2objcSecurityIosSHAMessageDigest, buffer_, JavaIoByteArrayOutputStream *)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosSHAMessageDigest_initWithNSString_(ComGoogleJ2objcSecurityIosSHAMessageDigest *self, NSString *algorithm);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSHAMessageDigest)

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA1 : ComGoogleJ2objcSecurityIosSHAMessageDigest

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (IOSByteArray *)engineDigest;

- (jint)engineGetDigestLength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA1)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA1_init(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA1 *self);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA1 *new_ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA1_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA1)

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA256 : ComGoogleJ2objcSecurityIosSHAMessageDigest

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (IOSByteArray *)engineDigest;

- (jint)engineGetDigestLength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA256)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA256_init(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA256 *self);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA256 *new_ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA256_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA256)

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA384 : ComGoogleJ2objcSecurityIosSHAMessageDigest

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (IOSByteArray *)engineDigest;

- (jint)engineGetDigestLength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA384)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA384_init(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA384 *self);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA384 *new_ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA384_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA384)

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA512 : ComGoogleJ2objcSecurityIosSHAMessageDigest

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (IOSByteArray *)engineDigest;

- (jint)engineGetDigestLength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA512)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA512_init(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA512 *self);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA512 *new_ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA512_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA512)

#endif // _ComGoogleJ2objcSecurityIosSHAMessageDigest_H_