//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PKReceipt : NSObject
{
    NSMutableDictionary *_receiptDictionary;
    NSString *_bomPath;
    void *_cachedBOM;
    NSString *_bundlePath;
    BOOL _isSecure;
}

+ (void)_clearCache;
+ (id)receiptsAtPath:(id)arg1;
+ (id)receiptWithPackageFileName:(id)arg1 volume:(id)arg2;
+ (id)receiptWithIdentifier:(id)arg1 volume:(id)arg2;
+ (id)receiptsOnVolumeAtPath:(id)arg1;
+ (id)_findReceiptsOnVolumeAtPath:(id)arg1;
+ (id)__findBundleReceiptsFromDirectory:(id)arg1;
+ (id)__findReceiptsFromBOMsDirectory:(id)arg1;
+ (id)_receiptDictionaryPathFromBOMPath:(id)arg1;
+ (id)_searchDirectoriesForBundleReceiptsOnDestination:(id)arg1;
+ (id)_searchDirectoriesForBOMReceiptsOnDestination:(id)arg1 returningSecureIndexes:(id *)arg2;
+ (id)_receiptsDirectoryPathForSandboxRoot:(id)arg1 destination:(id)arg2;
+ (id)_receiptsDirectoryPathForDestination:(id)arg1;
+ (id)_systemContentReceiptsDirectoryPathForDestination:(id)arg1;
+ (id)_systemContentReceiptsDirectoryPathForSandboxRoot:(id)arg1 destination:(id)arg2;
+ (void)_clearCacheWithNotification:(id)arg1;
+ (void)_clearCacheInOtherProcesses;
+ (void)_clearCacheLocally;
+ (id)_sharedReceiptsCache;
- (id)installPrefixPath;
- (id)installProcessName;
- (id)installDate;
- (id)packageVersion;
- (id)packageIdentifier;
- (id)description;
- (id)initWithBundlePkgPath:(id)arg1;
- (id)initWithBOMPath:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_setSecure:(BOOL)arg1;
- (BOOL)_isSecure;
- (BOOL)_updateACLsOfItemAtPath:(id)arg1 withFile:(id)arg2;
- (BOOL)_updateSHA1ChecksumOfItemAtPath:(id)arg1 withFile:(id)arg2;
- (void)_setACLString:(id)arg1 forItemAtPath:(id)arg2;
- (id)_ACLStringOfItemAtPath:(id)arg1;
- (void)_setSHA1ChecksumData:(id)arg1 forItemAtPath:(id)arg2;
- (id)_SHA1ChecksumDataOfItemAtPath:(id)arg1;
- (id)_attributesOfItemAtPath:(id)arg1;
- (id)_directoryEnumerator;
- (void)_freeBOM;
- (id)_BOM;
- (id)receiptStoragePaths;
- (void)_setInstallPrefixPath:(id)arg1;
- (void)_setInstallProcessName:(id)arg1;
- (void)_setPackageName:(id)arg1;
- (id)_packageName;
- (void)_setPackageGroups:(id)arg1;
- (id)packageGroups;
- (BOOL)_removeReceiptInDirectory:(id)arg1 error:(id *)arg2;

@end
