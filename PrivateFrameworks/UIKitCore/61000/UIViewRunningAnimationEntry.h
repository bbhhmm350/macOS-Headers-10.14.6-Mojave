//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewAnimationState;
@protocol OS_dispatch_queue, UIIntervalAnimating, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface UIViewRunningAnimationEntry : NSObject
{
    id <UIIntervalAnimating> _animation;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    CDUnknownBlockType _completionCallback;
    BOOL _invalidated;
    BOOL _shouldNotRemovePresentationModifier;
    BOOL _running;
    UIViewAnimationState *_animationState;
    id <UIViewAnimationComposing> _composer;
}

@property(retain, nonatomic) id <UIViewAnimationComposing> composer; // @synthesize composer=_composer;
@property(nonatomic) __weak UIViewAnimationState *animationState; // @synthesize animationState=_animationState;
@property(nonatomic) BOOL running; // @synthesize running=_running;
@property(nonatomic) BOOL shouldNotRemovePresentationModifier; // @synthesize shouldNotRemovePresentationModifier=_shouldNotRemovePresentationModifier;
- (void).cxx_destruct;
- (void)performWithoutLock:(CDUnknownBlockType)arg1;
- (void)performWithLock:(CDUnknownBlockType)arg1;
- (void)setCompletionCallback:(CDUnknownBlockType)arg1;
- (void)performCompletionCallbackFinished:(BOOL)arg1;
@property(nonatomic) BOOL invalidated;
- (id)initWithAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2 composer:(id)arg3;

@end
