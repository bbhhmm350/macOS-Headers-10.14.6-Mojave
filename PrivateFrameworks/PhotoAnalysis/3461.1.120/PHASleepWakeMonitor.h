//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHASleepWakeMonitor : NSObject
{
    unsigned int _ackPort;
    unsigned int _notifier;
    unsigned int _powerAssertionID;
    struct IONotificationPort *_notifyPortRef;
}

+ (BOOL)isSystemInDarkWake;
@property unsigned int powerAssertionID; // @synthesize powerAssertionID=_powerAssertionID;
@property unsigned int notifier; // @synthesize notifier=_notifier;
@property struct IONotificationPort *notifyPortRef; // @synthesize notifyPortRef=_notifyPortRef;
@property unsigned int ackPort; // @synthesize ackPort=_ackPort;
- (void)releaseUserIdlePowerAssertion;
- (void)takeUserIdlePowerAssertion;
- (void)powerNotificationMessage:(unsigned int)arg1 argument:(void *)arg2;
- (void)deRegisterForSleepWake;
- (void)registerForSleepWake;
- (id)init;

@end
