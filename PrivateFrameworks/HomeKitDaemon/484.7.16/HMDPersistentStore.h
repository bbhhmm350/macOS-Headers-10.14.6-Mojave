//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDPersistentStore : HMFObject
{
}

+ (id)decryptDataWithMetadataKey:(id)arg1 error:(id *)arg2;
+ (id)encryptDataWithMetadataKey:(id)arg1 error:(id *)arg2;
+ (id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long *)arg2 deleteExtraKeys:(BOOL)arg3 allowControllerIdentifierToChange:(BOOL)arg4 controllerIdentifierChanged:(char *)arg5 successfulKeyUserName:(id *)arg6 error:(id *)arg7;
+ (id)encryptDataWithControllerKey:(id)arg1 error:(id *)arg2;
+ (id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
+ (id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
+ (id)unarchiveBulletinBoard;
+ (id)archiveBulletinBoard:(id)arg1;
+ (id)deserializeBlacklistedBundlesFromData:(id)arg1;
+ (id)serializeBlacklistedBundles:(id)arg1;
+ (id)unarchiveBlacklistedBundles;
+ (id)archiveBlacklistedBundles:(id)arg1;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)archiveIDSDataSyncJournal:(id)arg1;
+ (void)removeTransactionJournal;
+ (id)unarchiveServerTokenData:(char *)arg1;
+ (id)archiveCloudServerTokenData:(id)arg1;
+ (void)removeServerTokenDataFile;
+ (BOOL)archiveMetadata:(id)arg1;
+ (id)encryptUsingLocalKeyAndArchiveData:(id)arg1 storePath:(id)arg2 dataLabel:(id)arg3;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (id)loadPlainMetadataDictionary;
+ (id)serializeMetadata:(id)arg1;
+ (id)unarchiveMetadata:(id *)arg1;
+ (id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)arg1 error:(id *)arg2;
+ (BOOL)deserializeMetadata:(id *)arg1 fromData:(id)arg2;
+ (id)unarchiveVendorStore;
+ (void)archiveVendorStore:(id)arg1;
+ (id)archiveHomeData:(id)arg1;
+ (id)serializeHomeData:(id)arg1 localStorage:(BOOL)arg2 remoteDeviceOnSameAccount:(BOOL)arg3;
+ (void)resetMetadata;
+ (void)resetConfiguration;
+ (void)cleanupKeysInStore;
+ (id)unarchiveHomeData:(id *)arg1 decryptionFailed:(char *)arg2;
+ (BOOL)deserializeHomeData:(id *)arg1 localStorage:(BOOL)arg2 fromData:(id)arg3;
+ (BOOL)writeDictionary:(id)arg1 toStorePath:(id)arg2;
+ (id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;

@end
