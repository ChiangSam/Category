//
//  NSDateFormatter+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/13.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDateFormatter (extension)

/**
 *  根据 format 格式化日期
 *
 *  @param format
 *
 *  @return NSDateFormatter
 */
+ (NSDateFormatter *)dateFormatterWithFormat:(NSString *)format;
+ (NSDateFormatter *)dateFormatterWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone;
+ (NSDateFormatter *)dateFormatterWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;

/**
 *  根据 style 格式
 *
 *  @param style style
 *
 *  @return NSDateFormatter
 */
+ (NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)style;
+ (NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;

/**
 *  根据 style 根式
 *
 *  @param style
 *
 *  @return NSDateFormatter
 */
+ (NSDateFormatter *)dateFormatterWithTimeStyle:(NSDateFormatterStyle)style;
+ (NSDateFormatter *)dateFormatterWithTimeStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;

@end
