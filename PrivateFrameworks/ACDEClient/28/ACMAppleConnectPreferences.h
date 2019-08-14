//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/ACMPreferences.h>

#import <ACDEClient/ACMAppleConnectPreferences-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol ACMPreferencesStore;

@interface ACMAppleConnectPreferences : ACMPreferences <ACMAppleConnectPreferences>
{
    NSMutableDictionary *_environmentsContainer;
}

+ (id)preferencesWithStore:(id)arg1;
- (void)cleanupOnMemoryWarning;
- (void)savePreferencesIfNeeded;
- (void)clearCache;
- (void)replaceAllValues:(id)arg1 withOptions:(long long)arg2;
- (id)allValuesWithOptions:(long long)arg1;
- (void)purgeAllValuesWithOptions:(long long)arg1;
- (void)purgeAllValues;
@property(nonatomic) BOOL shouldRememberPasswordInKeychain;
- (void)setRunsOn64BitsDevice:(BOOL)arg1;
- (BOOL)runsOn64BitsDevice;
- (void)setUUID:(id)arg1;
- (id)UUID;
@property(copy, nonatomic) NSString *defaultUserName;
@property(nonatomic) int logLevel;
@property(nonatomic) NSString *recentUserName;
- (id)principalPreferencesWithPrincipal:(id)arg1;
- (id)environmentPreferencesWithRealm:(id)arg1;
- (id)createEnvironmentWithRealm:(id)arg1;
@property(readonly, retain) NSMutableDictionary *environmentsContainer; // @synthesize environmentsContainer=_environmentsContainer;
- (void)dealloc;
- (id)initWithPreferencesStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) id <ACMPreferencesStore> preferencesStore;
@property(readonly) Class superclass;

@end
