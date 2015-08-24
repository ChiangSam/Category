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
 *  取row的前一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)previousRow;

/**
 *  取row的后一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)nextRow;

/**
 *  取item的前一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)previousItem;

/**
 *  取item的后一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)nextItem;

/**
 *  取Section的前一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)previousSection;

/**
 *  取Section的后一项
 *
 *  @return NSIndexPath
 */
- (NSIndexPath *)nextSection;

@end
