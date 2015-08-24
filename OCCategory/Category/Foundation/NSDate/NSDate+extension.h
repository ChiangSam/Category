//
//  NSDate+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/17.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>

#define D_MINUTE	60
#define D_HOUR	3600
#define D_DAY	86400
#define D_WEEK	604800
#define D_YEAR	31556926

@interface NSDate (extension)

/**
 *  翻译成几分钟前
 *
 *  @return NSString
 */
- (NSString *)timeAgoDescription;

/**
 *  获取几分钟时间前的格式
 *
 *  @param limit 时间间隔
 *
 *  @return NSString
 */
- (NSString *)timeAgoWithLimit:(NSTimeInterval)limit;
- (NSString *)timeAgoWithLimit:(NSTimeInterval)limit dateFormatter:(NSDateFormatter *)dateFormat;
- (NSString *)timeAgoWithLimit:(NSTimeInterval)limit dateFormat:(NSDateFormatterStyle)dateFormat andTimeFormat:(NSDateFormatterStyle)TimeFormat;



/* 距离当前时间 时间间隔 */

/**
 *  取 明天的 NSDate
 *
 *  @return NSDate
 */
+ (NSDate *)dateTomorrow;

/**
 *  取 昨天的 NSDate
 *
 *  @return NSDate
 */
+ (NSDate *)dateYesterday;


/**
 *  当前时间 之后几年
 *
 *  @param dYears
 *
 *  @return NSDate
 */
- (NSDate *)dateByAddingYears:(NSInteger)years;

/**
 *  当前时间 之前几年
 *
 *  @param dYears
 *
 *  @return NSDate
 */
- (NSDate *)dateBySubtractingYears:(NSInteger)years;

/**
 *  当前时间 之后几月
 *
 *  @param dMonths
 *
 *  @return NSDate
 */
- (NSDate *)dateByAddingMonths:(NSInteger)months;

/**
 *  当前时间 之前几月
 *
 *  @param dMonths
 *
 *  @return NSDate
 */
- (NSDate *)dateBySubtractingMonths:(NSInteger)months;

/**
 *  当前时间 之后几天
 *
 *  @param dDays
 *
 *  @return NSDate
 */
- (NSDate *)dateByAddingDays:(NSInteger)days;

/**
 *  当前时间 之前几天
 *
 *  @param dDays
 *
 *  @return NSDate
 */
- (NSDate *)dateBySubtractingDays:(NSInteger)days;

/**
 *  当前时间 之后几小时
 *
 *  @param dHours
 *
 *  @return NSDate
 */
- (NSDate *)dateByAddingHours:(NSInteger)hours;

/**
 *  当前时间 之前几小时
 *
 *  @param dHours
 *
 *  @return NSDate
 */
- (NSDate *)dateBySubtractingHours:(NSInteger)hours;

/**
 *  当前时间 之后几分钟
 *
 *  @param dMinutes
 *
 *  @return NSDate
 */
- (NSDate *)dateByAddingMinutes:(NSInteger)minutes;

/**
 *  当前时间 之后几分钟
 *
 *  @param dMinutes
 *
 *  @return NSDate
 */
- (NSDate *)dateBySubtractingMinutes:(NSInteger)minutes;

/**
 *  判断是否是周末
 *
 *  @return Bool
 */
- (BOOL)isTypicallyWorkday;
- (BOOL)isTypicallyWeekend;


/**
 * 获取日、月、年、小时、分钟、秒
 */

- (NSUInteger)second;
- (NSUInteger)minute;
- (NSUInteger)hour;
- (NSUInteger)day;
- (NSUInteger)month;
- (NSUInteger)year;

+ (NSUInteger)second:(NSDate *)date;
+ (NSUInteger)minute:(NSDate *)date;
+ (NSUInteger)hour:(NSDate *)date;
+ (NSUInteger)day:(NSDate *)date;
+ (NSUInteger)month:(NSDate *)date;
+ (NSUInteger)year:(NSDate *)date;


/**
 * 获取一年中的总天数
 */
- (NSUInteger)daysInYear;
+ (NSUInteger)daysInYear:(NSDate *)date;

/**
 * 判断是否是润年
 * @return YES表示润年，NO表示平年
 */
- (BOOL)isLeapYear;
+ (BOOL)isLeapYear:(NSDate *)date;

/**
 * 获取该日期是该年的第几周
 */
- (NSUInteger)weekOfYear;
+ (NSUInteger)weekOfYear:(NSDate *)date;

/**
 * 获取该月的第一天的日期
 */
- (NSDate *)begindayOfMonth;
+ (NSDate *)begindayOfMonth:(NSDate *)date;

/**
 * 获取该月的最后一天的日期
 */
- (NSDate *)lastdayOfMonth;
+ (NSDate *)lastdayOfMonth:(NSDate *)date;

/**
 * 返回day天后的日期
 */
- (NSDate *)dateAfterDay:(NSUInteger)day;
+ (NSDate *)dateAfterDate:(NSDate *)date day:(NSInteger)day;

/**
 * 返回month月后的日期
 */
- (NSDate *)dateAfterMonth:(NSUInteger)month;
+ (NSDate *)dateAfterDate:(NSDate *)date month:(NSInteger)month;

/**
 *  获取星期几
 *
 *  @return Return weekday number
 *  [1 - Sunday]
 *  [2 - Monday]
 *  [3 - Tuerday]
 *  [4 - Wednesday]
 *  [5 - Thursday]
 *  [6 - Friday]
 *  [7 - Saturday]
 */
- (NSInteger)weekday;
+ (NSInteger)weekday:(NSDate *)date;

/**
 *  获取星期几(名称)
 *
 *  @return Return weekday as a localized string
 *  [1 - Sunday]
 *  [2 - Monday]
 *  [3 - Tuerday]
 *  [4 - Wednesday]
 *  [5 - Thursday]
 *  [6 - Friday]
 *  [7 - Saturday]
 */
- (NSString *)dayFromWeekday;
+ (NSString *)dayFromWeekday:(NSDate *)date;

/**
 * 根据日期返回字符串
 */
- (NSString *)stringWithFormat:(NSString *)format;
+ (NSString *)stringWithDate:(NSDate *)date format:(NSString *)format;
+ (NSDate *)dateWithString:(NSString *)string format:(NSString *)format;
@end
