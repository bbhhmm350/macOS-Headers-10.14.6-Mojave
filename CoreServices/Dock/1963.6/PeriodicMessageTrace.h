//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_source;

@interface PeriodicMessageTrace : NSObject
{
    NSMapTable *_blocks;
    NSObject<OS_dispatch_source> *_timer;
    unsigned int _lastKey;
}

- (void).cxx_destruct;
- (void)removeBlockWithKey:(unsigned int)arg1;
- (unsigned int)addBlock:(CDUnknownBlockType)arg1;
- (id)initWithDomain:(id)arg1 preference:(id)arg2;

@end
