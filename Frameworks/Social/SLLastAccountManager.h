//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SLLastAccountManager : NSObject
{
}

+ (void)setLastTwitterAccount:(id)arg1;
+ (id)lastTwitterAccountInAccountStore:(id)arg1 updatePrefs:(BOOL)arg2;
+ (id)_lastAccountOfTypeIdentifier:(id)arg1 inStore:(id)arg2 updatePrefs:(BOOL)arg3 prefKey:(id)arg4 prefAppID:(id)arg5;
+ (void)_setLastAccount:(id)arg1 prefKey:(id)arg2 prefAppID:(id)arg3;

@end
