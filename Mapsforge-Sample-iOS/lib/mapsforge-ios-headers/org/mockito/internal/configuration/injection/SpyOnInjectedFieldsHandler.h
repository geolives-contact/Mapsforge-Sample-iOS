//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/SpyOnInjectedFieldsHandler.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler_H_
#define _OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/configuration/injection/MockInjectionStrategy.h"

@class JavaLangReflectField;
@protocol JavaUtilSet;

@interface OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler : OrgMockitoInternalConfigurationInjectionMockInjectionStrategy

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (jboolean)processInjectionWithJavaLangReflectField:(JavaLangReflectField *)field
                                              withId:(id)fieldOwner
                                     withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler_init(OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler *new_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler)

#endif // _OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler_H_
