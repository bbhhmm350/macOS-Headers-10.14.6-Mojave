//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTXConnectionServices/DTXMessenger-Protocol.h>

@class DTXConnection, NSString;
@protocol OS_dispatch_queue;

@interface DTXChannel : NSObject <DTXMessenger>
{
    NSString *_label;
    DTXConnection *_connection;
    DTXConnection *_strongConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct os_unfair_lock_s _handlerGuard;
    unsigned int _channelCode;
    int _compressionTypeHint;
    BOOL _canceled;
    struct __DTXChannelGuarded_private {
        CDStruct_f5f3468d _fields;
    } _channelGuarded;
}

@property int compressionTypeHint; // @synthesize compressionTypeHint=_compressionTypeHint;
@property(readonly, nonatomic) unsigned int channelCode; // @synthesize channelCode=_channelCode;
@property BOOL isCanceled; // @synthesize isCanceled=_canceled;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)sendMessageSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)sendMessageAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendControlSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendControlAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)registerDisconnectHandler:(CDUnknownBlockType)arg1;
- (void)_setDispatchValidator:(CDUnknownBlockType)arg1;
- (void)setDispatchTarget:(id)arg1;
- (void)_setDispatchTarget:(id)arg1 queue:(id)arg2;
- (void)setMessageHandler:(CDUnknownBlockType)arg1;
- (CDStruct_f5f3468d)_callbackSnapshot;
- (void)_scheduleMessage:(id)arg1 tracker:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_scheduleBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1 channelIdentifier:(unsigned int)arg2 label:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
