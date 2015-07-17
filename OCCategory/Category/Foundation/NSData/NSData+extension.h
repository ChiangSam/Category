//
//  NSData+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/17.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <zlib.h>

extern NSString* const GzipErrorDomain;

@interface NSData (extension)

/**
 *  将 string 用 base64 转码成 NSData
 *
 *  @param string
 *
 *  @return NSData
 */
+ (NSData *)dataWithBase64EncodedString:(NSString *)string;

/**
 *  将 NSdata 转成 string
 *
 *  @param wrapWidth 宽度
 *
 *  @return NSString
 */
- (NSString *)base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth;

// 默认宽度为 0
- (NSString *)base64EncodedString;






/**
 *  AES加密数据
 *
 *  @param key
 *  @param date
 *
 *  @return data
 */
- (NSData *)encryptedWithAESUsingKey:(NSString *)key date:(NSData *)date;
/**
 *  AES解密数据
 *
 *  @param key
 *  @param date
 *
 *  @return date
 */
- (NSData *)decryptedWithAESUsingKey:(NSString *)key date:(NSData *)date;

@end
