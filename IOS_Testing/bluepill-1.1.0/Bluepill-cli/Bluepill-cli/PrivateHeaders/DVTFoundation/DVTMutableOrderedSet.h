//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSMutableOrderedSet;

@interface DVTMutableOrderedSet : NSMutableSet
{
    NSMutableOrderedSet *_orderedSet;
}

+ (id)setWithCapacity:(unsigned long long)arg1;
+ (id)set;
//- (void).cxx_destruct;
- (id)description;
- (BOOL)isEquivalentToOrderedSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
- (void)setSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
//- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (id)reverseObjectEnumerator;
- (id)objectEnumerator;
- (id)allObjects;
- (id)member:(id)arg1;
- (long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)lastObject;
- (id)firstObject;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (Class)dvt_mutableClass;

@end

