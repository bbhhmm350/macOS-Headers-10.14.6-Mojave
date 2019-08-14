//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFLibrary : NSObject
{
}

+ (unsigned long long)numberOfMessagesForAccount:(id)arg1;
+ (void)performBlockDeferringMessageNotifications:(CDUnknownBlockType)arg1;
+ (void)queueStoreFinishedFirstTimeSyncWithBlock:(CDUnknownBlockType)arg1;
+ (void)queueMessagesDeletedBackupManagerNotification:(id)arg1;
+ (void)queueMessagesCompactedNotification:(id)arg1;
+ (void)queueMessageGmailLabelsChangedNotificationForMessages:(id)arg1;
+ (void)_queueMessagesChangedNotificationForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 updateEmlx:(BOOL)arg4;
+ (void)queueMessagesUpdatedNotification:(id)arg1;
+ (void)queueMessagesAddedNotification:(id)arg1;
+ (void)queueMessagesNotification:(id)arg1 withUserInfo:(id)arg2;
+ (void)registerStoreForUpdates:(id)arg1;
+ (void)_didCommit:(struct sqlite3 *)arg1;
+ (id)newUnsignedForQuery:(id)arg1 db:(struct sqlite3 *)arg2;
+ (void)_tagDatabaseVersionIfNeeded:(struct sqlite3 *)arg1;
+ (void)flushCachedDatabases;
+ (void)_checkInDBHandle:(id)arg1 forWriting:(BOOL)arg2;
+ (id)_checkOutDBHandleForWriting:(BOOL)arg1 isPrivileged:(BOOL)arg2;
+ (void)executeReadBlockInDatabase:(CDUnknownBlockType)arg1;
+ (void)executeWriteBlockInDatabase:(CDUnknownBlockType)arg1;
+ (void)executeBlock:(CDUnknownBlockType)arg1 isWriter:(BOOL)arg2 useTransaction:(BOOL)arg3 isPrivileged:(BOOL)arg4;
+ (id)sqlListWithArray:(id)arg1;
+ (id)_mailboxForMailboxID:(long long)arg1 forceCreation:(BOOL)arg2;
+ (long long)mailboxIDForMailbox:(id)arg1 loadIfNotPresent:(BOOL)arg2;
+ (BOOL)addCalendarEvent:(id)arg1 toMessage:(id)arg2;
+ (id)calendarEventForMessageID:(long long)arg1;
+ (void)prepareToReImportMessages;
+ (unsigned long long)cleanOldDatabases;
+ (void)setTotalNumberOfMessages:(unsigned long long)arg1;
+ (unsigned long long)totalNumberOfMessages;
+ (unsigned long long)runningIndexOfCurrentMessage;
+ (void)incrementRunningIndexOfCurrentMessage;
+ (void)setCurrentMailbox:(id)arg1;
+ (id)currentMailbox;
+ (void)setInitialized;
+ (BOOL)isInitialized;
+ (long long)libraryStatusAsReader;
+ (long long)libraryStatusAsWriter;
+ (long long)_libraryStatusCanWrite:(BOOL)arg1;
+ (void)dispose;
+ (BOOL)_fileExists;
+ (void)takeAccountsOnlineAllAccounts:(BOOL)arg1;
+ (void)upgradeMessageDirectoriesIfNeeded;
+ (void)_upgradeMessageDirectoriesSynchronously;
+ (id)_messagesDirectoryPathsFromDataPath:(id)arg1;
+ (id)_versionedMessagesDirectoryPathsForMailboxPath:(id)arg1 uuidDirectoryPaths:(id *)arg2;
+ (id)importMailboxRowIDs;
+ (id)importSubjectRowIDs;
+ (id)importAddressRowIDs;
+ (BOOL)importMessagesFromEnabledAccounts;
+ (void)setLibraryIsImporting:(BOOL)arg1;
+ (BOOL)libraryIsImporting;
+ (BOOL)_importMailbox:(id)arg1;
+ (BOOL)rebuildMailbox:(id)arg1;
+ (id)_mailboxIDsForWhereClause:(id)arg1 inMailboxes:(id)arg2 excludingMailboxes:(id)arg3 since:(id)arg4 counts:(id *)arg5;
+ (id)mailboxIDsForSenders:(id)arg1 inMailboxes:(id)arg2 excludingMailboxes:(id)arg3 since:(id)arg4 counts:(id *)arg5;
+ (id)mailboxIDsForRecipients:(id)arg1 inMailboxes:(id)arg2 excludingMailboxes:(id)arg3 since:(id)arg4 counts:(id *)arg5;
+ (id)mailboxIDsForConversationIDs:(id)arg1 inMailboxes:(id)arg2 excludingMailboxes:(id)arg3 since:(id)arg4 counts:(id *)arg5;
+ (void)setLastSpotlightCheckDate:(id)arg1 forMessageIDs:(id)arg2;
+ (id)messagesInMailbox:(id)arg1 sinceLastSpotlightCheck:(id)arg2;
+ (id)criterionExpressionStringForStartLibraryID:(long long)arg1 count:(unsigned long long)arg2;
+ (BOOL)boolForCriterion:(id)arg1;
+ (unsigned long long)countForCriterion:(id)arg1;
+ (id)_queryForCountCriterion:(id)arg1;
+ (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 searchType:(long long)arg3;
+ (id)_spotlightCallbackDispatchQueue;
+ (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 searchType:(long long)arg4 queryLabel:(id)arg5 async:(BOOL)arg6;
+ (struct __MDQuery *)createAllMailboxesSpotlightQueryWithQueryString:(id)arg1 attributes:(struct __CFArray *)arg2 queryLabel:(id)arg3 forUnreadCount:(BOOL)arg4 withMailboxExclusions:(BOOL)arg5 includeWhereFromsCriterion:(BOOL)arg6;
+ (id)queryForCriterion:(id)arg1 options:(unsigned int)arg2;
+ (id)queryForCriterion:(id)arg1 options:(unsigned int)arg2 baseTable:(unsigned long long)arg3 isSubquery:(BOOL)arg4 fixUpCriterion:(BOOL)arg5;
+ (void)markMessageAsViewed:(id)arg1 viewedDate:(id)arg2;
+ (id)attachmentURLForMessage:(id)arg1 partNumber:(id)arg2 attachmentFilename:(id)arg3 isMailDropImageArchive:(BOOL)arg4 isMailDropImageThumbnail:(BOOL)arg5;
+ (BOOL)hasCacheFileForMessage:(id)arg1 part:(id)arg2;
+ (BOOL)hasCacheFileForMessage:(id)arg1;
+ (id)incompleteMessagesForMailbox:(id)arg1 sinceDate:(id)arg2;
+ (id)_messageDataAtPath:(id)arg1;
+ (BOOL)isMessageContentLocallyAvailable:(id)arg1;
+ (id)fullMessageDataForMessage:(id)arg1;
+ (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
+ (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
+ (id)headerDataForMessageWithPath:(id)arg1;
+ (id)headerDataForLibraryID:(long long)arg1 mailboxID:(long long)arg2;
+ (id)_bodyDataAtPath:(id)arg1 headerData:(id *)arg2;
+ (id)mimeMessageDataSnippingPartsData:(id)arg1 mimePartBlock:(CDUnknownBlockType)arg2;
+ (void)writeAttachmentsIfNeededForMessage:(id)arg1;
+ (void)appendMimeData:(id)arg1 forMessage:(id)arg2 partNumber:(id)arg3;
+ (BOOL)_writeAttachmentWithDecodedData:(id)arg1 forMessage:(id)arg2 mimePart:(id)arg3 headers:(id)arg4;
+ (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3 hasCompleteText:(BOOL)arg4;
+ (id)snipAttachmentMimeForFileIfNeeded:(id)arg1 originalMessageData:(id)arg2 forMessage:(id)arg3;
+ (id)existingDataFileForMessage:(id)arg1;
+ (id)messageWithDataPath:(id)arg1;
+ (id)_dataPathForMessageWithLibraryID:(long long)arg1 mailboxID:(long long)arg2 type:(long long)arg3;
+ (id)_dataPathForMessage:(id)arg1 type:(long long)arg2;
+ (id)dataURLForMessage:(id)arg1 partNumber:(id)arg2;
+ (id)dataPathForMessage:(id)arg1;
+ (id)_dataPathForMessageWithLibraryID:(long long)arg1 mailboxID:(long long)arg2 withFilename:(id)arg3;
+ (id)dataPathForLibraryID:(long long)arg1 pathToMailbox:(id)arg2 type:(long long)arg3;
+ (id)dataPathForLibraryID:(long long)arg1 pathToMailbox:(id)arg2 fileExists:(char *)arg3;
+ (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;
+ (id)attachmentsDirectoryForMessage:(id)arg1;
+ (id)filenameForLibraryID:(long long)arg1 type:(long long)arg2;
+ (id)filenameForLibraryID:(long long)arg1 part:(id)arg2;
+ (id)intermediateDirectoryForLibraryID:(long long)arg1 forAttachments:(BOOL)arg2;
+ (id)versionedIntermediateDirectoryForLibraryID:(long long)arg1 forAttachments:(BOOL)arg2;
+ (id)dataDirectoryForMailbox:(id)arg1;
+ (void)_invalidateDirectoryForMailboxes:(id)arg1;
+ (id)databaseUUIDString;
+ (void)_setDatabaseUUIDString:(id)arg1;
+ (void)loadDatabaseUUIDStringIfNeeded:(struct sqlite3 *)arg1;
+ (void)updateEWSOfflineIdsToRealIds:(id)arg1;
+ (id)EWSSyncStateForMailbox:(id)arg1;
+ (void)setEWSSyncState:(id)arg1 forMailbox:(id)arg2;
+ (id)EWSFolderIdsByURLForMailboxes:(id)arg1;
+ (id)EWSFolderIdForMailbox:(id)arg1;
+ (void)setEWSFolderId:(id)arg1 forMailbox:(id)arg2;
+ (id)_EWSProperty:(char *)arg1 forMailbox:(id)arg2 errorString:(id)arg3;
+ (void)_addEWSProperty:(char *)arg1 value:(id)arg2 forMailbox:(id)arg3 errorString:(id)arg4;
+ (BOOL)_EWSFolderExistsForMailbox:(id)arg1 errorString:(id)arg2;
+ (BOOL)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4;
+ (id)draftWithDocumentID:(id)arg1 mailbox:(id)arg2;
+ (id)lastMessageWithMessageID:(id)arg1 inMailbox:(id)arg2;
+ (id)messagesWithMessageID:(id)arg1 inMailbox:(id)arg2;
+ (void)deleteMailboxes:(id)arg1 forRebuild:(BOOL)arg2;
+ (BOOL)renameMailboxes:(id)arg1 to:(id)arg2;
+ (void)compactMailbox:(id)arg1;
+ (CDUnknownBlockType)removeMessageBatch:(id)arg1 handle:(id)arg2 db:(struct sqlite3 *)arg3 cleanUpAfter:(BOOL)arg4 errorOccured:(char *)arg5;
+ (void)removeMessages:(id)arg1 cleanUpAfter:(BOOL)arg2;
+ (void)removeMessages:(id)arg1;
+ (void)deleteFilesForMessageWithLibraryID:(long long)arg1 emlxDirectory:(id)arg2 attachmentsDirectory:(id)arg3 cachedDirectoryContents:(id)arg4;
+ (BOOL)shouldCancel;
+ (void)updateFileForMessage:(id)arg1;
+ (void)reloadMessage:(id)arg1;
+ (void)resetConversationsForExistingMessagesWithRowIDs:(id)arg1 withDB:(struct sqlite3 *)arg2;
+ (id)snippetsForMessages:(id)arg1;
+ (void)loadSecondaryMetadataForMessage:(id)arg1;
+ (id)mailboxNameForMessage:(id)arg1;
+ (id)accountForMessage:(id)arg1;
+ (id)_remoteStoreForMessage:(id)arg1;
+ (id)_mailboxForMailboxID:(long long)arg1;
+ (id)mailboxForMessage:(id)arg1;
+ (id)urlForMailboxID:(long long)arg1;
+ (void)mailboxesDidChange;
+ (id)copyMailboxURLToRowIDMap;
+ (id)referencesForLibraryID:(long long)arg1;
+ (BOOL)boolForQuery:(id)arg1;
+ (unsigned long long)unsignedCountForQuery:(id)arg1 monitor:(id)arg2;
+ (BOOL)messageHasRelatedNonJunkMessages:(id)arg1;
+ (id)firstReplyToMessage:(id)arg1;
+ (id)messagesWithLibraryIDs:(id)arg1 options:(unsigned int)arg2;
+ (id)messageWithLibraryID:(long long)arg1;
+ (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2;
+ (id)messagesWithMessageIDHeader:(id)arg1;
+ (id)messageWithMessageID:(id)arg1;
+ (void)setStoreForMessage:(id)arg1 fromMailbox:(id)arg2 knownStores:(id)arg3;
+ (void)_setStoreForMessage:(id)arg1 knownStores:(id)arg2;
+ (void)setStoresForMessages:(id)arg1;
+ (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2 options:(unsigned int)arg3;
+ (id)messagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2 options:(unsigned int)arg3;
+ (unsigned long long)unreadCountForMessageType:(BOOL)arg1;
+ (unsigned long long)totalCountForMailbox:(id)arg1 unseenCount:(unsigned long long *)arg2 adjustedUnreadCount:(unsigned long long *)arg3;
+ (void)gatherCountsForMailbox:(id)arg1 totalCount:(unsigned long long *)arg2 unreadCount:(unsigned long long *)arg3 deletedCount:(unsigned long long *)arg4 totalSize:(unsigned long long *)arg5;
+ (id)unreadMessagesForMailbox:(id)arg1;
+ (id)duplicateRemoteIDsForMailboxWithURLString:(id)arg1;
+ (id)messagesForGmailLabel:(id)arg1 inAllMailMailbox:(id)arg2 olderThanNumberOfDays:(long long)arg3;
+ (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(long long)arg2;
+ (id)messagesForMailbox:(id)arg1 where:(id)arg2 sortedBy:(id)arg3 ascending:(BOOL)arg4 options:(unsigned int)arg5;
+ (char *)_queryForMailbox:(id)arg1 where:(id)arg2 sortedBy:(id)arg3 ascending:(BOOL)arg4 options:(unsigned int)arg5;
+ (id)messagesWhere:(id)arg1 sortedBy:(id)arg2 options:(unsigned int)arg3;
+ (id)messagesMatchingQuery:(const char *)arg1 options:(unsigned int)arg2;
+ (void)sendMessagesMatchingQuery:(const char *)arg1 to:(id)arg2 options:(unsigned int)arg3;
+ (void)setRecipientTypeForMessages:(id)arg1;
+ (id)_activeMailboxesClauseRebuildIfNecessary;
+ (BOOL)_isActiveMailboxID:(long long)arg1;
+ (id)_copyActiveMailboxesCache;
+ (void)_rebuildActiveMailboxesCacheIfNecessary;
+ (void)_rebuildActiveMailboxesCache;
+ (void)_getActiveAccountURLs:(id)arg1 andActiveMailboxURLs:(id)arg2;
+ (void)disableActiveMailboxFiltering;
+ (void)clearActiveMailboxesCache;
+ (id)myAddressIDsString;
+ (void)invalidateMyEmailAddressesIfContains:(id)arg1;
+ (void)invalidateMyEmailAddresses;
+ (long long)threadPriority;
+ (void)setAttachmentNames:(id)arg1 forMessage:(id)arg2;
+ (void)updateDatabaseValuesIfNeeded;
+ (CDStruct_f4b747e6)messageColorForLibraryMessageColor:(char *)arg1;
+ (char *)libraryMessageColorForMessageColor:(CDStruct_f4b747e6)arg1;
+ (id)referencesAsEncodedMessageIDStringFromMessageHeaders:(id)arg1;
+ (void)addGmailLabelsToEmlx;
+ (void)hideMailboxesNotInLibraryFromSpotlight;
+ (void)backfillDateLastViewedAttribute;
+ (void)_updateDateLastViewed:(int)arg1 forLibraryID:(long long)arg2;
+ (void)deleteDataDirectoriesForMailbox:(id)arg1;
+ (void)triggerFullSpotlightImportOfMailbox:(id)arg1;
+ (void)removeExtendedAttributePlistFromEmlxFile:(id)arg1;
+ (id)propertyListForMessage:(id)arg1 dateReceived:(id)arg2 dateLastViewed:(id)arg3 remoteID:(id)arg4 gmailLabels:(id)arg5 flags:(long long)arg6 mergeWithDictionary:(id)arg7;
+ (id)_coreSpotlightIndexQueue;
+ (void)_deleteMailboxFromCoreSpotlight:(id)arg1;
+ (void)_deleteMessageFromCoreSpotlight:(id)arg1;
+ (void)sendSearchableItemsToCoreSpotlight:(id)arg1;
+ (void)sendAttributesToCoreSpotlightForMessage:(id)arg1 includeBody:(BOOL)arg2 update:(BOOL)arg3;
+ (id)createAddresseeStringFromDisplayName:(id)arg1 address:(id)arg2 stringUniquer:(id)arg3 addressIndex:(long long)arg4;
+ (long long)rowidForMailboxURL:(id)arg1 handle:(id)arg2 cache:(id)arg3;
+ (void)updateNormalizedSubjectsIfNeededWithHandle:(id)arg1;
+ (void)_mailAccountsDidChange:(id)arg1;
+ (void)_mailboxWasRenamed:(id)arg1;
+ (void)_mailboxWillBeInvalidated:(id)arg1;
+ (BOOL)setupLibrary;
+ (void)removeCurrentTemporaryDatabaseFiles;
+ (void)initialize;
+ (id)writeQueue;
+ (BOOL)initializeDatabase:(struct sqlite3 *)arg1;
+ (id)contentsOfDatabaseDefinition;
+ (void)updateSize:(id)arg1 forMessage:(id)arg2;
+ (void)setFlagsAndColorForMessages:(id)arg1;
+ (void)setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;
+ (void)_commitFlagsForMessage:(id)arg1 oldFlags:(id)arg2;
+ (void)updateGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
+ (id)_mailboxIDsStringForMailboxes:(id)arg1;
+ (void)removeSourceMailbox:(id)arg1;
+ (void)setSourceMailbox:(id)arg1 forMailboxes:(id)arg2;
+ (void)recalculateMessageCountsForMailboxIDs:(id)arg1;
+ (void)loadMessageCountsForMailboxes;
+ (void)commitFlagsForMessage:(id)arg1 oldFlags:(long long)arg2;
+ (void)setSnippetsForMessages:(id)arg1;
+ (void)_removeGmailLabelsFromMessages:(id)arg1 db:(struct sqlite3 *)arg2 libraryIDs:(id)arg3 labels:(id)arg4;
+ (void)addGmailLabelsToMessagesWithHandle:(id)arg1 db:(struct sqlite3 *)arg2 libraryIDs:(id)arg3 labels:(id)arg4;
+ (void)closeLibrary;
+ (void)_updateMessageFilesInBackground;
+ (void)_commitMessagesInBackground:(id)arg1;
+ (void)commitSynchronouslyPostingMessages:(id)arg1 postFlags:(id)arg2 postingOldFlagsByMessage:(id)arg3;
+ (void)commitSynchronously;
+ (void)_synchronouslyUpdateMessageFiles;
+ (void)unScheduleMessageFileUpdate;
+ (void)scheduleMessageFileUpdate;
+ (void)unScheduleCommit;
+ (void)scheduleCommit;
+ (void)_setCommitTimer:(id)arg1;
+ (void)_addMessagesNeedingEmlxUpdate:(id)arg1;
+ (void)setDateReceivedInterval:(double)arg1 forMessage:(id)arg2;
+ (void)updateJunkMessagesForIndexing;
+ (void)flagsChangedForMessages:(id)arg1;
+ (void)restoreBackingStoreUpdateJournalIfNeeded;
+ (void)_mergeRestoreMessageLibraryIDsToUpdate:(id)arg1;
+ (BOOL)updateBackingStoreUpdateJournal;
+ (BOOL)removeBackingStoreUpdateJournal;
+ (id)_backingStoreJournalFile;
+ (id)_backingStoreJournalDirectory;
+ (void)commitMessage:(id)arg1 immediately:(BOOL)arg2;
+ (BOOL)logSQLitePerformance;
+ (void)loadSearchSettings;
+ (id)spotlightLog;
+ (id)log;

@end
