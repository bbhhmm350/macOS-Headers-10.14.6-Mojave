//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface FI_TContainerLayoutManager : NSObject
{
    struct TNSRef<NSLayoutGuide, void> _searchSliceLayoutGuide;
    struct TNSRef<NSLayoutGuide, void> _bannerLayoutGuide;
    struct TNSRef<NSLayoutGuide, void> _pathBarLayoutGuide;
    struct TNSRef<NSLayoutGuide, void> _bottomStatusBarLayoutGuide;
    struct TNSRef<NSLayoutGuide, void> _browserScrollViewVerticalContentInsetsLayoutGuide;
    struct TNSRef<NSLayoutGuide, void> _sidebarScrollViewVerticalContentInsetsLayoutGuide;
    struct NSEdgeInsets _browserViewContentInsets;
    struct NSEdgeInsets _sidebarViewContentInsets;
    NSView *_contentView;
    _Bool _opaqueToolbar;
    struct TKeyValueObserver _sidebarInsetsDidChangeObserver;
    struct TKeyValueObserver _browserInsetsDidChangeObserver;
    struct TNotificationCenterObserver _windowDidEndLiveResizeObserver;
}

@property(nonatomic) struct NSEdgeInsets sidebarViewContentInsets; // @synthesize sidebarViewContentInsets=_sidebarViewContentInsets;
@property(nonatomic) struct NSEdgeInsets browserViewContentInsets; // @synthesize browserViewContentInsets=_browserViewContentInsets;
@property(nonatomic) _Bool opaqueToolbar; // @synthesize opaqueToolbar=_opaqueToolbar;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)sidebarScrollViewVerticalContentInsetsLayoutGuide;
- (id)browserScrollViewVerticalContentInsetsLayoutGuide;
- (id)bottomStatusBarLayoutGuide;
- (id)pathBarLayoutGuide;
- (id)bannerLayoutGuide;
- (id)searchSliceLayoutGuide;
- (struct NSEdgeInsets)contentInsetsWithInnerRect:(struct CGRect)arg1;
- (id)newLayoutGuideWithTopAnchor:(id)arg1 bottomAnchor:(id)arg2 identifier:(id)arg3 outConstraints:(id)arg4;
- (void)dealloc;
- (void)updateBrowserViewContentInsets;
- (void)updateSidebarViewContentInsets;
- (id)initWithContentView:(id)arg1 toolbarBottomAnchor:(id)arg2;

@end

