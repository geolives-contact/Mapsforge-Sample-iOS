//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/verification/Timeout.java
//

#ifndef _OrgMockitoVerificationTimeout_H_
#define _OrgMockitoVerificationTimeout_H_

#include "J2ObjC_header.h"
#include "org/mockito/verification/VerificationWithTimeout.h"

@class OrgMockitoInternalVerificationVerificationWithTimeoutImpl;
@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoVerificationVerificationMode;

@interface OrgMockitoVerificationTimeout : NSObject < OrgMockitoVerificationVerificationWithTimeout > {
 @public
  OrgMockitoInternalVerificationVerificationWithTimeoutImpl *impl_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)millis
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)delegate;

- (id<OrgMockitoVerificationVerificationMode>)atLeastWithInt:(jint)minNumberOfInvocations;

- (id<OrgMockitoVerificationVerificationMode>)atLeastOnce;

- (id<OrgMockitoVerificationVerificationMode>)atMostWithInt:(jint)maxNumberOfInvocations;

- (id<OrgMockitoVerificationVerificationMode>)never;

- (id<OrgMockitoVerificationVerificationMode>)only;

- (id<OrgMockitoVerificationVerificationMode>)timesWithInt:(jint)wantedNumberOfInvocations;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)treshhold
                    withInt:(jint)millis
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoVerificationTimeout)

J2OBJC_FIELD_SETTER(OrgMockitoVerificationTimeout, impl_, OrgMockitoInternalVerificationVerificationWithTimeoutImpl *)

FOUNDATION_EXPORT void OrgMockitoVerificationTimeout_initWithInt_withOrgMockitoVerificationVerificationMode_(OrgMockitoVerificationTimeout *self, jint millis, id<OrgMockitoVerificationVerificationMode> delegate);

FOUNDATION_EXPORT OrgMockitoVerificationTimeout *new_OrgMockitoVerificationTimeout_initWithInt_withOrgMockitoVerificationVerificationMode_(jint millis, id<OrgMockitoVerificationVerificationMode> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoVerificationTimeout_initWithInt_withInt_withOrgMockitoVerificationVerificationMode_(OrgMockitoVerificationTimeout *self, jint treshhold, jint millis, id<OrgMockitoVerificationVerificationMode> delegate);

FOUNDATION_EXPORT OrgMockitoVerificationTimeout *new_OrgMockitoVerificationTimeout_initWithInt_withInt_withOrgMockitoVerificationVerificationMode_(jint treshhold, jint millis, id<OrgMockitoVerificationVerificationMode> delegate) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoVerificationTimeout)

#endif // _OrgMockitoVerificationTimeout_H_
