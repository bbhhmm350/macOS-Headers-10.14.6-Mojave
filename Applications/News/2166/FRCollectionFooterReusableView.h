//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class FRFeedCollectionViewLayoutSectionDescriptorForYou, NSString, UIColor, UIImage, UIImageView, UILabel, UIView;
@protocol FRCollectionFooterDelegate;

@interface FRCollectionFooterReusableView : UICollectionReusableView <UIViewControllerPreviewingDelegate>
{
    BOOL _isTouching;
    id <FRCollectionFooterDelegate> _delegate;
    NSString *_sectionID;
    FRFeedCollectionViewLayoutSectionDescriptorForYou *_sectionDescriptor;
    UILabel *_moreStoriesAboutLabel;
    UILabel *_sectionTitleLabel;
    UIImageView *_arrowImageView;
    UIColor *_color;
    UIColor *_selectedColor;
    UIColor *_moreColor;
    UIColor *_moreSelectedColor;
    UIImage *_arrowImage;
    UIImage *_selectedArrowImage;
    UIView *_topLine;
}

@property(nonatomic) BOOL isTouching; // @synthesize isTouching=_isTouching;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImage *selectedArrowImage; // @synthesize selectedArrowImage=_selectedArrowImage;
@property(retain, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UIColor *moreSelectedColor; // @synthesize moreSelectedColor=_moreSelectedColor;
@property(retain, nonatomic) UIColor *moreColor; // @synthesize moreColor=_moreColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *sectionTitleLabel; // @synthesize sectionTitleLabel=_sectionTitleLabel;
@property(retain, nonatomic) UILabel *moreStoriesAboutLabel; // @synthesize moreStoriesAboutLabel=_moreStoriesAboutLabel;
@property(retain, nonatomic) FRFeedCollectionViewLayoutSectionDescriptorForYou *sectionDescriptor; // @synthesize sectionDescriptor=_sectionDescriptor;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) __weak id <FRCollectionFooterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)populateWithSectionDescriptor:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
