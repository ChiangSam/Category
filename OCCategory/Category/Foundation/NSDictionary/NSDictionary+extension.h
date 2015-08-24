//
//  NSDictionary+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/17.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (extension) 

/**
 *  转成 JSON 字符串
 *
 *  @return JSON 字符串
 */
- (NSString *)toJSONString;

/**
 *  合并两个 NSDictionary
 *
 *  @param dict 字典
 *
 *  @return 字典
 */
- (NSDictionary *)dictionaryByMergingWith:(NSDictionary *)dict;
+ (NSDictionary *)dictionaryByMerging:(NSDictionary *)dict1 with:(NSDictionary *)dict2;

/**
 *  遍历 字典
 *
 *  @param block
 */
- (void)each:(void (^)(id key, id value))block;
- (void)eachKey:(void (^)(id key))block;
- (void)eachValue:(void (^)(id value))block;

/**
 *  根据 keys 取出NSDictionary
 *
 *  @param keys
 *
 *  @return
 */
- (NSDictionary *)pick:(NSArray *)keys;

/**
 *  根据 keys 取出NSDictionary
 *
 *  @param keys
 *
 *  @return
 */
- (NSDictionary *)omit:(NSArray *)keys;

@end
