//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreBrightness/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol CBContainerProtocol <NSObject>
- (void)unregisterNotificationBlock;
- (void)registerNotificationBlock:(void (^)(id, id))arg1;
- (void)unscheduleWithDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)scheduleWithDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (BOOL)start;
@end
