//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _SAMetricsSendCompletionsProxy : NSObject
{
    NSMutableArray *_blocks;
}

- (void).cxx_destruct;
- (void)dispatchBlocksWithResult:(long long)arg1 error:(id)arg2;
- (void)addBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
