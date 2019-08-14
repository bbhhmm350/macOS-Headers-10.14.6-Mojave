//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ConfigurationProfiles/NSXPCConnectionDelegate-Protocol.h>
#import <ConfigurationProfiles/NSXPCListenerDelegate-Protocol.h>

@class NSString;

@interface CPProfileDomainService : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate>
{
    Class _connectionHandlerClass;
}

+ (BOOL)isRunningAsDaemon;
+ (id)sharedInstance;
@property(retain) Class connectionHandlerClass; // @synthesize connectionHandlerClass=_connectionHandlerClass;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startListening;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
