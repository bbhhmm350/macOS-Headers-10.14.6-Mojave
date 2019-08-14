//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTimeProviding-Protocol.h>

@class AVPlayer, NSString;
@protocol SVTimeConverting;

@interface SVVideoTimeProvider : NSObject <SVVideoTimeProviding>
{
    AVPlayer *_player;
    id <SVTimeConverting> _timeConverter;
}

@property(readonly, nonatomic) id <SVTimeConverting> timeConverter; // @synthesize timeConverter=_timeConverter;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
@property(readonly, nonatomic) double time;
- (id)initWithPlayer:(id)arg1 timeConverter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
