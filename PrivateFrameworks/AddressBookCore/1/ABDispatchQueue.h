//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ABDispatchQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)q;
- (id)queue;
- (void)finalize;
- (void)dealloc;
- (void)ABDispatchQueueWrapper_commonDealloc;
- (id)initWithLabel:(const char *)arg1;
- (id)initWithLabel:(const char *)arg1 attributes:(id)arg2;

@end

