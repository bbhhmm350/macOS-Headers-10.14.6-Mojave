//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FRHudView, UIView;

@interface FRHUDController : NSObject
{
    UIView *_presentationView;
    CDUnknownBlockType _dismissAnimationBlock;
    FRHudView *_hudView;
}

+ (id)sharedHUDController;
+ (void)registerSharedHUDControllerWithPresentationView:(id)arg1;
@property(retain, nonatomic) FRHudView *hudView; // @synthesize hudView=_hudView;
@property(copy, nonatomic) CDUnknownBlockType dismissAnimationBlock; // @synthesize dismissAnimationBlock=_dismissAnimationBlock;
@property(retain, nonatomic) UIView *presentationView; // @synthesize presentationView=_presentationView;
- (void).cxx_destruct;
- (void)_presentHUDView:(id)arg1 autoDismiss:(BOOL)arg2 dismissAnimationBlock:(CDUnknownBlockType)arg3;
- (void)presentHUDView:(id)arg1 dismissAnimationBlock:(CDUnknownBlockType)arg2;
- (void)presentHUDView:(id)arg1 autoDismiss:(BOOL)arg2;
- (void)_dismissHudViewAnimated:(id)arg1;
- (void)dismissHudViewAnimated:(BOOL)arg1;
- (void)dealloc;

@end
