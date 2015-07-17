//
//  NSIndexPath.m
//  OCCategory
//
//  Created by Broccoli on 15/7/13.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import "NSIndexPath+extension.h"

@implementation NSIndexPath (extension)

- (NSIndexPath *)previousRow {
    return [NSIndexPath indexPathForRow:self.row - 1 inSection:self.section];
}

- (NSIndexPath *)nextRow {
    return [NSIndexPath indexPathForRow:self.row + 1 inSection:self.section];
}


- (NSIndexPath *)previousItem {
    return [NSIndexPath indexPathForItem:self.item - 1 inSection:self.section];
}

- (NSIndexPath *)nextItem {
    return [NSIndexPath indexPathForItem:self.item + 1 inSection:self.section];
}


- (NSIndexPath *)previousSection {
    return [NSIndexPath indexPathForRow:self.row inSection:self.section - 1];
}

- (NSIndexPath *)nextSection {
    return [NSIndexPath indexPathForRow:self.row inSection:self.section + 1];
}

@end
