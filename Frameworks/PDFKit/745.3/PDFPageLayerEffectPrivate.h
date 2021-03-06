//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, LoupeRenderRequest, NSMutableDictionary, NSUUID, PDFAnnotation, PDFSelection, PDFTimer;
@protocol PDFPageLayerInterface;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffectPrivate : NSObject
{
    id <PDFPageLayerInterface> pageLayer;
    NSUUID *uuid;
    struct CGRect pageFrame;
    _Bool shouldRotateContent;
    PDFAnnotation *annotation;
    NSMutableDictionary *markupEffectLayers;
    PDFSelection *selection;
    NSMutableDictionary *selectionEffectLayers;
    _Bool showTextSelectionHandle;
    struct {
        _Bool isOnFirstPage;
        _Bool isOnLastPage;
        struct CGRect firstPageRect;
        struct CGRect lastPageRect;
    } pageInfo;
    CALayer *rootSelectionLayer;
    CALayer *selectionStartHandle;
    CALayer *selectionEndHandle;
    PDFTimer *zoomTimer;
    CALayer *textMagnifierLayer;
    struct CGImage *magnifierImageMask;
    struct CGSize magnifierSize;
    CALayer *lollipopMagnifierLayer;
    struct CGImage *lollipopImageMask;
    struct CGSize lollipopSize;
    LoupeRenderRequest *loupeRenderRequest;
    struct os_unfair_lock_s loupeRenderRequestLock;
}

- (void).cxx_destruct;

@end

