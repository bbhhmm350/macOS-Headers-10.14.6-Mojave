//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFAudioPlaybackRequest;

@protocol AFClientConfigurationMutating <NSObject>
- (void)setTwoShotAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;
- (void)setTapToSiriAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setIsAccessibilityVibrationDisabled:(BOOL)arg1;
- (void)setIsAccessibilityVoiceOverTouchEnabled:(BOOL)arg1;
- (void)setIsDeviceInStarkMode:(BOOL)arg1;
- (void)setIsDeviceInCarDNDMode:(BOOL)arg1;
- (void)setIsDeviceInSetupFlow:(BOOL)arg1;
- (void)setDeviceRingerSwitchState:(long long)arg1;
@end

