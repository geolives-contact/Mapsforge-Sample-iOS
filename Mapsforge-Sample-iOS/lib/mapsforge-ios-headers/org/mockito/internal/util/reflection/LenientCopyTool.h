//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/util/reflection/LenientCopyTool.java
//

#ifndef _OrgMockitoInternalUtilReflectionLenientCopyTool_H_
#define _OrgMockitoInternalUtilReflectionLenientCopyTool_H_

#include "J2ObjC_header.h"

@class OrgMockitoInternalUtilReflectionFieldCopier;

@interface OrgMockitoInternalUtilReflectionLenientCopyTool : NSObject {
 @public
  OrgMockitoInternalUtilReflectionFieldCopier *fieldCopier_;
}

#pragma mark Public

- (instancetype)init;

- (void)copyToMockWithId:(id)from
                  withId:(id)mock OBJC_METHOD_FAMILY_NONE;

- (void)copyToRealObjectWithId:(id)from
                        withId:(id)to OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionLenientCopyTool)

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionLenientCopyTool, fieldCopier_, OrgMockitoInternalUtilReflectionFieldCopier *)

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionLenientCopyTool_init(OrgMockitoInternalUtilReflectionLenientCopyTool *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionLenientCopyTool *new_OrgMockitoInternalUtilReflectionLenientCopyTool_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionLenientCopyTool)

#endif // _OrgMockitoInternalUtilReflectionLenientCopyTool_H_
