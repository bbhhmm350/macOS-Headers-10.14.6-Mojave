//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <KnowledgeMonitor/_DKMonitor.h>

@class AVOutputContext;

@interface _DKNowPlayingMonitor : _DKMonitor
{
    unsigned int _lastPlaybackState;
    AVOutputContext *_outputContext;
}

+ (BOOL)shouldMergeUnchangedEvents;
+ (CDUnknownBlockType)_eventFilterBlock;
+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithBundleIdentifier:(id)arg1 metadata:(id)arg2;
+ (void)setPlaybackState:(unsigned int)arg1 bundleId:(id)arg2 track:(id)arg3 outputDeviceIDs:(id)arg4;
@property(retain, nonatomic) AVOutputContext *outputContext; // @synthesize outputContext=_outputContext;
@property(nonatomic) unsigned int lastPlaybackState; // @synthesize lastPlaybackState=_lastPlaybackState;
- (void).cxx_destruct;
- (void)_nowPlayingInfoDidChange:(void *)arg1 outputDevices:(id)arg2;
- (void)outputDevicesDidChange:(id)arg1;
- (void)_registerForNowPlayingNotifications;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)_metadataFromInfo:(id)arg1 outputDevices:(id)arg2;

@end
