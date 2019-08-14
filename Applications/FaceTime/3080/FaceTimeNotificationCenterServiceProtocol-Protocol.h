//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString, TUDialRequest;

@protocol FaceTimeNotificationCenterServiceProtocol
- (void)dialForAllAlertsWithCallPromptUI;
- (void)cancelForAllAlertsWithCallPromptUI;
- (void)callBackForAllAlertsWithPostCallUI;
- (void)dismissPostCallUIForAllAlerts;
- (void)mergeForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)swapForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)sendReplyWithMessageUIForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)dismissReplyWithMessageUIForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)presentReplyWithMessageUIForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)makeAlertWithUniqueProxyIdentifier:(NSString *)arg1 adoptCallWithUniqueProxyIdentifier:(NSString *)arg2 completionBlock:(void (^)(BOOL))arg3;
- (void)makeAlertWithUniqueProxyIdentifier:(NSString *)arg1 addCallWithUniqueProxyIdentifier:(NSString *)arg2 completionBlock:(void (^)(BOOL))arg3;
- (void)setShouldStopPreviewOnDealloc:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2 completionBlock:(void (^)(void))arg3;
- (void)screenFrameForCallWithUniqueProxyIdentifier:(NSString *)arg1 completionBlock:(void (^)(struct CGRect))arg2;
- (void)dismissAlertForCallWithUniqueProxyIdentifier:(NSString *)arg1 animation:(unsigned long long)arg2 completionBlock:(void (^)(BOOL, BOOL))arg3;
- (void)showAlertForCallWithUniqueProxyIdentifier:(NSString *)arg1 completionBlock:(void (^)(BOOL))arg2;
- (void)showAlertWithDialRequest:(TUDialRequest *)arg1;
@end
