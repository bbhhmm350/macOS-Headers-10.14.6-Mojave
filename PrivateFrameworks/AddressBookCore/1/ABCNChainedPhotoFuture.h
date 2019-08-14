//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsFoundation/CNFuture.h>

@class ABCNChainedFutureQueue;

@interface ABCNChainedPhotoFuture : CNFuture
{
    ABCNChainedFutureQueue *_futureQueue;
}

+ (id)chainedFutureWithFutures:(id)arg1;
- (id)description;
- (void)cancelCurrentAndRemainingFutures;
- (void)didCancel;
- (BOOL)resultDataIsEmpty:(id)arg1;
- (void)nextWithResult:(id)arg1;
- (void)addCompletionBlocksToFuture:(id)arg1;
- (void)runNextFuture;
- (void)addCompletionBlocksToSelf;
- (void)start;
- (void)dealloc;
- (id)initWithFutures:(id)arg1;

@end
