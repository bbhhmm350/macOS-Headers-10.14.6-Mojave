//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRAppActivityObserving-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FRScrollQueueManager, NSMapTable, NSString, Protocol, UIScrollView;
@protocol FRReusableCellVisibilityMonitorDelegate, UIScrollViewDelegate;

@interface FRReusableCellVisibilityMonitor : NSObject <FRAppActivityObserving, UIScrollViewDelegate>
{
    BOOL _hostViewIsVisible;
    id <FRReusableCellVisibilityMonitorDelegate> _monitorDelegate;
    id <UIScrollViewDelegate> _scrollViewProxyDelegate;
    FRScrollQueueManager *_scrollQueueManager;
    NSMapTable *_cellToVisibility;
    UIScrollView *_scrollView;
    Protocol *_delegateProtocol;
}

+ (id)addOperationQueue;
@property(retain, nonatomic) Protocol *delegateProtocol; // @synthesize delegateProtocol=_delegateProtocol;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMapTable *cellToVisibility; // @synthesize cellToVisibility=_cellToVisibility;
@property(nonatomic) __weak FRScrollQueueManager *scrollQueueManager; // @synthesize scrollQueueManager=_scrollQueueManager;
@property(nonatomic, getter=isHostViewVisible) BOOL hostViewIsVisible; // @synthesize hostViewIsVisible=_hostViewIsVisible;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewProxyDelegate; // @synthesize scrollViewProxyDelegate=_scrollViewProxyDelegate;
@property(nonatomic) __weak id <FRReusableCellVisibilityMonitorDelegate> monitorDelegate; // @synthesize monitorDelegate=_monitorDelegate;
- (void).cxx_destruct;
- (void)activityObservingApplicationDidEnterBackground;
- (void)activityObservingApplicationDidBecomeActive;
- (void)_recordInvisibleCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_recordVisibleCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updateVisibilityForCell:(id)arg1 forItemAtIndexPath:(id)arg2 willDisplayCell:(_Bool)arg3;
- (void)_updateVisibilityForCell:(id)arg1 forItemAtIndexPath:(id)arg2 resigning:(BOOL)arg3;
- (BOOL)_isCellVisible:(id)arg1;
- (void)_updateCellVisibility:(BOOL)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)_selectorCorrespondsToDelegateProtocol:(SEL)arg1;
- (id)cellAtIndexPath:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)visibleCells;
- (id)reusableCellHostView;
- (BOOL)isContentRectVisible:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 delegateProtocol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
