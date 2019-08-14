//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface IMCloudKitSyncState : NSObject
{
    BOOL _hasExited;
    BOOL _isDisablingDevices;
    BOOL _accountIsEnabled;
    unsigned long long _syncControllerSyncState;
    long long _syncControllerSyncType;
    long long _syncControllerRecordType;
    NSDate *_exitDate;
    long long _changingEnabledState;
    NSDate *_lastSyncDate;
    NSArray *_errors;
    long long _accountStatus;
    long long _syncState;
}

+ (id)logHandle;
@property(readonly, nonatomic) long long syncState; // @synthesize syncState=_syncState;
@property(readonly, nonatomic) BOOL accountIsEnabled; // @synthesize accountIsEnabled=_accountIsEnabled;
@property(readonly, nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
@property(readonly, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(readonly, nonatomic) BOOL isDisablingDevices; // @synthesize isDisablingDevices=_isDisablingDevices;
@property(readonly, nonatomic) long long changingEnabledState; // @synthesize changingEnabledState=_changingEnabledState;
@property(readonly, copy, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property(readonly, nonatomic) BOOL hasExited; // @synthesize hasExited=_hasExited;
@property(readonly, nonatomic) long long syncControllerRecordType; // @synthesize syncControllerRecordType=_syncControllerRecordType;
@property(readonly, nonatomic) long long syncControllerSyncType; // @synthesize syncControllerSyncType=_syncControllerSyncType;
@property(readonly, nonatomic) unsigned long long syncControllerSyncState; // @synthesize syncControllerSyncState=_syncControllerSyncState;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSyncEnabledForDisplayOnly;
@property(readonly, nonatomic) BOOL canChangeEnabledSetting;
@property(readonly, nonatomic) BOOL canStartSyncing;
- (BOOL)_isChangingEnabledState;
@property(readonly, nonatomic) BOOL canEnableSyncing;
- (id)description;
@property(readonly, nonatomic) BOOL syncingFailed;
@property(readonly, nonatomic) BOOL isSyncingAvailable;
@property(readonly, nonatomic) BOOL isSyncingEnabled;
- (id)syncErrorWithDomain:(id)arg1 code:(long long)arg2;
@property(readonly, nonatomic) BOOL isSyncingPaused;
@property(readonly, nonatomic) BOOL isSyncing;
- (id)initWithAccountEnabled:(BOOL)arg1 stateDictionary:(id)arg2;
- (id)logHandle;
- (id)createSyncProgressWithSyncStatistics:(id)arg1;
- (BOOL)shouldFetchSyncStatistics;
- (BOOL)shouldRescheduleSyncSyncProgress;
- (BOOL)_shouldHideProgressInFirstSevenDays;

@end
