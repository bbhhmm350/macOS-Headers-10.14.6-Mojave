//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SessionControllerManager : NSObject
{
    NSMutableArray *mSessionControllers;
    BOOL _appWasLaunchedOnDemand;
}

+ (id)sharedManager;
+ (void)initialize;
@property BOOL appWasLaunchedOnDemand; // @synthesize appWasLaunchedOnDemand=_appWasLaunchedOnDemand;
- (long long)activeSessionsCount;
- (long long)totalSessionsCount;
- (BOOL)connectionsInProgress;
- (void)removeSession:(id)arg1;
- (BOOL)foundSession:(id)arg1 withAddresses:(id)arg2;
- (id)addSessionWithURL:(id)arg1 restorableState:(id)arg2 shouldResolve:(BOOL)arg3 tabbedSession:(id)arg4;
- (id)addSession;
- (id)openSessionForURL:(id)arg1 withRestorableState:(id)arg2 isQuarantined:(BOOL)arg3;
- (id)openSessionForURL:(id)arg1;
- (void)openSessionForFileAtPath:(id)arg1;
- (id)sessionControllers;
- (void)dealloc;
- (id)init;

@end
