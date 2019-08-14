//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mail/MCActivityTarget-Protocol.h>

@class MCInvocationQueue, NSArray, NSCache, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface MFAddressManager : NSObject <MCActivityTarget>
{
    NSMutableSet *_emailsAwaitingImage;
    NSMutableSet *_emailsWithoutImage;
    NSMutableDictionary *_recordsCache;
    NSMutableSet *_addressesWithNoRecords;
    BOOL _needToTrimRecordCaches;
    NSCache *_imageCache;
    MCInvocationQueue *_imageLoadingQueue;
    NSOperationQueue *_imageCreationQueue;
}

+ (id)addressManager;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSOperationQueue *imageCreationQueue; // @synthesize imageCreationQueue=_imageCreationQueue;
@property(readonly, nonatomic) MCInvocationQueue *imageLoadingQueue; // @synthesize imageLoadingQueue=_imageLoadingQueue;
@property(readonly, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *groups;
- (id)_addressBookRecordsForFirstName:(id)arg1 lastName:(id)arg2;
- (id)addressBookPersonForEmail:(id)arg1;
- (id)_addressBookRecordForEmail:(id)arg1;
- (void)removeRecentRecord:(id)arg1;
- (void)removeRecentAddresses:(id)arg1;
- (void)removeRecordFromAddressBook:(id)arg1 forRecent:(id)arg2;
- (id)addRecentToAddressBook:(id)arg1;
- (void)addAddresses:(id)arg1;
- (void)addRecentAddresses:(id)arg1 sendingAddress:(id)arg2;
- (void)_addAddresses:(id)arg1;
- (id)recordForUniqueId:(id)arg1;
- (void)_clearCachedImagesForRemovedRecords:(id)arg1;
- (void)_invalidateInsertedRecords:(id)arg1;
- (id)_fullAddressesForRecords:(id)arg1;
- (void)_invalidateChangedRecords:(id)arg1;
- (void)_addressBookDidChange:(id)arg1;
- (void)_trimRecordCaches;
- (void)_trimRecordCachesAfterDelay;
- (id)bestRecordMatchingFormattedAddress:(id)arg1;
- (void)_loadAddressBookSynchronously;
- (void)loadAddressBookAsynchronously;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
