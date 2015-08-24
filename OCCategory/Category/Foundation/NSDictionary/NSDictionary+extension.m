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

- (NSDictionary *)dictionaryByMergingWith:(NSDictionary *)dict {
    return [[self class] dictionaryByMerging:self with: dict];
}

+ (NSDictionary *)dictionaryByMerging:(NSDictionary *)dict1 with:(NSDictionary *)dict2 {
    NSMutableDictionary *result = [NSMutableDictionary dictionaryWithDictionary:dict1];
    NSMutableDictionary *resultTemp = [NSMutableDictionary dictionaryWithDictionary:dict1];
    [resultTemp addEntriesFromDictionary:dict2];
    [resultTemp enumerateKeysAndObjectsUsingBlock: ^(id key, id obj, BOOL *stop) {
        if ([dict1 objectForKey:key]) {
            if ([obj isKindOfClass:[NSDictionary class]]) {
                NSDictionary * newVal = [[dict1 objectForKey: key] dictionaryByMergingWith: (NSDictionary *) obj];
                [result setObject: newVal forKey: key];
            } else {
                [result setObject: obj forKey: key];
            }
        } else if([dict2 objectForKey:key]) {
            if ([obj isKindOfClass:[NSDictionary class]]) {
                NSDictionary * newVal = [[dict2 objectForKey: key] dictionaryByMergingWith: (NSDictionary *) obj];
                [result setObject: newVal forKey: key];
            } else {
                [result setObject: obj forKey: key];
            }
        }
    }];
    return (NSDictionary *)[result mutableCopy];
}

- (void)each:(void (^)(id key, id value))block {
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id value, BOOL *stop) {
        block(key, value);
    }];
}

- (void)eachKey:(void (^)(id key))block {
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id value, BOOL *stop) {
        block(key);
    }];
}

- (void)eachValue:(void (^)(id value))block {
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id value, BOOL *stop) {
        block(value);
    }];
}

- (NSDictionary *)pick:(NSArray *)keys {
    NSMutableDictionary *picked = [[NSMutableDictionary alloc] initWithCapacity:keys.count];
    
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        if ([keys containsObject:key]) {
            picked[key] = obj;
        }
    }];
    return picked;
}

- (NSDictionary *)omit:(NSArray *)keys {
    NSMutableDictionary *omitted = [[NSMutableDictionary alloc] initWithCapacity:([self allKeys].count - keys.count)];
    
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        if (![keys containsObject:key]) {
            omitted[key] = obj;
        }
    }];
    return omitted;
}

@end
