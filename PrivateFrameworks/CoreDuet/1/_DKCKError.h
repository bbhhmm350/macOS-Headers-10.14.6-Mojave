//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DKCKError : NSObject
{
}

+ (id)_allPartialErrorsFromError:(id)arg1;
+ (id)errorMinusUnrecoverableDecryptionErrorsFromPartialError:(id)arg1;
+ (BOOL)isPCSError:(id)arg1;
+ (BOOL)isKeychainSyncingInProgressError:(id)arg1;
+ (BOOL)isNetworkUnavailableError:(id)arg1;
+ (BOOL)isManateeNotAvailableError:(id)arg1;
+ (void)_populateZoneIDs:(id)arg1 fromUnrecoverableDecryptionError:(id)arg2 zoneID:(id)arg3;
+ (id)zoneIDsWithUnrecoverableDecryptionError:(id)arg1;
+ (BOOL)isUnrecoverableDecryptionError:(id)arg1;
+ (BOOL)isPartialError:(id)arg1;
+ (BOOL)isChangeTokenExpiredError:(id)arg1;

@end
