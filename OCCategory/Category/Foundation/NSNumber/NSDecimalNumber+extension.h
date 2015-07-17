//
//  NSDecimalNumber+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/13.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSDecimalNumber (Extensions)

/**
 *  根据 scale 取整数
 *
 *  @param scale 间隔
 *
 *  @return NSDecimalNumber
 */
- (NSDecimalNumber *)roundToScale:(NSUInteger)scale;

/**
 *  将小数装换成百分数
 *
 *  @param percent float
 *
 *  @return NSDecimalNumber
 */
- (NSDecimalNumber *)decimalNumberWithPercentage:(CGFloat)percent;

/**
 *  折扣
 *
 *  @param discountPercentage discountPercentage
 *
 *  @return NSDecimalNumber
 */
- (NSDecimalNumber *)decimalNumberWithDiscountPercentage:(NSDecimalNumber *)discountPercentage;
- (NSDecimalNumber *)decimalNumberWithDiscountPercentage:(NSDecimalNumber *)discountPercentage roundToScale:(NSUInteger)scale;
- (NSDecimalNumber *)discountPercentageWithBaseValue:(NSDecimalNumber *)baseValue;
- (NSDecimalNumber *)discountPercentageWithBaseValue:(NSDecimalNumber *)baseValue roundToScale:(NSUInteger)scale;

@end
