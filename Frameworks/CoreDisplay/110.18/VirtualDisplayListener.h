//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable;
@protocol OS_dispatch_queue;

@interface VirtualDisplayListener : NSObject
{
    NSMapTable *_database;
    NSLock *_lock;
    unsigned int _portSet;
    CDUnknownFunctionPointerType _demux;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _running;
}

- (id)objectForPort:(unsigned int)arg1;
- (void)forgetPort:(unsigned int)arg1;
- (void)rememberPort:(unsigned int)arg1 forObject:(id)arg2;
- (void)dealloc;
- (id)initWithDemux:(CDUnknownFunctionPointerType)arg1 strong:(BOOL)arg2 name:(id)arg3;
- (void)rx;

@end
