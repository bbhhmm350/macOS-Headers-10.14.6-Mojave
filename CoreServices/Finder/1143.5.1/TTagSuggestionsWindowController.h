//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class NSString, TTaggingTokenField;

@interface TTagSuggestionsWindowController : NSWindowController <NSWindowDelegate>
{
    TTaggingTokenField *_taggingTokenField;
    struct CGRect _tokenFieldFrameInWindowCache;
    struct TRef<__CFMachPort *, TRetainReleasePolicy<CFMachPortRef>> _localEventMonitor;
    struct TRef<__CFRunLoopSource *, TRetainReleasePolicy<CFRunLoopSourceRef>> _localEventSource;
    _Bool _hideSuggestionsWindowOnMouseUp;
    _Bool _isShowingSuggestionsWindow;
    struct TNSRef<NSLayoutConstraint, void> _widthConstraint;
    struct TNotificationCenterObserver _tfWillMoveToWindowObserver;
    struct TNotificationCenterObserver _tfDidMoveToWindowObserver;
    struct TNotificationCenterObserver _tfFrameDidChangeObserver;
    struct TNotificationCenterObserver _tfSuperScrollViewDidScrollObserver;
    struct TNotificationCenterObserver _tfWindowWillZoomClosedObserver;
    struct TNotificationCenterObserver _tfWindowWillCloseObserver;
    struct TNotificationCenterObserver _tfWindowDidResizeObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_postAccessibilityTaggingWindowCreatedNotification;
- (void)showSuggestionsWindow;
- (void)hideSuggestionsWindowWithCommit:(_Bool)arg1;
- (void)updateWindowFrame;
- (void)windowWillClose:(id)arg1;
- (void)superScrollViewDidScroll;
- (void)tokenFieldWindowFrameChanged:(id)arg1;
- (void)tokenFieldWindowWillClose;
- (void)tokenFieldFrameMayHaveChanged;
- (void)tokenFieldDidMoveToWindow;
- (void)tokenFieldWillMoveToWindow:(id)arg1;
- (void)stopObservingTokenFieldWindow;
- (void)startObservingTokenFieldWindow:(id)arg1;
- (id)superScrollView;
- (void)setTaggingTokenField:(id)arg1;
- (void)dealloc;
- (id)initWithSuggestionsViewController:(id)arg1 taggingTokenField:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TTaggingTokenField *taggingTokenField; // @dynamic taggingTokenField;

@end
