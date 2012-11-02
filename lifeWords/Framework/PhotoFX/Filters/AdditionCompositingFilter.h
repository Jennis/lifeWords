//
//  AdditionCompositingFilter.h
//  lifeWords
//
//  Copyright (c) 2012 simpleDudes. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Filter.h"

@interface AdditionCompositingFilter : Filter

+ (AdditionCompositingFilter *)filterWithInputBackgroundImage:(CIImage *)inputBackgroundImage;

@end
