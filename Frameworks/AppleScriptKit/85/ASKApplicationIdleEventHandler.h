//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppleScriptKit/ASKApplicationEventHandler.h>

@class NSTimer;

@interface ASKApplicationIdleEventHandler : ASKApplicationEventHandler
{
    NSTimer *_idleTimer;
    BOOL _applicationFinishedLaunching;
}

- (void)idleUsingTimer:(id)arg1;
- (void)disable;
- (void)enable;
- (void)willTerminate:(id)arg1;
- (void)didFinishLaunching:(id)arg1;
- (void)setIdleTimer:(id)arg1;
- (id)idleTimer;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

