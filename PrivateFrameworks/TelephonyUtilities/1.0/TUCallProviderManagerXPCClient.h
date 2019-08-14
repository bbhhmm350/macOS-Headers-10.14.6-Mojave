//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallProviderManagerDataSource-Protocol.h>
#import <TelephonyUtilities/TUCallProviderManagerXPCClient-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSourceDelegate;

@interface TUCallProviderManagerXPCClient : NSObject <TUCallProviderManagerXPCClient, TUCallProviderManagerDataSource>
{
    BOOL _requestedInitialState;
    int _token;
    id <TUCallProviderManagerDataSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_providersByIdentifier;
    NSDictionary *_localProvidersByIdentifier;
    NSDictionary *_pairedHostDeviceProvidersByIdentifier;
}

+ (id)callProviderManagerServerXPCInterface;
+ (id)callProviderManagerClientXPCInterface;
+ (id)callProviderManagerAllowedClasses;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)asynchronousServer;
@property(copy, nonatomic) NSDictionary *pairedHostDeviceProvidersByIdentifier; // @synthesize pairedHostDeviceProvidersByIdentifier=_pairedHostDeviceProvidersByIdentifier;
@property(copy, nonatomic) NSDictionary *localProvidersByIdentifier; // @synthesize localProvidersByIdentifier=_localProvidersByIdentifier;
@property(copy, nonatomic) NSDictionary *providersByIdentifier; // @synthesize providersByIdentifier=_providersByIdentifier;
@property(nonatomic) BOOL requestedInitialState; // @synthesize requestedInitialState=_requestedInitialState;
@property(nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (oneway void)updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;
- (void)_updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;
- (void)_requestInitialState;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)server;
- (void)invalidate;
- (void)blockUntilInitialStateReceived;
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)openURL:(id)arg1 isSensitive:(BOOL)arg2 error:(id *)arg3;
@property(readonly, nonatomic) BOOL currentProcessCanAccessInitialState;
@property(nonatomic) __weak id <TUCallProviderManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
