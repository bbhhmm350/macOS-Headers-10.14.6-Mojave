//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCOperationThrottler-Protocol.h>
#import <RemoteConfiguration/RCOperationThrottlerDelegate-Protocol.h>

@class NSString, RCOperationThrottler;
@protocol RCOperationThrottlerDelegate;

@interface RCTimedOperationThrottler : NSObject <RCOperationThrottlerDelegate, RCOperationThrottler>
{
    double _cooldownTime;
    RCOperationThrottler *_operationThrottler;
    id <RCOperationThrottlerDelegate> _delegate;
}

@property(nonatomic) __weak id <RCOperationThrottlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RCOperationThrottler *operationThrottler; // @synthesize operationThrottler=_operationThrottler;
@property double cooldownTime; // @synthesize cooldownTime=_cooldownTime;
- (void).cxx_destruct;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
@property BOOL suspended;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;
- (void)tickle;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
