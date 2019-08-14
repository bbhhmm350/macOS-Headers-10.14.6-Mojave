//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSPreferencesKeyValueStore-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface WBSSecureDefaults : NSObject <WBSPreferencesKeyValueStore>
{
    NSString *_serviceName;
    NSString *_accessGroup;
    NSString *_keychainLabel;
    NSMutableDictionary *_defaultsDictionary;
    NSMutableSet *_migratedKeys;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_keychainQueue;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    BOOL _hasPendingWrites;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_removeObjectForKeyOnInternalQueue:(id)arg1;
- (id)_objectForKeyOnInternalQueue:(id)arg1 performingMigrationToSecureDefaultsIfNecessary:(BOOL)arg2;
- (void)_setObjectOnInternalQueue:(id)arg1 forKey:(id)arg2;
- (BOOL)_boolForKeyOnInternalQueue:(id)arg1;
- (void)synchronize;
- (BOOL)safari_shouldTrustValueForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)performSynchronousMigrationFromSecureDefaultsToUserDefaultsOfPreferences:(id)arg1;
- (void)triggerMigrationFromUserDefaultsToSecureDefaultsForPreference:(id)arg1;
- (void)_setPreferenceWasMigratedToSecureDefaults:(id)arg1;
- (BOOL)_isPreferenceMigratedToSecureDefaults:(id)arg1;
- (void)_writeDefaultsDictionaryAndMigratedKeysSynchronously;
- (void)_writeDefaultsDictionaryAndMigratedKeysAsynchronously;
- (void)_persistDefaultsDictionaryAndMigratedKeys;
- (void)_loadDefaultsDictionary:(id *)arg1 migratedKeysSet:(id *)arg2;
- (void)_migrateKeychainItemIfNeeded;
- (id)initWithServiceName:(id)arg1 accessGroup:(id)arg2 keychainLabel:(id)arg3;
- (id)initWithServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
