//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, PKAppleAccountInformation;

@interface PKAppleAccountManager : NSObject
{
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_accountStore;
- (id)_primaryAppleAccount;
- (id)_aidaAccount;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;

@end

