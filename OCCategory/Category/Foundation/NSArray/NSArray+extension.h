//
//  NSArray+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/18.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (extension)

/**
 *  取到某一项的的前一项
 *
 *  @param object
 *
 *  @return
 */
- (instancetype)objectBefore:(id)object;
- (instancetype)objectBefore:(id)object wrap:(BOOL)wrap;

/**
 *  取到某一项的后一项
 *
 *  @param object
 *
 *  @return 
 */
- (instancetype)objectAfter:(id)object;
- (instancetype)objectAfter:(id)object wrap:(BOOL)wrap;

/**
 *  遍历数组每一项
 *
 *  @param block
 */
- (void)each:(void (^)(id object))block;
- (void)eachWithIndex:(void (^)(id object, NSUInteger index))block;
@end
