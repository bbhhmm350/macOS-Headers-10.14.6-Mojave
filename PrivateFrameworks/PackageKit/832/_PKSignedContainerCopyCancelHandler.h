//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PackageKit/PKSignedContainerUnarchivalOperationToken-Protocol.h>

@class NSString, PKPayloadCopier;
@protocol OS_dispatch_queue;

@interface _PKSignedContainerCopyCancelHandler : NSObject <PKSignedContainerUnarchivalOperationToken>
{
    PKPayloadCopier *_copier;
    BOOL _isCancelled;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void)cancel;
- (void)setCopier:(id)arg1;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
