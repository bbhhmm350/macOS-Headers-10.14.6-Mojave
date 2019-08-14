//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSData, NSDictionary, NSError, NSString, NSUUID, SFDevice, SFEventMessage, SFRemoteTextSessionInfo, SFRequestMessage, SFResponseMessage;

@protocol SFXPCInterface

@optional
- (void)userNotificationTextResponse:(NSString *)arg1;
- (void)userNotificationResponse:(int)arg1;
- (void)userNotificationError:(NSError *)arg1;
- (void)sessionReceivedResponse:(SFResponseMessage *)arg1;
- (void)sessionReceivedRequest:(SFRequestMessage *)arg1;
- (void)sessionReceivedFrameType:(unsigned char)arg1 data:(NSData *)arg2;
- (void)sessionReceivedEvent:(SFEventMessage *)arg1;
- (void)sessionError:(NSError *)arg1;
- (void)sessionBluetoothStateChanged:(long long)arg1;
- (void)serviceReceivedResponse:(SFResponseMessage *)arg1;
- (void)serviceReceivedRequest:(SFRequestMessage *)arg1;
- (void)serviceReceivedFrameType:(unsigned char)arg1 data:(NSData *)arg2 peer:(NSUUID *)arg3;
- (void)serviceReceivedEvent:(SFEventMessage *)arg1;
- (void)servicePeerDisconnected:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)serviceError:(NSError *)arg1;
- (void)remoteInteractionSessionTextSessionDidChange:(SFRemoteTextSessionInfo *)arg1;
- (void)remoteInteractionSessionTextSessionDidEnd:(SFRemoteTextSessionInfo *)arg1;
- (void)remoteInteractionSessionTextSessionDidBegin:(SFRemoteTextSessionInfo *)arg1;
- (void)remoteInteractionSessionRemoteTextEvent:(NSDictionary *)arg1;
- (void)deviceDiscoveryScanStateChanged:(long long)arg1;
- (void)deviceDiscoveryDeviceChanged:(SFDevice *)arg1 changes:(unsigned int)arg2;
- (void)deviceDiscoveryLostDevice:(SFDevice *)arg1;
- (void)deviceDiscoveryFoundDevice:(SFDevice *)arg1;
- (void)autoFillPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)autoFillPairingSucceeded:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)autoFillDismissUserNotification;
@end
