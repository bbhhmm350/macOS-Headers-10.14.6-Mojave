//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXScheduler : NSObject
{
}

+ (id)sharedScheduler;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchOnMainThreadWhenNotScrolling:(CDUnknownBlockType)arg1;
- (void)scrollViewWillLayoutSubviews;
- (void)scrollViewDidScroll;
- (void)dispatchInMainTransactionAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchInMainTransaction:(CDUnknownBlockType)arg1;

@end
