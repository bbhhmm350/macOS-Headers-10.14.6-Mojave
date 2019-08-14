//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MIME/MFObservable.h>

@class NSLock;
@protocol MFObservable;

__attribute__((visibility("hidden")))
@interface _MFDistinctUntilChangedObservable : MFObservable
{
    id <MFObservable> _observable;
    id _lastObservedResult;
    NSLock *_lock;
}

- (BOOL)_isLastResultDistinctFromResult:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1;
- (void)dealloc;

@end
