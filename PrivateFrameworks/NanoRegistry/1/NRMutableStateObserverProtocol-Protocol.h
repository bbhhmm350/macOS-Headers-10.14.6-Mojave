//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol NRMutableStateObserverProtocol
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (id)addObserverQueue:(NSObject<OS_dispatch_queue> *)arg1 withBlock:(void (^)(id <NRDiffProtocol>, id))arg2;
@end
