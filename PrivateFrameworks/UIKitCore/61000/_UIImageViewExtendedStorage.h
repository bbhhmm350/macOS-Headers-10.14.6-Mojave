//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class CIContext, NSArray, NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _UIImageViewExtendedStorage : NSObject <CAAnimationDelegate>
{
    UIImageView *_imageView;
    BOOL _highlighted;
    UIImage *_image;
    UIImage *_highlightedImage;
    NSArray *_animationImages;
    NSArray *_highlightedAnimationImages;
    double _animationDuration;
    long long _animationRepeatCount;
    int _drawMode;
    long long _defaultRenderingMode;
    BOOL _masksTemplateImages;
    unsigned long long _templateImageRenderingEffects;
    UIImage *_displayedImage;
    UIImage *_displayedHighlightedImage;
    CIContext *_CIContext;
    BOOL _adjustsImageSizeForAccessibilityContentSizeCategory;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initForImageView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

