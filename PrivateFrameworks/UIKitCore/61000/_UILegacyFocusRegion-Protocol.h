//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIFocusSystem, UIView;
@protocol UICoordinateSpace;

@protocol _UILegacyFocusRegion <NSObject>
- (UIView *)_focusDebugOverlayParentView;
- (NSArray *)_focusRegionGuides;
- (UIView *)_focusRegionView;
- (BOOL)_isTransparentFocusRegion;
- (UIView *)_fulfillPromisedFocusRegion;
- (BOOL)_isPromiseFocusRegion;
- (NSArray *)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (BOOL)canBecomeFocused;
- (BOOL)_legacy_isEligibleForFocusInteraction;
- (struct CGRect)_focusRegionFrame;
- (UIFocusSystem *)_focusRegionFocusSystem;
@end
