//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIKBCacheableView-Protocol.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface UIKBThemedView : UIView <UIKBCacheableView>
{
    CALayer *_rightBorder;
    CALayer *_leftBorder;
    CALayer *_background;
    BOOL _lightKeyboard;
    BOOL _active;
    BOOL _usePersistentCaching;
    BOOL _showsTopBorder;
    BOOL _showsBottomBorder;
    BOOL _showsLeftBorder;
    BOOL _showsRightBorder;
    int _style;
    struct UIEdgeInsets _cacheInsets;
}

@property(nonatomic) BOOL showsRightBorder; // @synthesize showsRightBorder=_showsRightBorder;
@property(nonatomic) BOOL showsLeftBorder; // @synthesize showsLeftBorder=_showsLeftBorder;
@property(nonatomic) BOOL showsBottomBorder; // @synthesize showsBottomBorder=_showsBottomBorder;
@property(nonatomic) BOOL showsTopBorder; // @synthesize showsTopBorder=_showsTopBorder;
@property(nonatomic) BOOL usePersistentCaching; // @synthesize usePersistentCaching=_usePersistentCaching;
@property(nonatomic) struct UIEdgeInsets cacheInsets; // @synthesize cacheInsets=_cacheInsets;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(readonly, nonatomic) BOOL keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) BOOL cacheDeferable;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)traitsForCurrentStyle;
- (id)borderFilterTypeForCurrentStyle;
- (void)displayLayer:(id)arg1;
- (void)_populateLayer:(id)arg1 withContents:(id)arg2;
- (void)layoutSubviews;
- (id)cacheKeysForRenderFlags:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)_setRenderConfig:(id)arg1;
- (void)didMoveToWindow;
- (BOOL)_canDrawContent;
- (BOOL)_hasInsets;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) long long cacheDeferPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
