//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EOSError : NSObject
{
}

+ (BOOL)errorIsNetworkingOrAppleConnectRelated:(id)arg1;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingRestoreErrorCode:(long long)arg2 userInfo:(id)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3;
+ (id)localizedDescriptionForErrorCode:(long long)arg1;

@end
