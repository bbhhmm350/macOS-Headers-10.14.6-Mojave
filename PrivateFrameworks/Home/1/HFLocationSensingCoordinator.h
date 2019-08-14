//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFLocationManagerObserver-Protocol.h>

@class HFLocationManagerDispatcher, NAFuture, NSString, NSUserDefaults;
@protocol HFLocationSensingCoordinatorDelegate;

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver>
{
    int _defaultsChangedNotifyToken;
    id <HFLocationSensingCoordinatorDelegate> _delegate;
    NSUserDefaults *_defaults;
    HFLocationManagerDispatcher *_locationDispatcher;
}

@property(nonatomic) int defaultsChangedNotifyToken; // @synthesize defaultsChangedNotifyToken=_defaultsChangedNotifyToken;
@property(retain, nonatomic) HFLocationManagerDispatcher *locationDispatcher; // @synthesize locationDispatcher=_locationDispatcher;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) __weak id <HFLocationSensingCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_defaultsDidChange;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
@property(nonatomic) BOOL homeSensingEnabled;
@property(readonly, nonatomic) NAFuture *locationSensingAvailableFuture;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
