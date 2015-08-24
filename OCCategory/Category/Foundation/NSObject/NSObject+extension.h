//
//  NSObject+extension.h
//  OCCategory
//
//  Created by Broccoli on 15/7/18.
//  Copyright (c) 2015年 brocccoli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (extension)

/**
 *  给对象增加额外的属性
 *
 *  @param object
 *  @param key
 */
- (void)setAssociatedObject:(id)object forKey:(NSString*)key;
- (id)associatedObjectForKey:(NSString*)key;

/**
 *  将对象转换为json字符串
 *
 *  @return JSONString
 */
- (NSString *)toJSONString;

/**
 *  取出对象的 key - value
 *
 *  @return NSDictionary / NSArray
 */
- (NSDictionary *)dictionaryValue;
- (NSArray *)allPropertyKeys;



typedef void (^KVOBlock)(NSDictionary *change, void *context);
/**
 *  添加观察者
 */
- (void)addObserver:(NSObject *)observer
         forKeyPath:(NSString *)keyPath
            options:(NSKeyValueObservingOptions)options
            context:(void *)context
          withBlock:(KVOBlock)block;

/**
 *  移除观察者
 */
-(void)removeBlockObserver:(NSObject *)observer
                forKeyPath:(NSString *)keyPath;


/**
 *  添加观察者
 */
-(void)addObserverForKeyPath:(NSString *)keyPath
                     options:(NSKeyValueObservingOptions)options
                     context:(void *)context
                   withBlock:(KVOBlock)block;

/**
 *  移除观察者
 */
-(void)removeBlockObserverForKeyPath:(NSString *)keyPath;

@end
