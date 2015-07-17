//
//  NSDictionary+extension.m
//  OCCategory
//
//  Created by Broccoli on 15/7/17.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import "NSDictionary+extension.h"

@implementation NSDictionary (extension)

- (NSString *)toJSONString {
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:self
                                                       options:NSJSONWritingPrettyPrinted
                                                         error:nil];

   return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}

@end
