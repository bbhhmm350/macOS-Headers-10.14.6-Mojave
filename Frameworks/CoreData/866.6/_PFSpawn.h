//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFSpawn : NSObject
{
    int _pid;
    int _termstatus;
}

+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 redirect:(id)arg4;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;
@property(readonly) int terminationStatus;
@property(readonly) int processID;
- (void)waitUntilExit;

@end
