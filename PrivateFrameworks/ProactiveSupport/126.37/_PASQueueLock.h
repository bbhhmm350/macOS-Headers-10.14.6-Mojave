//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _PASQueueLock : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id _guardedData;
}

- (void).cxx_destruct;
- (id)guardedDataAssertingLockContext;
- (id)unsafeGuardedData;
- (void)runAsyncWithLockAcquired:(CDUnknownBlockType)arg1;
- (void)runWithLockAcquired:(CDUnknownBlockType)arg1;
- (id)initWithGuardedData:(id)arg1 serialQueue:(id)arg2;

@end
