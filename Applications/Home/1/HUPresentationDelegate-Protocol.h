//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NAFuture, UIViewController;
@protocol HUPresentationDelegateHost;

@protocol HUPresentationDelegate <NSObject>
- (NAFuture *)finishPresentation:(UIViewController<HUPresentationDelegateHost> *)arg1 animated:(BOOL)arg2;
@end

