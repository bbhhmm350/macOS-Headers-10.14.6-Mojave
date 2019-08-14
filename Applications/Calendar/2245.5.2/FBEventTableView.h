//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVerticalSyncScrollingTableView.h"

@class CalFreeBusyPanel, NSEvent;

@interface FBEventTableView : FBVerticalSyncScrollingTableView
{
    NSEvent *_autoscrollEvent;
    BOOL _isDragging;
    double _draggingOffset;
    struct CGRect _eventRect;
    CalFreeBusyPanel *_fbPanel;
}

@property(retain) CalFreeBusyPanel *fbPanel; // @synthesize fbPanel=_fbPanel;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)axHelp;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawEventBox:(struct CGRect)arg1;
- (void)drawAvailableBox:(struct CGRect)arg1;
- (id)borderColorForColor:(id)arg1 forAppearance:(id)arg2;
- (void)drawEventStyleBox:(struct CGRect)arg1 alpha:(double)arg2 dottedBorder:(BOOL)arg3;
- (BOOL)isOpaque;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_cancelDrag;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)_timeRangeForDraggedMouseLocation:(struct CGPoint)arg1;
- (id)_dateForX:(double)arg1;
- (struct CGRect)rectForTimeRangeStarting:(id)arg1 ending:(id)arg2;

@end
