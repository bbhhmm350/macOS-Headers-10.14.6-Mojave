//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdate/SUHelperDProtocol-Protocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SUHelperProxy : NSObject <SUHelperDProtocol>
{
    unsigned int _suhelperd_port;
    unsigned int _client_port;
    long long _currentRights;
    NSObject<OS_dispatch_queue> *_q;
    NSObject<OS_dispatch_source> *clientPortDeadChecker;
    long long _recentRights;
}

+ (id)sharedHelperProxyIfAvailable;
+ (id)sharedHelperProxy;
@property long long recentRights; // @synthesize recentRights=_recentRights;
- (BOOL)armBaseSystemUpdates:(id)arg1 productKey:(id)arg2 recoveryUpdatePackageURL:(id)arg3 error:(id *)arg4;
- (id)lookupURLCredentialInSystemKeychainForHost:(id)arg1 port:(long long)arg2;
- (BOOL)configureProgressPhasesAll:(id)arg1;
- (BOOL)setAppleStagedUpgradeShouldFLORun:(BOOL)arg1;
- (BOOL)stashAndCommitAPFSFDEKey;
- (BOOL)commitLoginCredentialsDisablingFLO:(BOOL)arg1 hasBaseSystemUpdates:(BOOL)arg2;
- (BOOL)stashLoginCredentialsEnablingFLO:(BOOL)arg1;
- (BOOL)unenrollFromSeedProgram;
- (BOOL)clearCatalogToProductionAndNotify;
- (BOOL)deletePref:(id)arg1 inDomain:(id)arg2;
- (BOOL)setMacOSAutoUpdate:(BOOL)arg1;
- (BOOL)setAppStoreAutoUpdate:(BOOL)arg1;
- (BOOL)clearCriticalUpdateNotificationDate;
- (BOOL)removeUpdatesAvailableCookie;
- (BOOL)createUpdatesAvailableCookie;
- (BOOL)updateAnyUserPreferences;
- (BOOL)clearAnyUserPreference:(id)arg1;
- (BOOL)setObject:(id)arg1 forAnyUserPreference:(id)arg2;
- (BOOL)getDigest:(id *)arg1 forPackageAtURL:(id)arg2;
- (BOOL)removePackagesForLocalReferences:(id)arg1 forProductKey:(id)arg2;
- (BOOL)removeRecoveryInstallResult;
- (BOOL)removeProductDirectoryForKey:(id)arg1;
- (BOOL)removeDistForProductKey:(id)arg1 withFilename:(id)arg2;
- (BOOL)createDirectoryForProductKey:(id)arg1 Firmware:(BOOL)arg2;
- (id)readUpdatesIndex;
- (BOOL)writeUpdatesIndex:(id)arg1;
- (BOOL)removeIndexFromUpdates;
- (BOOL)movePPDVersionCacheToUpdatesFromPath:(id)arg1;
- (BOOL)moveMetadataCacheToUpdatesFromPath:(id)arg1;
- (BOOL)removeMetadataCacheFromUpdates;
- (BOOL)moveInstalledPrintersToLibraryFromPath:(id)arg1;
- (BOOL)makeQueues;
- (BOOL)registerPersonalizedManifests:(id)arg1 forProductKey:(id)arg2 inForeground:(BOOL)arg3;
- (id)registerProductFile:(id)arg1 forProductKey:(id)arg2 firmware:(BOOL)arg3 trustLevel:(int *)arg4 keepOriginal:(BOOL)arg5 inForeground:(BOOL)arg6;
- (id)registerProductFile:(id)arg1 forProductKey:(id)arg2 firmware:(BOOL)arg3 trustLevel:(int *)arg4 keepOriginal:(BOOL)arg5;
- (BOOL)prepareLoginWindowForPostLogoutInstallWithNoConsoleUser;
- (void)checkAndFixPermissionsAtPath:(id)arg1 owner:(unsigned int)arg2;
- (int)prepareForLogoutAndInstall:(BOOL)arg1;
- (void)helperQueueReentrantSync:(CDUnknownBlockType)arg1;
- (void)authorizeWithEmptyAuthorizationForRights:(long long)arg1;
- (BOOL)disconnect;
- (void)authorizeTool:(struct AuthorizationOpaqueRef *)arg1 forRights:(long long)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isAuthorizedForRights:(long long)arg1;
- (BOOL)_isAuthorized;

@end
