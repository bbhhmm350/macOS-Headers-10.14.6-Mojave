//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IMDMessagePTaskStore;

@interface IMDChatStore : NSObject
{
    NSString *_lastModificationStamp;
    id <IMDMessagePTaskStore> _messagePTaskStore;
}

+ (id)sharedInstance;
@property(retain) id <IMDMessagePTaskStore> messagePTaskStore; // @synthesize messagePTaskStore=_messagePTaskStore;
@property(retain) NSString *modificationStamp; // @synthesize modificationStamp=_lastModificationStamp;
- (void)_broadcastToForceReloadChats;
- (void)_broadcastUpdateForMergedChatWithPersonCentricIDIfNeeded:(id)arg1 updatedHandleID:(id)arg2;
- (id)_allHandlesOnAllChats;
- (BOOL)updateHandle:(id)arg1 forMessage:(id)arg2 WithPC:(id)arg3 onService:(id)arg4;
- (BOOL)updatePersonCentricIDForHandlesInChatWithMessage:(id)arg1 fromIdentifier:(id)arg2 personCentricID:(id)arg3 chat:(id)arg4;
- (id)_chatRegistry;
- (void)setChatIsFiltered:(BOOL)arg1 withChatGuid:(id)arg2;
- (void)deleteChat:(id)arg1;
- (void)removeMessageWithGUID:(id)arg1 fromChat:(id)arg2;
- (void)addMessageWithGUID:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(BOOL)arg3;
- (void)addMessageWithGUID:(id)arg1 toChat:(id)arg2;
- (id)chatsGUIDsForMessageWithGUID:(id)arg1;
- (id)newestChatWithOriginalGroupID:(id)arg1 onService:(id)arg2;
- (id)chatsWithRoomname:(id)arg1 onService:(id)arg2;
- (id)chatsWithHandle:(id)arg1 onService:(id)arg2;
- (unsigned long long)unreadCountForChat:(id)arg1;
- (id)storeChat:(id)arg1;
- (id)loadAllChats;
- (void)unarchiveChat:(id)arg1;
- (void)archiveChat:(id)arg1;
- (void)_updateModificationDate;
- (void)dealloc;
- (id)init;

@end
