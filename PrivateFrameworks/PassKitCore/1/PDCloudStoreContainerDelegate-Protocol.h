//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSString, PDCloudStoreContainer;

@protocol PDCloudStoreContainerDelegate <NSObject>
- (void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(PDCloudStoreContainer *)arg1;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 createdZoneWithName:(NSString *)arg2;
@end

