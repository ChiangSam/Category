//
//  NSUserDefaults+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/18.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (convenience)

/**
 *  保存到对象
 *
 *  @param value
 *  @param key
 */
+ (void)saveValue:(id)value forKey:(NSString *)key;

/**
 *  获取对象
 *
 *  @param key
 *
 *  @return
 */
+ (id)getValueForKey:(NSString *)key;

/**
 *  获取 NSString
 *
 *  @param key
 *
 *  @return NSString 类型
 */
+ (NSString *)stringForKey:(NSString *)key;

/**
 *  获取 NSArray
 *
 *  @param key
 *
 *  @return NSArray 类型
 */
+ (NSArray *)arrayForKey:(NSString *)key;

/**
 *  获取 NSArray
 *
 *  @param key
 *
 *  @return NSArray 类型
 */
+ (NSDictionary *)dictionaryForKey:(NSString *)key;

/**
 *  获取 NSArray
 *
 *  @param key
 *
 *  @return NSArray 类型
 */
+ (NSData *)dataForKey:(NSString *)key;

/**
 *  获取 NSArray
 *
 *  @param key
 *
 *  @return NSArray 类型
 */
+ (NSArray *)stringArrayForKey:(NSString *)key;

/**
 *  获取 NSInteger
 *
 *  @param key
 *
 *  @return NSInteger 类型
 */
+ (NSInteger)integerForKey:(NSString *)key;

/**
 *  获取 float
 *
 *  @param key
 *
 *  @return float 类型
 */
+ (float)floatForKey:(NSString *)key;

/**
 *  获取 double
 *
 *  @param key
 *
 *  @return double 类型
 */
+ (double)doubleForKey:(NSString *)key;

/**
 *  获取 BOOL
 *
 *  @param key
 *
 *  @return BOOL 类型
 */
+ (BOOL)boolForKey:(NSString *)key;

/**
 *  获取 NSURL
 *
 *  @param key
 *
 *  @return NSURL 类型
 */
+ (NSURL *)URLForKey:(NSString *)key;

@end
