//
//  NSDate+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/17.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (extension)

/**
 *  翻译成几分钟前
 *
 *  @return NSString
 */
- (NSString *) timeAgo;

/**
 *  获取几分钟时间前的格式
 *
 *  @param limit 时间间隔
 *
 *  @return NSString
 */
- (NSString *) timeAgoWithLimit:(NSTimeInterval)limit;
- (NSString *) timeAgoWithLimit:(NSTimeInterval)limit dateFormatter:(NSDateFormatter *)dateFormat;
- (NSString *) timeAgoWithLimit:(NSTimeInterval)limit dateFormat:(NSDateFormatterStyle)dateFormat andTimeFormat:(NSDateFormatterStyle)TimeFormat;

@end
