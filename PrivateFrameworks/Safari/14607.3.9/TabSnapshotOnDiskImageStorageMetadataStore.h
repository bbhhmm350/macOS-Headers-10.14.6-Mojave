//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSSQLiteStore.h>

__attribute__((visibility("hidden")))
@interface TabSnapshotOnDiskImageStorageMetadataStore : WBSSQLiteStore
{
}

- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_createFreshDatabaseSchema;
- (int)_currentSchemaVersion;
- (void)deleteTabSnapshotMetadataForTabsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tabSnapshotMetadataForTabsCreatedOnOrAfterDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tabSnapshotMetadataForTabsWithOriginURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tabSnapshotMetadataForTabsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createOrUpdateTabSnapshotMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
