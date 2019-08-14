//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/WBSSandboxFileExtensionController.h>

@protocol SandboxExtensionStore;

__attribute__((visibility("hidden")))
@interface SandboxFileExtensionController : WBSSandboxFileExtensionController
{
}

- (void)addFileExtensionForWebBookmarkLeafIfPossible:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeExtensionsWithCategory:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeExtensionsOlderThanDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeExtensionWithIdentifier:(id)arg1 category:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addExtensionWithAccessURL:(id)arg1 permissions:(long long)arg2 identifier:(id)arg3 category:(long long)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)addExtensions:(id)arg1 identifier:(id)arg2 category:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestExtensionWithCategories:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestExtensionWithIdentifier:(id)arg1 category:(long long)arg2 url:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)requestExtensionWithIdentifier:(id)arg1 category:(long long)arg2 url:(id)arg3 error:(id *)arg4;
- (id)initWithStore:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) id <SandboxExtensionStore> store; // @dynamic store;

@end
