//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBannerView;

@interface NSNavBannerView : NSView
{
    NSBannerView *_bannerView;
    long long _bannerType;
}

- (id)_preferredAppearance;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (struct CGSize)intrinsicContentSize;
@property long long bannerType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_commonInit;
- (unsigned long long)_currentBannerStyle;

@end
