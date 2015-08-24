//
//  CATransaction+AnimateWithDuration.m
//  OCCategory
//
//  Created by Broccoli on 15/8/24.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import "CATransaction+AnimateWithDuration.h"

@implementation CATransaction (AnimateWithDuration)

+ (void)animateWithDuration:(NSTimeInterval)duration
                 animations:(void (^)(void))animations
                 completion:(void (^)())completion {
    [CATransaction begin];
    [CATransaction setAnimationDuration:duration];
    
    if (completion) {
        [CATransaction setCompletionBlock:completion];
    }
    
    if (animations) {
        animations();
    }
    [CATransaction commit];
}

@end
