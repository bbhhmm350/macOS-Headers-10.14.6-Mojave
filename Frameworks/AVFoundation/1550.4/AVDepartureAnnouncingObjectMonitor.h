//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVDepartureAnnouncingObjectMonitor : NSObject
{
    AVWeakReference *_weakReferenceToMonitoringObject;
}

+ (void)attachDepartureAnnouncingObjectMonitorToObject:(id)arg1 monitoringObject:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithMonitoringObject:(id)arg1;

@end
