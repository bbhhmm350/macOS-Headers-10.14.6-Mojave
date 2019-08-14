//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCNotificationsConfiguration : NSObject
{
    NSArray *_preSubscribedNotificationsChannelIDs;
    NSArray *_recommendedNotificationChannelIDs;
}

@property(readonly, copy, nonatomic) NSArray *recommendedNotificationChannelIDs; // @synthesize recommendedNotificationChannelIDs=_recommendedNotificationChannelIDs;
@property(readonly, copy, nonatomic) NSArray *preSubscribedNotificationsChannelIDs; // @synthesize preSubscribedNotificationsChannelIDs=_preSubscribedNotificationsChannelIDs;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2;

@end
