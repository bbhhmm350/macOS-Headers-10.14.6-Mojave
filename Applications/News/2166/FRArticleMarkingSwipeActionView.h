//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor;
@protocol FRArticleMarkingSwipeActionViewDelegate;

@interface FRArticleMarkingSwipeActionView : UIView
{
    double _openThreshold;
    double _openThresholdTwoColumnShortSwipe;
    double _confirmationThreshold;
    BOOL _hasSmallButtons;
    BOOL _didTriggerSwipeAction;
    BOOL _pullThroughEnabled;
    BOOL _shouldRebuildButtons;
    id <FRArticleMarkingSwipeActionViewDelegate> _delegate;
    unsigned long long _cellEdge;
    unsigned long long _swipedCellType;
    double _currentOffset;
    NSMutableArray *_buttons;
    unsigned long long _state;
    unsigned long long _direction;
    NSArray *_swipeActionItems;
    UIView *_backgroundView;
    struct CGSize _screenSizeWhenSwiping;
}

@property(nonatomic) struct CGSize screenSizeWhenSwiping; // @synthesize screenSizeWhenSwiping=_screenSizeWhenSwiping;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL shouldRebuildButtons; // @synthesize shouldRebuildButtons=_shouldRebuildButtons;
@property(nonatomic) BOOL pullThroughEnabled; // @synthesize pullThroughEnabled=_pullThroughEnabled;
@property(nonatomic) BOOL didTriggerSwipeAction; // @synthesize didTriggerSwipeAction=_didTriggerSwipeAction;
@property(retain, nonatomic) NSArray *swipeActionItems; // @synthesize swipeActionItems=_swipeActionItems;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) BOOL hasSmallButtons; // @synthesize hasSmallButtons=_hasSmallButtons;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) double currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) unsigned long long swipedCellType; // @synthesize swipedCellType=_swipedCellType;
@property(readonly, nonatomic) unsigned long long cellEdge; // @synthesize cellEdge=_cellEdge;
@property(nonatomic) __weak id <FRArticleMarkingSwipeActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_actionColorForSwipeAction:(unsigned long long)arg1 highlighted:(BOOL)arg2;
- (unsigned long long)_actionAtIndex:(unsigned long long)arg1;
- (void)_tappedButton:(id)arg1;
- (BOOL)_offsetMeetsConfirmationThreshold:(double)arg1;
- (unsigned long long)_nextStateForPullView;
- (void)moveToOffset:(double)arg1 animated:(BOOL)arg2 usingSpringWithStiffness:(double)arg3 initialVelocity:(double)arg4;
- (void)moveToOriginWithOffset:(double)arg1 animated:(BOOL)arg2 usingSpringWithStiffness:(double)arg3 initialVelocity:(double)arg4;
- (void)animateToOffset:(double)arg1 animated:(BOOL)arg2 usingSpringWithStiffness:(double)arg3 initialVelocity:(double)arg4 withQuickSwipe:(BOOL)arg5;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)_performFadeTransitionForButtonLayer:(id)arg1 opacity:(double)arg2 delay:(double)arg3;
- (void)_performScaleTransitionForButtonLayer:(id)arg1 byScale:(double)arg2 delay:(double)arg3;
- (void)configureWithSwipeActionItems:(id)arg1 cellType:(unsigned long long)arg2;
- (void)resetView;
- (void)layoutSubviews;
- (id)titleFont;
- (unsigned long long)_buttonLayoutForHeight:(double)arg1;
- (void)_rebuildButtonsWithButtonFrame;
- (void)setupButtonsForAllCellsWithAnchorPoint:(struct CGPoint)arg1 contentAlignment:(long long)arg2;
- (void)placeButtonForShortSwipe:(id)arg1 withButtonIndex:(long long)arg2;
- (double)paddingBetweenButtons;
- (void)placeButtonForNormalSwipe:(id)arg1 withButtonIndex:(long long)arg2;
- (void)setupBackgroundLayerWithButtonFrame:(struct CGRect)arg1 buttonWidth:(double)arg2 anchorPoint:(struct CGPoint)arg3;
- (void)setupButtonsForSmallCellsWithAnchorPoint:(struct CGPoint)arg1 contentAlignment:(long long)arg2;
- (unsigned long long)numberOfSpaces;
- (unsigned long long)swipeActionCount;
- (double)_directionalMultiplier;
- (double)swipeButtonWidth;
@property(readonly, nonatomic) double backtrackThreshold;
@property(readonly, nonatomic) double confirmationThreshold;
@property(readonly, nonatomic) double openThresholdTwoColumnShortSwipe;
@property(readonly, nonatomic) double openThreshold;
@property(readonly, nonatomic) UIColor *primaryActionColor;
@property(readonly, nonatomic) BOOL hasActions;
@property(readonly, nonatomic) BOOL primaryActionIsDestructive;
@property(readonly, nonatomic) unsigned long long primarySwipeAction;
- (id)initWithCellEdge:(unsigned long long)arg1;

@end
