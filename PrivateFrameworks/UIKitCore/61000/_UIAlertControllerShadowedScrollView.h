//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIScrollView.h>

@class _UIAlertControllerGradientView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShadowedScrollView : UIScrollView
{
    _UIAlertControllerGradientView *_shadowView;
    BOOL _shouldPinToBottomOnResize;
}

@property(nonatomic) BOOL shouldPinToBottomOnResize; // @synthesize shouldPinToBottomOnResize=_shouldPinToBottomOnResize;
- (void).cxx_destruct;
- (void)_updateScrollabilityAndShadow;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)_boundsForPinningToBottomWithNewBounds:(struct CGRect)arg1;

@end

