//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalTools/MTLToolsCommandQueue.h>

@class NSString;

@interface MTLCountersCommandQueue : MTLToolsCommandQueue
{
    NSString *_tracePath;
}

@property(readonly, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffer;
- (id)initWithCommandQueue:(id)arg1 device:(id)arg2;

@end

