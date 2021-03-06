//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UINavigationItem;
@protocol _UINavigationBarTitleViewDataSource;

@protocol _UINavigationBarAugmentedTitleView <NSObject>
@property(readonly, nonatomic) long long _preferredAlignment;
@property(readonly, nonatomic) BOOL _hideNavigationBarTrailingBarButtons;
@property(readonly, nonatomic) BOOL _hideNavigationBarStandardTitle;
@property(readonly, nonatomic) BOOL _hideNavigationBarLeadingBarButtons;
@property(readonly, nonatomic) BOOL _hideNavigationBarBackButton;
@property(readonly, nonatomic) double _navigationBarBackButtonMaximumWidth;
@property(readonly, nonatomic) double _navigationBarContentHeight;
@property(readonly, nonatomic) BOOL _underlayNavigationBarContent;
- (void)_transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)_performTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)_transitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (BOOL)_wantsTwoPartTransition;
- (void)_contentDidChange;
- (long long)_preferredContentSizeForSize:(long long)arg1;
- (void)_setDataSource:(id <_UINavigationBarTitleViewDataSource>)arg1 navigationItem:(UINavigationItem *)arg2 titleLocation:(long long)arg3;
@end

