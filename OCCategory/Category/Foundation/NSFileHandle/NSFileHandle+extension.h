//
//  NSFileHandle+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/13.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileHandle (extension)

/**
 *  根据delimiter读取文件
 *
 *  @param delimiter 分隔符
 *
 *  @return 文件数据
 */
- (NSData *)readLineWithDelimiter:(NSString *)delimiterStr;

@end
