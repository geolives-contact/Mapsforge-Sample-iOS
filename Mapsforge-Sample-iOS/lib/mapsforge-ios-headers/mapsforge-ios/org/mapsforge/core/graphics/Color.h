//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/Color.java
//

#ifndef _OrgMapsforgeCoreGraphicsColor_H_
#define _OrgMapsforgeCoreGraphicsColor_H_

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, OrgMapsforgeCoreGraphicsColor) {
  OrgMapsforgeCoreGraphicsColor_BLACK = 0,
  OrgMapsforgeCoreGraphicsColor_BLUE = 1,
  OrgMapsforgeCoreGraphicsColor_GREEN = 2,
  OrgMapsforgeCoreGraphicsColor_RED = 3,
  OrgMapsforgeCoreGraphicsColor_TRANSPARENT = 4,
  OrgMapsforgeCoreGraphicsColor_WHITE = 5,
};

@interface OrgMapsforgeCoreGraphicsColorEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *OrgMapsforgeCoreGraphicsColorEnum_values();

+ (OrgMapsforgeCoreGraphicsColorEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsColorEnum *OrgMapsforgeCoreGraphicsColorEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeCoreGraphicsColorEnum)

FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsColorEnum *OrgMapsforgeCoreGraphicsColorEnum_values_[];

#define OrgMapsforgeCoreGraphicsColorEnum_BLACK OrgMapsforgeCoreGraphicsColorEnum_values_[OrgMapsforgeCoreGraphicsColor_BLACK]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMapsforgeCoreGraphicsColorEnum, BLACK)

#define OrgMapsforgeCoreGraphicsColorEnum_BLUE OrgMapsforgeCoreGraphicsColorEnum_values_[OrgMapsforgeCoreGraphicsColor_BLUE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMapsforgeCoreGraphicsColorEnum, BLUE)

#define OrgMapsforgeCoreGraphicsColorEnum_GREEN OrgMapsforgeCoreGraphicsColorEnum_values_[OrgMapsforgeCoreGraphicsColor_GREEN]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMapsforgeCoreGraphicsColorEnum, GREEN)

#define OrgMapsforgeCoreGraphicsColorEnum_RED OrgMapsforgeCoreGraphicsColorEnum_values_[OrgMapsforgeCoreGraphicsColor_RED]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMapsforgeCoreGraphicsColorEnum, RED)

#define OrgMapsforgeCoreGraphicsColorEnum_TRANSPARENT OrgMapsforgeCoreGraphicsColorEnum_values_[OrgMapsforgeCoreGraphicsColor_TRANSPARENT]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMapsforgeCoreGraphicsColorEnum, TRANSPARENT)

#define OrgMapsforgeCoreGraphicsColorEnum_WHITE OrgMapsforgeCoreGraphicsColorEnum_values_[OrgMapsforgeCoreGraphicsColor_WHITE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMapsforgeCoreGraphicsColorEnum, WHITE)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsColorEnum)

#endif // _OrgMapsforgeCoreGraphicsColor_H_
