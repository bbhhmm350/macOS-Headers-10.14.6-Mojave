//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIRefreshControl, UIScrollView;

@protocol _UIRefreshControlHosting <NSObject>
@property(readonly) __weak UIScrollView *scrollView;
@property(readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding;
- (void)refreshControl:(UIRefreshControl *)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (void)incrementInsetHeight:(double)arg1;
- (void)decrementInsetHeight:(double)arg1;
@end
