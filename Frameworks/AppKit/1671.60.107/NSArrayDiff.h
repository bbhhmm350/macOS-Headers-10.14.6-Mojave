//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSSet;

__attribute__((visibility("hidden")))
@interface NSArrayDiff : NSObject
{
    NSIndexSet *_removedObjectIndexes;
    NSIndexSet *_insertedObjectIndexes;
    NSSet *_movedObjectIndexes;
}

@property(readonly, copy) NSSet *movedObjectIndexes; // @synthesize movedObjectIndexes=_movedObjectIndexes;
@property(readonly, copy) NSIndexSet *insertedObjectIndexes; // @synthesize insertedObjectIndexes=_insertedObjectIndexes;
@property(readonly, copy) NSIndexSet *removedObjectIndexes; // @synthesize removedObjectIndexes=_removedObjectIndexes;
- (id)description;
@property(readonly, getter=isEmpty) BOOL empty;
- (void)dealloc;
- (id)initWithPreviousObjects:(id)arg1 currentObjects:(id)arg2;

@end
