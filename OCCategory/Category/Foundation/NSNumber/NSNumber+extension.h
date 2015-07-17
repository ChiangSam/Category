//
//  NSNumber+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/13.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (extension)

/**
 *  设置间距
 *
 *  @param digit digit
 *
 *  @return NSString
 */
- (NSString *)toDisplayNumberWithDigit:(NSInteger)digit;
- (NSString *)toDisplayPercentageWithDigit:(NSInteger)digit;

/**
 *  四舍五入
 *
 *  @param digit
 *
 *  @return NSNumber
 */
- (NSNumber *)doRoundWithDigit:(NSUInteger)digit;
- (NSNumber *)doCeilWithDigit:(NSUInteger)digit;
- (NSNumber *)doFloorWithDigit:(NSUInteger)digit;

@end
