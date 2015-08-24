//
//  NSString+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/17.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
enum{
    NSStringScoreOptionNone                         = 1 << 0,
    NSStringScoreOptionFavorSmallerWords            = 1 << 1,
    NSStringScoreOptionReducedLongStringPenalty     = 1 << 2
};

typedef NSUInteger NSStringScoreOption;


@interface NSString (extension)

/**
 *  根据 font 获取 string 边框的高/宽
 *
 *  @param font  字体
 *  @param width 最大的宽
 *
 *  @return CGFloat
 */
- (CGFloat)heightWithFont:(UIFont *)font constrainedToWidth:(CGFloat)width;
- (CGFloat)widthWithFont:(UIFont *)font constrainedToHeight:(CGFloat)height;

/**
 *  根据 font 获取 string 的 size
 *
 *  @param font  字体
 *  @param width 最大的宽/高
 *
 *  @return
 */
- (CGSize)sizeWithFont:(UIFont *)font constrainedToWidth:(CGFloat)width;
- (CGSize)sizeWithFont:(UIFont *)font constrainedToHeight:(CGFloat)height;

/**
 *  翻转string
 *
 *  @param string
 *
 *  @return string
 */
+ (NSString *)reverseString:(NSString *)string;

/**
 *  模糊匹配字符串
 *
 *  @param otherString
 *
 *  @return 返回 相似程度
 */
- (CGFloat)scoreAgainst:(NSString *)otherString;
- (CGFloat)scoreAgainst:(NSString *)otherString fuzziness:(NSNumber *)fuzziness;
- (CGFloat)scoreAgainst:(NSString *)otherString fuzziness:(NSNumber *)fuzziness options:(NSStringScoreOption)options;


/**
 *  AES 算法 加密解密
 *
 *  @param key
 *  @param date
 *
 *  @return string
 */
- (NSString *)encryptedWithAESUsingKey:(NSString *)key date:(NSData *)date;
- (NSString *)decryptedWithAESUsingKey:(NSString *)key date:(NSData *)date;


/**
 *  判断URL中是否包含中文
 *
 *  @return bool
 */
- (BOOL)isContainChinese;

/**
 *  是否包含空格
 *
 *  @return bool
 */
- (BOOL)isContainBlank;

/**
 *  Unicode编码的字符串转成NSString
 *
 *  @return string
 */
- (NSString *)makeUnicodeToString;

/**
 *  是否包含string
 *
 *  @param string 要查找的string
 *
 *  @return bool
 */
- (BOOL)containsString:(NSString *)string;

/**
 *  字数
 *
 *  @return 字数
 */
- (NSInteger)wordsCount;

/**
 *  从身份证上判断sex信息
 *
 *  @return
 */
- (BOOL)sexInfo;

/**
 *  时间格式转换    默认老的日期格式是yyyy-MM-dd HH:mm:ss
 *
 *  @param newFormat
 *
 *  @return
 */
- (NSString *)stringToNewFormat:(NSString*)newFormat;

/**
 *  从老的日期格式转换成新的日期格式
 *
 *  @param oldFormat 旧日期格式
 *  @param newFormat 新日期格式
 *
 *  @return
 */
- (NSString *)stringOldFormat:(NSString*)oldFormat toNewFormat:(NSString*)newFormat;

/**
 *  string转date
 *
 *  @param format
 *
 *  @return
 */
- (NSDate *)stringToDate:(NSString *)format;

@end
