//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, UIWindow;

@protocol _UIVisualEffectViewSubviewMonitoring <NSObject>
- (void)_view:(UIView *)arg1 willLoseDescendent:(UIView *)arg2;
- (void)_view:(UIView *)arg1 willGainDescendent:(UIView *)arg2;
- (void)_view:(UIView *)arg1 willMoveToWindow:(UIWindow *)arg2;
@end
