//
//  NSObject+extension.m
//  OCCategory
//
//  Created by Broccoli on 15/7/18.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import "NSObject+extension.h"
#import <objc/runtime.h>

static char associatedObjectsKey;

@implementation NSObject (extension)

// set方法
- (void)setAssociatedObject:(id)object forKey:(NSString*)key {
    NSMutableDictionary *dict = objc_getAssociatedObject(self, &associatedObjectsKey);
    if (!dict) {
        dict = [[NSMutableDictionary alloc] init];
        objc_setAssociatedObject(self, &associatedObjectsKey, dict, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    [dict setObject:object forKey:key];
}
// get方法
- (id)associatedObjectForKey:(NSString*)key {
    NSMutableDictionary *dict = objc_getAssociatedObject(self, &associatedObjectsKey);
    return [dict objectForKey:key];
}

- (NSString *)toJSONString{
    NSError *error = nil;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:self
                                                       options:NSJSONWritingPrettyPrinted
                                                         error:&error];
    
    if([jsonData length] > 0 && error == nil) {
        NSString *jsonString = [[NSString alloc] initWithData:jsonData
                                                     encoding:NSUTF8StringEncoding];
        return jsonString;
    } else {
        return nil;
    }
}

- (NSDictionary*)dictionaryValue {
    return [self dictionaryWithValuesForKeys:[self allPropertyKeys]];
}
- (NSArray*)allPropertyKeys {
    unsigned int propertyCount = 0;
    objc_property_t * properties = class_copyPropertyList([self class], &propertyCount);
    NSMutableArray * propertyNames = [NSMutableArray array];
    for (unsigned int i = 0; i < propertyCount; ++i) {
        objc_property_t property = properties[i];
        const char * name = property_getName(property);
        [propertyNames addObject:[NSString stringWithUTF8String:name]];
    }
    free(properties);
    return propertyNames;
}


@end
