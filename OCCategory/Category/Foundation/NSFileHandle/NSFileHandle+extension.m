//
//  NSFileHandle+extension.m
//  OCCategory
//
//  Created by Broccoli on 15/7/13.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import "NSFileHandle+extension.h"

@implementation NSFileHandle (extension)

- (NSData *)readLineWithDelimiter:(NSString *)delimiterStr {
   
    // 设置缓冲区大小
    NSUInteger bufferSize = 1024;
    
    // 将 delimiterStr 转换成 Char
    NSData *delimiterData = [delimiterStr dataUsingEncoding:NSASCIIStringEncoding];
    const char *delimiter = [delimiterData bytes];
    
    NSUInteger delimiterIndex = 0;
    NSData *lineData;
    
    unsigned long long currentPosition = [self offsetInFile];
    NSUInteger positionOffset = 0;
    
    BOOL hasData = YES;
    BOOL lineBreakFound = NO;
    
    while (lineBreakFound == NO && hasData == YES) {
        lineData = [self readDataOfLength:bufferSize];
        
        if ([lineData length] > 0) {
            const char *buffer = [lineData bytes];
            
            for (int i = 0; i < [lineData length]; i++) {
                if (buffer[i] == delimiter[delimiterIndex]) {
                    delimiterIndex++;
                    
                    if (delimiterIndex >= [delimiterData length]) {
                        lineBreakFound = YES;
                        positionOffset += i + 1;
                        break;
                    }
                } else {
                    delimiterIndex = 0;
                }
            }
             if (lineBreakFound == NO) {
                positionOffset += [lineData length];
            }
        } else {
            hasData = NO;
            break;
        }
    }
    
    [self seekToFileOffset:currentPosition];
    
    NSData *returnData = [self readDataOfLength:positionOffset];
    
    if ([returnData length] > 0) {
        return returnData;
    } else {
        return nil;
    }
}

@end
