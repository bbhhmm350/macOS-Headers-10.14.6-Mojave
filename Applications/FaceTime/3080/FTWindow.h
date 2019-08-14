//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSColor, NSEvent, NSResponder;
@protocol NSWindowDelegate;

@interface FTWindow : NSWindow
{
    BOOL _beingDragged;
    BOOL _delegateWindowWillSetFrame;
    BOOL _overridingAnimationTime;
    NSColor *_fullscreenColorOverride;
    NSResponder *_keyForwardingResponder;
    double _overridingAnimationTimeDuration;
    id <NSWindowDelegate> _previousDelegate;
    unsigned long long _priorToClearFullscreenStyleMask;
    NSEvent *_forwardedEvent;
    struct CGRect _priorToClearFullscreenFrame;
}

@property(retain, nonatomic) NSEvent *forwardedEvent; // @synthesize forwardedEvent=_forwardedEvent;
@property(nonatomic) unsigned long long priorToClearFullscreenStyleMask; // @synthesize priorToClearFullscreenStyleMask=_priorToClearFullscreenStyleMask;
@property(nonatomic) struct CGRect priorToClearFullscreenFrame; // @synthesize priorToClearFullscreenFrame=_priorToClearFullscreenFrame;
@property(nonatomic) id <NSWindowDelegate> previousDelegate; // @synthesize previousDelegate=_previousDelegate;
@property(nonatomic) double overridingAnimationTimeDuration; // @synthesize overridingAnimationTimeDuration=_overridingAnimationTimeDuration;
@property(nonatomic) BOOL overridingAnimationTime; // @synthesize overridingAnimationTime=_overridingAnimationTime;
@property(nonatomic) BOOL delegateWindowWillSetFrame; // @synthesize delegateWindowWillSetFrame=_delegateWindowWillSetFrame;
@property(nonatomic) __weak NSResponder *keyForwardingResponder; // @synthesize keyForwardingResponder=_keyForwardingResponder;
@property(retain, nonatomic) NSColor *fullscreenColorOverride; // @synthesize fullscreenColorOverride=_fullscreenColorOverride;
@property(readonly, nonatomic) BOOL beingDragged; // @synthesize beingDragged=_beingDragged;
- (void).cxx_destruct;
- (struct CGRect)forceContentViewOriginToZero;
- (void)endClearFullscreenModeWithFrame:(struct CGRect)arg1;
- (void)endClearFullscreenMode;
- (void)beginClearFullscreenMode;
- (BOOL)isAboveLockScreen;
- (void)setTitlebarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)titleBarHidden;
- (double)titleBarHeight;
- (void)overrideResizeTime:(BOOL)arg1 withDuration:(double)arg2;
- (void)keyDown:(id)arg1;
- (double)animationResizeTime:(struct CGRect)arg1;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)setFrameIgnoringDelegate:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)_commonInit;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 screen:(id)arg5;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)initWithCoder:(id)arg1;

@end
