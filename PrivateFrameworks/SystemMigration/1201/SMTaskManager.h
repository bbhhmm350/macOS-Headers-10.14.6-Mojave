//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock;

@interface SMTaskManager : NSObject
{
    NSConditionLock *taskTerminationLock;
    int termStatus;
}

- (void).cxx_destruct;
- (void)timeout;
- (BOOL)launchTaskSync:(id)arg1:(id)arg2:(double)arg3;
- (void)_launchTaskSync:(id)arg1;

@end
