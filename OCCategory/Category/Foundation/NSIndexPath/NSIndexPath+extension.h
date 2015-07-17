//
//  NSIndexPath.h
//  OCCategory
//
//  Created by Broccoli on 15/7/13.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSIndexPath (extension)

/**
 *  去row的前一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)previousRow;

/**
 *  去row的后一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)nextRow;

/**
 *  去item的前一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)previousItem;

/**
 *  去item的后一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)nextItem;

/**
 *  去Section的前一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)previousSection;

/**
 *  去Section的后一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)nextSection;

@end
