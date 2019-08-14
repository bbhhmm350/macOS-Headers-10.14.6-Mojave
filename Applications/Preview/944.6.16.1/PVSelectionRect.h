//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, NSView;

@interface PVSelectionRect : NSObject
{
    struct CGRect _bounds;
    NSView *_view;
    NSView *_overlayView;
    BOOL _doMarchingAnts;
    BOOL _showHandles;
    double _marchingAntsPhase;
    NSTimer *_marchingAntsTimer;
    unsigned long long _resizeMask;
    double _ratio;
    struct CGPoint _resizeCenter;
}

+ (id)cursorForHandle:(unsigned long long)arg1;
@property(readonly) __weak NSView *view; // @synthesize view=_view;
@property double ratio; // @synthesize ratio=_ratio;
@property unsigned long long resizeMask; // @synthesize resizeMask=_resizeMask;
- (void).cxx_destruct;
- (void)marchingAntsTimerFired:(id)arg1;
- (void)drawHandleInView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)isHandleAtPoint:(struct CGPoint)arg1 underPoint:(struct CGPoint)arg2;
- (void)removeOverlayView;
- (void)installOverlayView;
- (void)clear;
- (id)pdfView;
- (void)drawInView:(id)arg1;
- (void)translateByX:(double)arg1 andY:(double)arg2;
- (unsigned long long)resizeByMovingHandle:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 toPoint:(struct CGPoint)arg3 inView:(id)arg4;
- (void)setupForResizeTracking:(id)arg1;
- (unsigned long long)handleUnderPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGRect)boundsIncludingHandlesInView:(id)arg1;
- (struct CGRect)boundsInView:(id)arg1;
@property BOOL marchingAnts;
@property BOOL showHandles;
@property(readonly) BOOL isEmpty;
- (void)setNeedsDisplay:(BOOL)arg1;
@property struct CGRect bounds;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end
