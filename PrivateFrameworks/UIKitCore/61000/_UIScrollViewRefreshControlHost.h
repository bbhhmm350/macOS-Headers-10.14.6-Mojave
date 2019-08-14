//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIRefreshControlHosting-Protocol.h>

@class NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting>
{
    UIScrollView *_scrollView;
    BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
    BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;
}

- (void).cxx_destruct;
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (void)incrementInsetHeight:(double)arg1;
- (void)decrementInsetHeight:(double)arg1;
@property(readonly) __weak UIScrollView *scrollView;
@property(readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding;
- (id)initWithScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
