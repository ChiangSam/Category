
//
//  NSUserDefaults+extension.m
//  OCCategory
//
//  Created by Broccoli on 15/7/18.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import "NSUserDefaults+extension.h"

@implementation NSUserDefaults (convenience)

+ (void)saveValue:(id)value forKey:(NSString *)key {
    [[NSUserDefaults standardUserDefaults] setValue:value forKeyPath:key];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

+ (instancetype)getValueForKey:(NSString *)key {
    return [[NSUserDefaults standardUserDefaults] valueForKey:key];
}

+ (NSString *)stringForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] stringForKey:defaultName];
}

+ (NSArray *)arrayForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] arrayForKey:defaultName];
}

+ (NSDictionary *)dictionaryForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] dictionaryForKey:defaultName];
}

+ (NSData *)dataForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] dataForKey:defaultName];
}

+ (NSArray *)stringArrayForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] stringArrayForKey:defaultName];
}

+ (NSInteger)integerForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] integerForKey:defaultName];
}

+ (float)floatForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] floatForKey:defaultName];
}

+ (double)doubleForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] doubleForKey:defaultName];
}

+ (BOOL)boolForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] boolForKey:defaultName];
}

+ (NSURL *)URLForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] URLForKey:defaultName];
}

@end
