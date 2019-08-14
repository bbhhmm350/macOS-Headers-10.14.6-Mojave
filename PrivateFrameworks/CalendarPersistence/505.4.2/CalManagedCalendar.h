//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedNode.h>

#import <CalendarPersistence/CalendarModelProtocol-Protocol.h>
#import <CalendarPersistence/DefaultAlarmProviderProtocol-Protocol.h>

@class CalManagedDefaultAlarmSet, CalManagedGroup, CalManagedSubscriptionInfo, NSDictionary, NSManagedObjectID, NSSet, NSString, NSURL;
@protocol CalendarSourceModelProtocol;

@interface CalManagedCalendar : CalManagedNode <CalendarModelProtocol, DefaultAlarmProviderProtocol>
{
}

+ (void)enableChangeRequestNotifications;
+ (id)pathExtension;
+ (id)entityName;
@property(readonly) BOOL isAffectingAvailability;
- (id)enclosingSource;
@property(readonly, nonatomic) NSString *serverPath;
@property(readonly, nonatomic) BOOL isDistinguishedExchangeCalendar;
@property(readonly, nonatomic) BOOL isDefaultSchedulingCalendar;
@property(readonly, nonatomic) BOOL allowsScheduling;
@property(readonly, nonatomic) NSSet *defaultAlarmsForTimedEvents;
@property(readonly, nonatomic) NSSet *defaultAlarmsForAllDayEvents;
- (void)setIgnoreAlarms:(BOOL)arg1;
@property(readonly, nonatomic) BOOL ignoreAlarms;
@property(readonly, nonatomic) NSString *defaultOrganizerPhoneNumberForNewItems;
@property(readonly, nonatomic) BOOL defaultOrganizerIsMeForNewItems;
@property(readonly, nonatomic) NSString *defaultOrganizerEncodedLikenessDataForNewItems;
@property(readonly, nonatomic) NSString *defaultOrganizerEmailForNewItems;
@property(readonly, nonatomic) NSURL *defaultOrganizerAddressForNewItems;
@property(readonly, nonatomic) NSString *defaultOrganizerNameForNewItems;
@property(readonly, nonatomic) BOOL isShareable;
- (void)setPublishURL:(id)arg1;
@property(readonly, nonatomic) NSURL *subscriptionURL;
@property(readonly, copy, nonatomic) NSURL *publishURL;
@property(readonly, nonatomic) NSURL *prePublishURL;
@property(readonly, nonatomic) NSSet *sharedOwnerAddresses;
@property(readonly, nonatomic) NSString *sharedOwnerAddress;
@property(readonly, nonatomic) NSString *sharedOwnerName;
@property(readonly, nonatomic) NSString *sharingStatusString;
@property(readonly, copy, nonatomic) id <CalendarSourceModelProtocol> containerSource;
- (id)bestDefaultSymbolicColorWithExistingNodes:(id)arg1;
- (id)bestDefaultSymbolicColor;
- (BOOL)shouldShowInPrimaryAccountsShowDelegates:(BOOL)arg1;
- (BOOL)shouldShowInPrimaryAccounts;
@property(readonly, nonatomic) BOOL isNaturalLanguageSuggestedEventCalendar;
@property(readonly, nonatomic) BOOL isSuggestedEventCalendar;
@property(readonly, nonatomic) BOOL isSubscribedHolidayCalendar;
@property(readonly, nonatomic) BOOL isFacebookBirthdayCalendar;
@property(readonly, nonatomic) BOOL allowEvents;
@property(readonly, nonatomic) BOOL allowReminders;
@property(readonly, nonatomic) BOOL allowsContentModifications;
- (int)displayOrder;
@property(readonly, nonatomic) NSString *calendarIdentifier;
- (long long)compare:(id)arg1;
- (void)adoptCalendarDetailsFromCalendar:(id)arg1;
- (void)applyReasonableDefaultsForNewCalendarInGroup:(id)arg1;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)arg1 fromServer:(BOOL)arg2;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)arg1;
- (id)relationshipsToCompareForMerge;
- (id)attributesToCompareForMerge;
- (BOOL)hasAddressForMe;
- (BOOL)isOwnerMe;
- (BOOL)isOwnerAddress:(id)arg1;
- (BOOL)isAddressInMeCard:(id)arg1;
- (BOOL)isAddressMe:(id)arg1;
- (BOOL)isColorEditable;
- (BOOL)isRenameable;
- (id)properties;
@property(readonly, nonatomic) BOOL isBirthday;
- (BOOL)isMigrateable;
- (BOOL)isLocal;
- (id)subscriptionOrPublishURL;
@property(readonly, nonatomic) BOOL isSubscribed;
- (id)keysOnlyRelevantToNetworkDetails;
- (void)didSave;
- (void)willSave;
- (id)nodesForOrdering;
- (id)contextForValidationError;
@property BOOL shareDefaultAlarmSettings; // @dynamic shareDefaultAlarmSettings;
- (BOOL)shouldDisplayAsReminderCalendar;
- (BOOL)shouldDisplayAsEventCalendar;
- (BOOL)containsTasks;
- (BOOL)containsEvents;
- (id)_itemPredicate;
- (void)prefetchRelationshipsForDelete;
@property long long notificationCount;
@property BOOL isTaskContainer;
@property BOOL isEventContainer;
- (void)setChecked:(long long)arg1;
- (long long)checked;
@property(readonly, nonatomic) BOOL isFamilyCalendar;
@property(readonly, nonatomic) BOOL cachedHasSharees;
- (void)updateShareeDerivedProperties;
- (id)iCalendarDocumentWithID:(id)arg1 name:(id)arg2 description:(id)arg3 color:(id)arg4 options:(unsigned long long)arg5;
- (void)setNeedsPublish:(BOOL)arg1;
- (id)calendarSource;
- (void)asyncImportFiles:(id)arg1 intoContext:(id)arg2 importOptionsForInsert:(unsigned long long)arg3 importOptionsForUpdate:(unsigned long long)arg4 processEvents:(BOOL)arg5 processReminders:(BOOL)arg6 callbackQueue:(id)arg7 progressBlock:(CDUnknownBlockType)arg8 abortForIssueBlock:(CDUnknownBlockType)arg9 finishBlock:(CDUnknownBlockType)arg10;
- (void)asyncImportICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(BOOL)arg4 processReminders:(BOOL)arg5 callbackQueue:(id)arg6 progressBlock:(CDUnknownBlockType)arg7 abortForIssueBlock:(CDUnknownBlockType)arg8 finishBlock:(CDUnknownBlockType)arg9;
- (void)blockingImportICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(BOOL)arg4 processReminders:(BOOL)arg5 progressBlock:(CDUnknownBlockType)arg6 abortForIssueBlock:(CDUnknownBlockType)arg7 finishBlock:(CDUnknownBlockType)arg8;
- (BOOL)importICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(BOOL)arg4 processReminders:(BOOL)arg5 callbackQueue:(id)arg6 progressBlock:(CDUnknownBlockType)arg7 abortForIssueBlock:(CDUnknownBlockType)arg8 finishBlock:(CDUnknownBlockType)arg9 shouldSaveOnSuccess:(BOOL)arg10 synchronousFinishBlock:(BOOL)arg11;
- (BOOL)importICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(BOOL)arg4 processReminders:(BOOL)arg5 callbackQueue:(id)arg6 progressBlock:(CDUnknownBlockType)arg7 abortForIssueBlock:(CDUnknownBlockType)arg8 finishBlock:(CDUnknownBlockType)arg9;
- (BOOL)_importCleanedDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 sharedUIDsToImport:(id)arg4 resultObjectIDs:(struct NSMutableDictionary **)arg5 progressBlock:(CDUnknownBlockType)arg6 abortForIssueBlock:(CDUnknownBlockType)arg7;
- (id)handleDuplicatedUIDSFromThisCalendar:(id)arg1 context:(id)arg2;
- (void)moveEventsAndMastersWithDuplicatedUIDSFromOtherCalendars:(id)arg1 sharedUIDS:(id)arg2;
- (id)calendarsToCheckForDuplicatedUIDS;
- (void)_cleanComponent:(id)arg1;
- (BOOL)_containsDangerousAlarms:(id)arg1;
- (BOOL)_componentIsDangerousAlarm:(id)arg1;
- (id)fixAndReportIssuesInNewlyImportedItem:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *alarms; // @dynamic alarms;
@property BOOL alarmsDisabled; // @dynamic alarmsDisabled;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy, nonatomic) NSString *colorString; // @dynamic colorString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain) CalManagedDefaultAlarmSet *defaultAlarmSet; // @dynamic defaultAlarmSet;
@property(readonly, copy) NSString *description;
@property(retain) CalManagedGroup *group; // @dynamic group;
@property BOOL hasSharees; // @dynamic hasSharees;
@property(readonly) unsigned long long hash;
@property BOOL isMarkedImmutableSharees; // @dynamic isMarkedImmutableSharees;
@property BOOL isMarkedUndeletable; // @dynamic isMarkedUndeletable;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(retain) NSSet *items; // @dynamic items;
@property(readonly, retain) CalManagedDefaultAlarmSet *localDefaultAlarmSet; // @dynamic localDefaultAlarmSet;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, copy, nonatomic) NSString *notes;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(retain) NSSet *sharees; // @dynamic sharees;
@property(retain) CalManagedSubscriptionInfo *subscriptionInfo; // @dynamic subscriptionInfo;
@property(readonly) Class superclass;
@property BOOL suppressEventSchedulingNotifications; // @dynamic suppressEventSchedulingNotifications;
@property(readonly, copy, nonatomic) NSString *symbolicColorName;

@end
