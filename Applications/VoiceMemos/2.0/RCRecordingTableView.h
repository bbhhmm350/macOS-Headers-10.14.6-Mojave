//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class RCEmptyLibrarySplashView;

@interface RCRecordingTableView : UITableView
{
    BOOL _showsSplashView;
    RCEmptyLibrarySplashView *_emptyLibrarySplashView;
}

@property(retain, nonatomic) RCEmptyLibrarySplashView *emptyLibrarySplashView; // @synthesize emptyLibrarySplashView=_emptyLibrarySplashView;
@property(nonatomic) BOOL showsSplashView; // @synthesize showsSplashView=_showsSplashView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformEscape;
- (BOOL)selectedCellIsEditingTitle;
- (id)keyCommands;
- (BOOL)canBecomeFirstResponder;
- (void)endUpdates;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)setEditing:(BOOL)arg1;

@end

