//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Navigation/MNNavigationState.h>

@class MNNavigationSessionManager, MNRoutePlanningDetails;

__attribute__((visibility("hidden")))
@interface MNNavigationStateGuidance : MNNavigationState
{
    MNRoutePlanningDetails *_routePlanningDetails;
    MNNavigationSessionManager *_navigationSessionManager;
}

+ (id)guidanceStateForRoutePlanningDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3;
- (void).cxx_destruct;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopNavigation;
- (void)leaveState;
- (void)enterState;
- (id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 routePlanningDetails:(id)arg3;
- (id)traceManager;
- (unsigned long long)desiredResourcePolicy;
- (unsigned long long)desiredLocationProviderType;
- (BOOL)requiresHighMemoryThreshold;
- (id)currentDestination;

@end

