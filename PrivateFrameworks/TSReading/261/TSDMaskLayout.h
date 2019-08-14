//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSDLayout.h>

@class TSDImageLayout, TSDInfoGeometry, TSDPathSource;

@interface TSDMaskLayout : TSDLayout
{
    struct {
        unsigned int path:1;
        unsigned int tightPathBounds:1;
    } mMaskInvalidFlags;
    struct CGPath *mCachedPath;
    struct CGPath *mCachedPathNoScale;
    struct CGRect mCachedTightPathBounds;
    struct CGRect mCachedTightPathBoundsNoScale;
    double mPathScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    TSDPathSource *mPathSourceWithProvidedSize;
    BOOL mScalingInMaskMode;
}

@property(nonatomic) double pathScale; // @synthesize pathScale=mPathScale;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (void)p_createDynamicCopies;
- (struct CGRect)p_cachedTightPathBoundsNoScale;
- (struct CGRect)p_cachedTightPathBounds;
- (void)p_calculateTightPathBoundsIfNecessary;
- (struct CGPath *)p_cachedPathNoScale;
- (struct CGPath *)p_cachedPath;
- (void)p_calculateCachedPathIfNecessary;
- (id)infoGeometry;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (unsigned long long)numberOfControlKnobs;
@property(readonly, nonatomic) BOOL hasSmartPath;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;
- (void)dynamicMovePathKnobDidBegin;
- (id)pathSource;
- (struct CGRect)pathBounds;
- (struct CGPath *)path;
- (id)maskInfo;
- (BOOL)shouldDisplayGuides;
- (void)maskModeScaleDidEnd;
- (void)maskModeScaleDidBegin;
- (void)dragBy:(struct CGPoint)arg1;
@property(readonly, nonatomic) TSDImageLayout *imageLayout;
- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;
- (void)endDynamicOperation;
- (void)takeScaledMaskGeometry:(id)arg1;
- (void)resizeWithTransform:(struct CGAffineTransform)arg1 asChild:(BOOL)arg2;
- (void)beginDynamicOperation;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (BOOL)shouldSnapWhileResizing;
- (struct CGAffineTransform)originalTransformForProvidingGuides;
- (struct CGRect)alignmentFrame;
- (void)invalidatePath;
- (void)invalidate;
- (void)processChangedProperty:(int)arg1;
- (struct CGAffineTransform)affineTransformForTightPathBounds;
- (id)computeLayoutGeometry;
- (id)dependentLayouts;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end
