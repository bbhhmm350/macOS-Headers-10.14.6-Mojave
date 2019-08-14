//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUGridCellProtocol-Protocol.h>

@class HFItem, HUGridCellBackgroundView, HUGridCellLayoutOptions, NSString, UIView, UIVisualEffect, UIVisualEffectView;
@protocol HUResizableCellDelegate;

@interface HUGridCell : UICollectionViewCell <HUGridCellProtocol>
{
    BOOL _cellContentsHidden;
    BOOL _rearranging;
    HUGridCellLayoutOptions *_layoutOptions;
    long long _primaryState;
    UIVisualEffect *_contentEffect;
    UIVisualEffect *_secondaryContentEffect;
    double _secondaryContentDimmingFactor;
    HFItem *_item;
    HUGridCellBackgroundView *_gridBackgroundView;
    UIVisualEffectView *_gridForegroundView;
}

+ (id)_jitterTransformAnimationWithAspectRatio:(double)arg1;
+ (id)_jitterPositionAnimation;
+ (Class)layoutOptionsClass;
@property(retain, nonatomic) UIVisualEffectView *gridForegroundView; // @synthesize gridForegroundView=_gridForegroundView;
@property(retain, nonatomic) HUGridCellBackgroundView *gridBackgroundView; // @synthesize gridBackgroundView=_gridBackgroundView;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(nonatomic) double secondaryContentDimmingFactor; // @synthesize secondaryContentDimmingFactor=_secondaryContentDimmingFactor;
@property(retain, nonatomic) UIVisualEffect *secondaryContentEffect; // @synthesize secondaryContentEffect=_secondaryContentEffect;
@property(retain, nonatomic) UIVisualEffect *contentEffect; // @synthesize contentEffect=_contentEffect;
@property(nonatomic) long long primaryState; // @synthesize primaryState=_primaryState;
@property(nonatomic, getter=isRearranging) BOOL rearranging; // @synthesize rearranging=_rearranging;
@property(retain, nonatomic) HUGridCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden; // @synthesize cellContentsHidden=_cellContentsHidden;
- (void).cxx_destruct;
- (void)_updateTintColorSettingsForSubviewsOfView:(id)arg1 desiredDisplayStyle:(unsigned long long)arg2;
- (void)updateUIWithAnimation:(BOOL)arg1;
@property(readonly, nonatomic) unsigned long long iconDisplayStyle;
- (void)_updateForegroundStyle;
- (void)layoutOptionsDidChange;
- (void)setHighlighted:(BOOL)arg1;
- (void)displayStyleDidChange;
@property(readonly, nonatomic) UIView *gridForegroundContentView;
@property(readonly, nonatomic) unsigned long long backgroundState;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupCommonCellAppearance;
- (void)applyLayoutAttributes:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
