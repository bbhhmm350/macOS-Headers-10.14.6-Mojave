//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class UIPercentDrivenInteractiveTransition, UIWindow;

@protocol UIViewControllerAnimatedTransitioningEx <UIViewControllerAnimatedTransitioning>
- (void)setOperation:(long long)arg1;
- (long long)operation;
- (void)setInteractionAborted:(BOOL)arg1;
- (BOOL)interactionAborted;
- (void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1;
- (UIPercentDrivenInteractiveTransition *)interactionController;

@optional
- (UIWindow *)window;
@end

