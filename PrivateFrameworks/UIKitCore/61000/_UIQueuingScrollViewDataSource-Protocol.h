//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, _UIQueuingScrollView;

@protocol _UIQueuingScrollViewDataSource <NSObject>
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didFlushView:(UIView *)arg2 animated:(BOOL)arg3;
- (id)queuingScrollView:(_UIQueuingScrollView *)arg1 viewAfterView:(UIView *)arg2;
- (id)queuingScrollView:(_UIQueuingScrollView *)arg1 viewBeforeView:(UIView *)arg2;
@end
