//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FUSServer : NSObject
{
    BOOL mSwitchInProgress;
    BOOL mFUSServerRunning;
    unsigned int mNewSID;
}

+ (id)sharedFUSServer;
- (void)dealloc;
- (id)init;
- (void)stopServer;
- (BOOL)startServer;
- (BOOL)switchToUser:(bycopy id)arg1;
- (void)sessionWentOffConsole;
- (BOOL)switchToUserUsingTouchID:(bycopy id)arg1;
- (BOOL)switchToLoginWindow;
- (void)switchToUserOnThread:(id)arg1;
- (BOOL)createNewSession:(id)arg1 password:(id)arg2;
- (BOOL)createNewSessionViaSessionManagement:(id)arg1 password:(id)arg2;
- (int)authenticateUser:(id)arg1 password:(id *)arg2;
- (BOOL)isGuestUser:(id)arg1;
- (unsigned int)getUid:(id)arg1;
- (unsigned int)getSessionID:(id)arg1;
- (id)getPassword:(id)arg1;
- (id)userDataForSessionFromAttributes:(id)arg1 password:(id)arg2;
- (id)userData:(id)arg1;
- (unsigned int)findSessionForUser:(unsigned int)arg1;
- (void)unregisterForSessionReady;
- (void)registerForSessionReady;
- (void)fakeSessionReadyForFUSFromNonConsoleUser;
- (void)sessionIsReadyReceived:(id)arg1;

@end
