//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTAgentNotificationListener-Protocol.h>

@class MTMetrics, NSMutableArray, NSString;
@protocol MTSyncService, NAScheduler;

@interface MTSyncMonitor : NSObject <MTAgentNotificationListener, MTAgentDiagnosticDelegate>
{
    BOOL _ready;
    id <MTSyncService> _service;
    NSMutableArray *_providers;
    id <NAScheduler> _serializer;
    MTMetrics *_syncMetrics;
}

+ (BOOL)isSyncingEnabledInternally;
+ (BOOL)syncingSupported;
@property(retain, nonatomic) MTMetrics *syncMetrics; // @synthesize syncMetrics=_syncMetrics;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) NSMutableArray *providers; // @synthesize providers=_providers;
@property(nonatomic) BOOL ready; // @synthesize ready=_ready;
@property(retain, nonatomic) id <MTSyncService> service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)printDiagnostics;
- (void)handleNotification:(id)arg1;
- (BOOL)handlesNotification:(id)arg1;
- (BOOL)startSyncServiceIfSyncingEnabled;
- (void)syncConfigurationChanged:(id)arg1;
- (BOOL)syncingEnabled;
- (void)registerSyncStatusProvider:(id)arg1;
- (void)startMonitoring;
- (id)initWithSyncService:(id)arg1 syncMetrics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

