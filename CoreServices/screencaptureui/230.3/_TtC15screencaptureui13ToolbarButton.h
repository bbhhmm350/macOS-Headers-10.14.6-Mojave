//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSString;
@protocol _TtP15screencaptureui21ToolbarButtonDelegate_;

@interface _TtC15screencaptureui13ToolbarButton : NSButton
{
    // Error parsing type: , name: highlightCornerRadius
    // Error parsing type: , name: trailingRoundedCorners
    // Error parsing type: , name: leadingRoundedCorners
    // Error parsing type: , name: labelKey
    // Error parsing type: , name: iconButtonHighlight
    // Error parsing type: , name: tracksMouse
    // Error parsing type: , name: titleMargin
    // Error parsing type: , name: toolbarDelegate
    // Error parsing type: , name: _isDark
    // Error parsing type: , name: _highlightLayer
    // Error parsing type: , name: _trackingArea
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityTitle;
- (void)layout;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic, readonly) BOOL allowsVibrancy;
@property(nonatomic) __weak id <_TtP15screencaptureui21ToolbarButtonDelegate_> toolbarDelegate; // @synthesize toolbarDelegate;
@property(nonatomic) double titleMargin; // @synthesize titleMargin;
@property(nonatomic) BOOL tracksMouse; // @synthesize tracksMouse;
@property(nonatomic) BOOL iconButtonHighlight; // @synthesize iconButtonHighlight;
@property(nonatomic, copy) NSString *labelKey; // @synthesize labelKey;
@property(nonatomic) BOOL leadingRoundedCorners; // @synthesize leadingRoundedCorners;
@property(nonatomic) BOOL trailingRoundedCorners; // @synthesize trailingRoundedCorners;
@property(nonatomic) double highlightCornerRadius; // @synthesize highlightCornerRadius;

@end
