//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/InnerNodeImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomInnerNodeImpl_H_
#define _OrgApacheHarmonyXmlDomInnerNodeImpl_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/xml/dom/LeafNodeImpl.h"

@class JavaLangStringBuilder;
@class OrgApacheHarmonyXmlDomDocumentImpl;
@class OrgApacheHarmonyXmlDomNodeListImpl;
@protocol JavaUtilList;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomNodeList;

@interface OrgApacheHarmonyXmlDomInnerNodeImpl : OrgApacheHarmonyXmlDomLeafNodeImpl {
 @public
  id<JavaUtilList> children_;
}

#pragma mark Public

- (id<OrgW3cDomNode>)appendChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild;

- (id<OrgW3cDomNodeList>)getChildNodes;

- (id<OrgW3cDomNode>)getFirstChild;

- (id<OrgW3cDomNode>)getLastChild;

- (id<OrgW3cDomNode>)getNextSibling;

- (NSString *)getTextContent;

- (jboolean)hasChildNodes;

- (id<OrgW3cDomNode>)insertBeforeWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)refChild;

- (jboolean)isParentOfWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (void)normalize;

- (id<OrgW3cDomNode>)removeChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

- (id<OrgW3cDomNode>)replaceChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

#pragma mark Protected

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document;

#pragma mark Package-Private

- (void)getElementsByTagNameWithOrgApacheHarmonyXmlDomNodeListImpl:(OrgApacheHarmonyXmlDomNodeListImpl *)outArg
                                                      withNSString:(NSString *)name;

- (void)getElementsByTagNameNSWithOrgApacheHarmonyXmlDomNodeListImpl:(OrgApacheHarmonyXmlDomNodeListImpl *)outArg
                                                        withNSString:(NSString *)namespaceURI
                                                        withNSString:(NSString *)localName;

- (void)getTextContentWithJavaLangStringBuilder:(JavaLangStringBuilder *)buf;

- (jboolean)hasTextContentWithOrgW3cDomNode:(id<OrgW3cDomNode>)child;

- (id<OrgW3cDomNode>)insertChildAtWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                            withInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomInnerNodeImpl)

J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomInnerNodeImpl, children_, id<JavaUtilList>)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomInnerNodeImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_(OrgApacheHarmonyXmlDomInnerNodeImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomInnerNodeImpl)

#endif // _OrgApacheHarmonyXmlDomInnerNodeImpl_H_