//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFCompanionXPCManager : NSObject
{
    BOOL _invalid;
    BOOL _interrupted;
    int _listenerResumedToken;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_xpcSetupQueue;
    NSMutableArray *_observers;
}

+ (id)sharedManager;
+ (id)hotspotInterface;
+ (id)hotspotClientInterface;
+ (id)unlockInterface;
+ (id)serviceManagerInterface;
+ (id)serviceManagerClientInterface;
+ (id)xpcManagerInterface;
+ (void)initialize;
@property(retain) NSMutableArray *observers; // @synthesize observers=_observers;
@property BOOL interrupted; // @synthesize interrupted=_interrupted;
@property int listenerResumedToken; // @synthesize listenerResumedToken=_listenerResumedToken;
@property(retain) NSObject<OS_dispatch_queue> *xpcSetupQueue; // @synthesize xpcSetupQueue=_xpcSetupQueue;
@property(getter=isInvalid) BOOL invalid; // @synthesize invalid=_invalid;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)appleAccountSignedOut;
- (void)appleAccountSignedIn;
- (void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)unlockManagerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)streamsForMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)notifyOfInvalidation;
- (void)notifyOfResume;
- (void)notifyOfInterruption;
- (void)setupConnection;
- (void)dealloc;
- (id)init;

@end
