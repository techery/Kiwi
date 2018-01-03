//---------------------------------------------------------------------------------------
//  $Id$
//  Copyright (c) 2006-2009 by Mulle Kybernetik. See License file for details.
//---------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>

@interface NSInvocation(KWAdditions)

- (id)kw_getArgumentAtIndexAsObject:(int)argIndex;

- (NSString *)kw_invocationDescription;

- (NSString *)kw_argumentDescriptionAtIndex:(int)argIndex;

- (NSString *)kw_objectDescriptionAtIndex:(int)anInt;
- (NSString *)kw_charDescriptionAtIndex:(int)anInt;
- (NSString *)kw_unsignedCharDescriptionAtIndex:(int)anInt;
- (NSString *)kw_intDescriptionAtIndex:(int)anInt;
- (NSString *)kw_unsignedIntDescriptionAtIndex:(int)anInt;
- (NSString *)kw_shortDescriptionAtIndex:(int)anInt;
- (NSString *)kw_unsignedShortDescriptionAtIndex:(int)anInt;
- (NSString *)kw_longDescriptionAtIndex:(int)anInt;
- (NSString *)kw_unsignedLongDescriptionAtIndex:(int)anInt;
- (NSString *)kw_longLongDescriptionAtIndex:(int)anInt;
- (NSString *)kw_unsignedLongLongDescriptionAtIndex:(int)anInt;
- (NSString *)kw_doubleDescriptionAtIndex:(int)anInt;
- (NSString *)kw_floatDescriptionAtIndex:(int)anInt;
- (NSString *)kw_structDescriptionAtIndex:(int)anInt;
- (NSString *)kw_pointerDescriptionAtIndex:(int)anInt;
- (NSString *)kw_cStringDescriptionAtIndex:(int)anInt;
- (NSString *)kw_selectorDescriptionAtIndex:(int)anInt;

@end
