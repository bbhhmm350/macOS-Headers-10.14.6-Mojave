//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/ABGroup.h>

@class NSSet;

@interface ABSmartGroup : ABGroup
{
    NSSet *_cachedMembers;
}

+ (id)nts_RecordFromDictionaryRepresentation:(id)arg1 withRecordMapping:(id)arg2 addressBook:(id)arg3 generateIds:(BOOL)arg4;
+ (Class)remoteObjectClass;
+ (id)smartGroups;
+ (id)builtInProperties;
+ (id)os_log;
- (BOOL)supportsDistributionList;
- (id)dictionaryRepresentation;
- (id)nts_DescriptionDictionary;
- (id)uniqueIdForDrag;
- (BOOL)canDeletePeople;
- (BOOL)canRemoveMembers;
- (BOOL)isPublishable;
- (BOOL)tracksModification;
- (BOOL)nts_TracksModification;
- (void)setTracksModification:(BOOL)arg1;
- (void)nts_SetTracksModification:(BOOL)arg1;
- (void)setIsModified:(BOOL)arg1;
- (void)nts_SetIsModified:(BOOL)arg1;
- (BOOL)isModified;
- (BOOL)nts_IsModified;
- (id)searchElement;
- (id)nts_SearchElement;
- (void)setSearchElement:(id)arg1;
- (void)nts_SetSearchElement:(id)arg1;
- (id)distributionIdentifierForProperty:(id)arg1 person:(id)arg2;
- (BOOL)setDistributionIdentifier:(id)arg1 forProperty:(id)arg2 person:(id)arg3;
- (id)parentGroups;
- (BOOL)_isSmartGroupParentOfRecord:(id)arg1;
- (BOOL)removeSubgroup:(id)arg1;
- (BOOL)addSubgroup:(id)arg1;
- (id)nts_Subgroups;
- (id)subgroups;
- (BOOL)removeMember:(id)arg1;
- (BOOL)addMember:(id)arg1;
- (void)_setCachedMembers:(id)arg1;
- (id)nts_Members;
- (id)_members;
- (id)members;
- (void)dealloc;
- (BOOL)_shouldAssignNewDatabaseImplToAccount;

@end
