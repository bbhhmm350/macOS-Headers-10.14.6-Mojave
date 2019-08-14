//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MNTracePlayerTimelineStream : NSObject
{
    NSArray *_data;
    unsigned long long _nextIndex;
    double _nextUpdatePosition;
    CDUnknownBlockType _handler;
}

@property(readonly, nonatomic) double nextUpdatePosition; // @synthesize nextUpdatePosition=_nextUpdatePosition;
@property(readonly, nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)jumpToPosition:(double)arg1;
- (void)triggerNextUpdate;
- (id)initWithData:(id)arg1;

@end
