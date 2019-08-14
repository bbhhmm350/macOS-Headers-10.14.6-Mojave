//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIFocusEnvironmentPrivate-Protocol.h>

@class UIFocusAnimationCoordinator, UIFocusUpdateContext;
@protocol UIFocusEnvironment, _UIFocusRegionContainer;

@protocol _UIFocusEnvironmentInternal <_UIFocusEnvironmentPrivate>

@optional
@property(readonly, nonatomic, getter=_focusMapContainer) __weak id <_UIFocusRegionContainer> focusMapContainer;
- (void)_didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (void)_willUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (BOOL)_shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (id <UIFocusEnvironment>)_overridingPreferredFocusEnvironment;
@end
