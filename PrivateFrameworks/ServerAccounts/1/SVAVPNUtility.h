//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SVAVPNUtility : NSObject
{
}

+ (BOOL)setPassword:(id)arg1 forVPNConfiguration:(id)arg2;
+ (struct AuthorizationOpaqueRef *)newAuthorizationRef;
+ (void)removeVPNProfileForAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)installVPNProfileForAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)isVPNProfileInstalledForAccount:(id)arg1;

@end
