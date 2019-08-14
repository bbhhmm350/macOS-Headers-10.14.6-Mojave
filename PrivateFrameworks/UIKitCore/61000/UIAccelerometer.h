//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UIAccelerometerDelegate;

@interface UIAccelerometer : NSObject
{
    double _updateInterval;
    id <UIAccelerometerDelegate> _delegate;
    struct {
        unsigned int delegateDidAccelerate:1;
        unsigned int reserved:31;
    } _accelerometerFlags;
}

+ (id)sharedAccelerometer;
@property(nonatomic) __weak id <UIAccelerometerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
- (void).cxx_destruct;
- (void)_didSuspend:(id)arg1;
- (void)_willResume:(id)arg1;
- (void)_stopAccelerometer;
- (void)_startAccelerometerIfNecessary;
- (void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;
- (void)dealloc;
- (id)init;

@end
