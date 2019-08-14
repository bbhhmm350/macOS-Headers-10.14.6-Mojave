//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MDSMachSubsystem : NSObject
{
    struct mach_msg_dispatch_link *_dispatchChain;
    _Bool _shutDown;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct __CFDictionary *_deadNameObjectRecordMap;
    struct __CFDictionary *_noSendersObjectRecordMap;
    struct __CFDictionary *_sourcesByPort;
    struct __CFDictionary *_channelsByPort;
}

- (void)shutdown;
- (id)initWithQueue:(id)arg1;
- (void)unregisterPort:(unsigned int)arg1;
- (void)registerPort:(unsigned int)arg1 rights:(unsigned long long)arg2;
- (void)registerPort:(unsigned int)arg1 withCallback:(CDUnknownFunctionPointerType)arg2 rights:(unsigned long long)arg3;
- (void)machPortNotify:(CDStruct_c91b0553 *)arg1 object:(id)arg2;
- (void)unregisterForNoSendersNotification:(unsigned int)arg1;
- (BOOL)registerForNoSendersNotification:(unsigned int)arg1 withSelector:(SEL)arg2 andObject:(id)arg3;
- (void)unregisterForDeadNameNotification:(unsigned int)arg1;
- (BOOL)registerForDeadNameNotification:(unsigned int)arg1 withSelector:(SEL)arg2 andObject:(id)arg3;
- (BOOL)registerForDeadNameNotification:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (oneway void)release;
- (id)retain;

@end
