//
//  WhitePointAdjustFilter.h
//  lifeWords
//
//  Copyright (c) 2012 simpleDudes. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Filter.h"

@interface WhitePointAdjustFilter : Filter

+ (WhitePointAdjustFilter *)filterWithInputColor:(CIColor *)inputColor;

@end
