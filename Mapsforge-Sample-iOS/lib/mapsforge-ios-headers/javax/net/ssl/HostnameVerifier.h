//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/HostnameVerifier.java
//

#ifndef _JavaxNetSslHostnameVerifier_H_
#define _JavaxNetSslHostnameVerifier_H_

#include "J2ObjC_header.h"

@protocol JavaxNetSslSSLSession;

@protocol JavaxNetSslHostnameVerifier < NSObject, JavaObject >

- (jboolean)verifyWithNSString:(NSString *)hostname
     withJavaxNetSslSSLSession:(id<JavaxNetSslSSLSession>)session;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslHostnameVerifier)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslHostnameVerifier)

#endif // _JavaxNetSslHostnameVerifier_H_