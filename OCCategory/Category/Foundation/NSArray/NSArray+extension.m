
//
//  NSArray+extension.m
//  OCCategory
//
//  Created by Broccoli on 15/7/18.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import "NSArray+extension.h"

@implementation NSArray (extension)

- (id)objectBefore:(id)object {
    return [self objectBefore:object wrap:NO];
}

- (id)objectBefore:(id)object wrap:(BOOL)wrap {
    NSUInteger index = [self indexOfObject:object];
    
    if (index == NSNotFound || (!wrap && index == 0))
        return nil;
    
    index = (index - 1 + self.count) % self.count;
    return self[index];
}

- (id)objectAfter:(id)object {
    return [self objectAfter:object wrap:NO];
}

- (id)objectAfter:(id)object  wrap:(BOOL)wrap {
    NSUInteger index = [self indexOfObject:object];
    
    if (index == NSNotFound || (!wrap && index == self.count - 1))
        return nil;
    
    index = (index + 1) % self.count;
    return self[index];
}

@end
