//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mondrian/MOMediaViewDefaultCell.h>

@class IPXBadgesView;

@interface IPXImportAssetCell : MOMediaViewDefaultCell
{
    IPXBadgesView *_badgesView;
}

+ (struct CGColor *)modalSelectionDimmingColor;
@property(readonly) IPXBadgesView *badgesView; // @synthesize badgesView=_badgesView;
- (void).cxx_destruct;
- (id)accessibilityValueDescription;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (struct CGRect)selectionBorderFrame;
- (BOOL)wantsTransparentThumbnailBackground;
- (void)setThumbnailImage:(id)arg1 usingNearestInterpolation:(BOOL)arg2 animated:(BOOL)arg3;
- (void)updateWithMediaItem:(id)arg1;
- (void)prepareForRecycling;
- (void)layoutSubviews;
- (id)newModalSelectionIndicatorView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
