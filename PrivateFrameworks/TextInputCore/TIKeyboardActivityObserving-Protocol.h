//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class TIKeyboardActivityContext;

@protocol TIKeyboardActivityObserving <NSObject>
- (void)keyboardActivityDidTransition:(TIKeyboardActivityContext *)arg1;

@optional
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
@end

