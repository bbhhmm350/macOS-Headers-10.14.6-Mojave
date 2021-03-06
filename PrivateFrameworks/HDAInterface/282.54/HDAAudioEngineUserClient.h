//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HDAInterface/HDAUserClient.h>

@interface HDAAudioEngineUserClient : HDAUserClient
{
}

+ (id)audioEngineUserClientForDeviceType:(unsigned long long)arg1;
+ (id)audioEngineUserClientForSPDIFOut;
+ (id)audioEngineUserClientForSPDIFIn;
+ (id)audioEngineUserClientForLineIn;
+ (id)audioEngineUserClientForLineOut;
+ (id)audioEngineUserClientForHeadphones;
+ (id)audioEngineUserClientForSpeakers;
+ (id)audioEngineUserClientForExternalMicrophone;
+ (id)audioEngineUserClientForInternalMicrophone;
- (BOOL)setSpatialChannel:(unsigned int)arg1 mute:(BOOL)arg2 withError:(id *)arg3;
- (BOOL)setAudioSnoopMasterEnabled:(BOOL)arg1 startEnqueue:(BOOL)arg2 andAllowWaiting:(BOOL)arg3 withError:(id *)arg4;
- (BOOL)getIsAudioSnoopMasterEnabled:(char *)arg1 startEnqueue:(char *)arg2 andAllowWaiting:(char *)arg3 withError:(id *)arg4;
- (id)activeSpatialChannelsWithError:(id *)arg1;
- (BOOL)setHardwareVolume:(unsigned char)arg1 withError:(id *)arg2;
- (BOOL)getMinimumDBValue:(float *)arg1 maximumDBValue:(float *)arg2 minimumControlValue:(unsigned int *)arg3 maximumControlValue:(unsigned int *)arg4 currentControlValue:(unsigned int *)arg5 andMaximumBootBeepValue:(unsigned int *)arg6 withError:(id *)arg7;
- (BOOL)isPort:(unsigned int)arg1 present:(char *)arg2 withError:(id *)arg3;
- (BOOL)resetDSPToPropertyListWithError:(id *)arg1;

@end

