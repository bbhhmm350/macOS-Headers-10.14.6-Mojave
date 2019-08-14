//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSVCallback, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MSVMultiCallback : NSObject
{
    NSMutableArray *_callbacks;
    MSVCallback *_firstCallback;
    MSVCallback *_lastCallback;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *callbacks;
- (void)invokeWithObject:(id)arg1;
- (void)invoke;
- (BOOL)removeCallback:(id)arg1;
@property(retain, nonatomic) MSVCallback *lastCallback;
@property(retain, nonatomic) MSVCallback *firstCallback;
- (void)addCallback:(id)arg1;
- (id)init;

@end
