//
//  CATransaction+AnimateWithDuration.h
//  OCCategory
//
//  Created by Broccoli on 15/8/24.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CATransaction (AnimateWithDuration)

+ (void)animateWithDuration:(NSTimeInterval)duration
                 animations:(nullable void (^)(void))animations
                 completion:(nullable void (^)())completion;

@end
