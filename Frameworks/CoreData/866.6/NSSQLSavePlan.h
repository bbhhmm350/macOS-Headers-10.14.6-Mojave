//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSQLSaveChangesRequestContext, NSSaveChangesRequest;
@protocol _NSCoreDataCollectionWithoutKeys;

__attribute__((visibility("hidden")))
@interface NSSQLSavePlan : NSObject
{
    NSSQLSaveChangesRequestContext *_requestContext;
    struct __CFDictionary *_changeCache;
    struct __CFDictionary *_insertCache;
    struct __CFDictionary *_toManyCache;
    NSMutableArray *_rowsToDelete;
    NSMutableSet *_updatedByRequest;
    NSMutableSet *_updatedByForeignKey;
    struct __CFDictionary *_updatedFOKRowsInCurrentSave;
    struct __CFDictionary *_deletedFOKRowsInCurrentSave;
    NSMutableArray *_externalDataReferencesToSave;
    NSMutableArray *_externalDataReferencesToDelete;
    NSMutableArray *_fileBackedFuturesToCopy;
    NSMutableArray *_fileBackedFuturesToDelete;
    NSMutableDictionary *_toManyRelationshipChanges;
    int _transactionInMemorySequence;
    struct _sqlSaveFlags {
        unsigned int notifyFOKChanges:1;
        unsigned int hasChanges:1;
        unsigned int reserved:30;
    } _flags;
}

@property(readonly, nonatomic) id <_NSCoreDataCollectionWithoutKeys> fileBackedFuturesToDelete; // @synthesize fileBackedFuturesToDelete=_fileBackedFuturesToDelete;
@property(readonly, nonatomic) id <_NSCoreDataCollectionWithoutKeys> fileBackedFuturesToCopy; // @synthesize fileBackedFuturesToCopy=_fileBackedFuturesToCopy;
@property(readonly, nonatomic) id <_NSCoreDataCollectionWithoutKeys> externalDataReferencesToDelete; // @synthesize externalDataReferencesToDelete=_externalDataReferencesToDelete;
@property(readonly, nonatomic) id <_NSCoreDataCollectionWithoutKeys> externalDataReferencesToSave; // @synthesize externalDataReferencesToSave=_externalDataReferencesToSave;
- (id)foreignOrderKeysBeingDeleted;
- (id)foreignOrderKeysBeingUpdated;
- (id)toManyRelationshipChanges;
- (id)newCorrelationTableUpdates;
- (id)newAncillaryRowsUpdatedForRowCache;
- (id)newPrimaryRowsUpdatedForRowCache;
- (id)newRowsToAddToRowCache;
- (id)newRowsToRemoveFromRowCache;
- (id)newObjectsForUniquenessConflictDetectionGivenReportedFailures:(id)arg1;
- (id)newObjectsForExhaustiveLockConflictDetection;
- (id)newObjectsForFastLockConflictDetection;
@property(readonly, nonatomic) NSManagedObjectContext *savingContext;
@property(readonly, nonatomic) NSSaveChangesRequest *saveRequest;
- (BOOL)hasChangesForWriting;
@property(nonatomic) int transactionInMemorySequence;
- (void)dealloc;
- (id)initForRequestContext:(id)arg1;
- (void)prepareRows;
- (void)_computeUpdatedRowSplit;
- (void)_createRowsForSave;
- (void)_prepareForDeletionOfExternalDataReferencesForObject:(id)arg1;
- (void)_prepareForDeletionOfFileBackedFuturesForObject:(id)arg1;
- (void)_prepareForDeletionOfDatabaseExternalPropertiesForObject:(id)arg1;
- (void)_createCorrelationTrackerUpdatesForDeletedObject:(id)arg1;
- (id)_findOrCreateChangeSnapshotForGlobalID:(id)arg1;
- (void)_populateRow:(id)arg1 fromObject:(id)arg2 timestamp:(double)arg3 inserted:(BOOL)arg4;
- (void)_addFileBackedFutureToDelete:(id)arg1;
- (void)_addFileBackedFutureToCopy:(id)arg1;
- (void)_addExternalReferenceDataToSave:(id)arg1;
- (void)_addExternalReferenceDataToDelete:(id)arg1;
- (void)_recordToManyChangesForObject:(id)arg1 inRow:(id)arg2 usingTimestamp:(double)arg3 inserted:(BOOL)arg4;
- (id)_correlationTableUpdateTrackerForRelationship:(id)arg1;
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalOrderKeys:(id)arg3 originalSnapshot:(id)arg4 value:(id)arg5 added:(id)arg6 deleted:(id)arg7 sourceRowPK:(long long)arg8 properties:(id)arg9 sourceObject:(id)arg10 newIndexes:(unsigned long long **)arg11 reorderedIndexes:(char **)arg12;
- (void)_registerChangedFOKs:(id)arg1 deletions:(id)arg2 forSourceObject:(id)arg3 andRelationship:(id)arg4;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3;
- (unsigned int)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4;
- (void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 newIndexes:(unsigned long long **)arg4 reorderedIndexes:(char **)arg5;
- (unsigned int)_knownEntityKeyForObject:(id)arg1;
- (unsigned int)_knownEntityKeyForObjectID:(id)arg1;
- (long long)_knownPrimaryKeyForObject:(id)arg1;
- (long long)_knownPrimaryKeyForObjectID:(id)arg1;
- (id)_entityForObject:(id)arg1;
- (id)entityForEntityDescription:(id)arg1;

@end
