//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDMessagePTaskStore-Protocol.h>

@class NSString;

@interface IMDMessagePTaskXPCStore : NSObject <IMDMessagePTaskStore>
{
}

- (BOOL)updateTaskFlagsForPTask:(id)arg1;
- (BOOL)deleteAllCompletedTasks;
- (id)loadMostRecentMessagePTasks;
- (BOOL)storePTask:(id)arg1;
- (BOOL)_networkCall_IMDMessagePTaskDeleteAllCompletedTask;
- (BOOL)_networkCall_IMDMessagePTaskUpdateTaskFlagsForGUID:(id)arg1 taskFlags:(long long)arg2;
- (id)_networkCall_IMDMessagePTaskSelectWithLimit:(long long)arg1;
- (BOOL)_networkCall_InsertRowGuid:(id)arg1 taskFlags:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
