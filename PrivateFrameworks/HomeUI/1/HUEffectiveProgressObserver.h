//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NACancelable;

@interface HUEffectiveProgressObserver : NSObject
{
    CDUnknownBlockType _observerBlock;
    double _targetEffectiveProgress;
    id <NACancelable> _timerCancellationToken;
}

@property(retain, nonatomic) id <NACancelable> timerCancellationToken; // @synthesize timerCancellationToken=_timerCancellationToken;
@property(readonly, nonatomic) double targetEffectiveProgress; // @synthesize targetEffectiveProgress=_targetEffectiveProgress;
@property(readonly, copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
- (void).cxx_destruct;
- (id)initWithTargetEffectiveProgress:(double)arg1 observerBlock:(CDUnknownBlockType)arg2;

@end
