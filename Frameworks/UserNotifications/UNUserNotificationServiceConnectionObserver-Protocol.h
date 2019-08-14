//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UserNotifications/NSObject-Protocol.h>

@class NSData, NSString, UNNotification, UNNotificationResponse;

@protocol UNUserNotificationServiceConnectionObserver <NSObject>

@optional
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1 withCompletionHandler:(void (^)(void))arg2;
- (void)willPresentNotification:(UNNotification *)arg1 withCompletionHandler:(void (^)(unsigned long long))arg2;
- (void)didReceiveDeviceToken:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;
@end
