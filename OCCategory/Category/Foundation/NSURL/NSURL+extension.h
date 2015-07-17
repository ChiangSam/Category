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
 *  取出URL中的参数
 *
 *  @return NSDictionary
 */
- (NSDictionary *)parameter;
- (NSString *)valueForParameter:(NSString *)parameterKey;

@end
