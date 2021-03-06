//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudHistoryServiceProtocol-Protocol.h>

@class NSString;
@protocol NSXPCProxyCreating;

@interface WBSCloudHistoryServiceProxy : NSObject <WBSCloudHistoryServiceProtocol>
{
    id <NSXPCProxyCreating> _proxy;
}

- (void).cxx_destruct;
- (void)saveChangesBypassingThrottler:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAndMergeChangesBypassingThrottler:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetForAccountChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

