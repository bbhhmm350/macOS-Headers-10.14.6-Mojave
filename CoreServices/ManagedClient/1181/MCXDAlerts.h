//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCXDAlerts : NSObject
{
    struct __CFUserNotification *mAlertsRef;
    struct __CFRunLoopSource *mAlertsRunLoopSource;
}

- (id)init;
- (BOOL)queryAlert:(id)arg1 msg:(id)arg2 btn:(id)arg3 btnAlt:(id)arg4 iconPath:(id)arg5;
- (void)alertUser:(id)arg1 msg:(id)arg2 btn:(id)arg3 iconPath:(id)arg4;
- (void)cancelSimpleProgress;
- (void)createSimpleProgress:(id)arg1 optMessage:(id)arg2 optIconPath:(id)arg3 showDefaultButton:(BOOL)arg4;

@end
