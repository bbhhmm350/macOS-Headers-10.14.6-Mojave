//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPDKStorageUtils : NSObject
{
}

+ (void)_registerForSyncNotifications;
+ (void)removeObserver:(id)arg1;
+ (id)registerForTopicsRemoteDeletionWithBlock:(CDUnknownBlockType)arg1;
+ (id)registerForTopicsRemoteAdditionWithBlock:(CDUnknownBlockType)arg1;
+ (id)registerForNamedEntitiesRemoteDeletionWithBlock:(CDUnknownBlockType)arg1;
+ (id)registerForNamedEntitiesRemoteAdditionWithBlock:(CDUnknownBlockType)arg1;
+ (id)topicRecordFromEvent:(id)arg1;
+ (id)namedEntityRecordFromEvent:(id)arg1;
+ (id)readWriteKnowledgeStore;
+ (id)readOnlyKnowledgeStore;
+ (id)topicStream;
+ (id)entityStream;
+ (void)initialize;

@end
