//
//  NSURL+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/13.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (extension)

/**
 *  取出 URL 中的参数
 *
 *  @return NSDictionary
 */
- (NSDictionary *)parameter;

/**
 *  取出 URL 参数的值
 *
 *  @param parameterKey Key
 *
 *  @return Value
 */
- (NSString *)valueForParameter:(NSString *)parameterKey;

@end
