//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Accounts/ACAccount.h>

#import <AppleMediaServices/AMSHashable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface ACAccount (AppleMediaServices) <AMSHashable>
+ (BOOL)_isAccountFlagWritable:(id)arg1;
+ (BOOL)_isAccountFlagValue:(id)arg1 validForAccountFlag:(id)arg2;
+ (id)_defaultValueForAccountFlag:(id)arg1;
- (BOOL)ams_valueForAccountFlag:(id)arg1;
- (void)ams_setValue:(BOOL)arg1 forAccountFlag:(id)arg2;
- (id)ams_secureToken;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 dataProtectionClass:(unsigned long long)arg3 expectedClass:(Class)arg4;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 expectedClass:(Class)arg3;
- (void)_setCookies:(id)arg1;
- (id)_createCookieStorage;
- (id)_cookiesMatchingProperties:(id)arg1;
- (id)_accountPropertyForKey:(id)arg1 dataProtectionClass:(unsigned long long)arg2 expectedClass:(Class)arg3 error:(id *)arg4;
- (id)_accountPropertyForKey:(id)arg1 expectedClass:(Class)arg2;
@property(readonly) NSString *hashedDescription;
- (void)ams_removeCookiesMatchingProperties:(id)arg1;
- (void)ams_removeCookies:(id)arg1;
- (void)ams_removeAllCookies;
- (id)ams_cookiesForURL:(id)arg1;
- (void)ams_addCookies:(id)arg1;
- (void)ams_setAccountFlagValue:(id)arg1 forAccountFlag:(id)arg2;
- (BOOL)ams_postAccountFlagsWithBagContract:(id)arg1;
- (BOOL)ams_isDuplicate:(id)arg1;
- (BOOL)ams_encryptAccountFlags;
- (id)ams_accountFlagValueForAccountFlag:(id)arg1;
@property(readonly) NSString *ams_storefront;
- (void)ams_setValidPayment:(BOOL)arg1;
- (void)ams_setStorefront:(id)arg1;
- (void)ams_setRawPassword:(id)arg1;
- (void)ams_setPassword:(id)arg1;
- (void)ams_setLastName:(id)arg1;
- (void)ams_setInGoodStanding:(BOOL)arg1;
- (void)ams_setiCloudFamily:(BOOL)arg1;
- (void)ams_setFirstName:(id)arg1;
- (void)ams_setDSID:(id)arg1;
- (void)ams_setCreditsString:(id)arg1;
- (void)ams_setAltDSID:(id)arg1;
- (void)ams_setAgreedToTerms:(BOOL)arg1;
- (void)ams_setAccountFlags:(id)arg1;
@property(readonly) unsigned long long ams_securityLevel;
- (BOOL)ams_requiresAuthKitUpdate;
- (id)ams_rawPassword;
- (id)ams_password;
@property(readonly) NSString *ams_lastName;
- (BOOL)ams_isValidPayment;
@property(readonly, getter=ams_isSandboxAccount) BOOL ams_sandboxAccount;
@property(readonly, getter=ams_isManagedAppleID) BOOL ams_managedAppleID;
@property(readonly, getter=ams_isLocalAccount) BOOL ams_localAccount;
@property(readonly, getter=ams_isiTunesAccount) BOOL ams_iTunesAccount;
- (BOOL)ams_isInGoodStanding;
@property(readonly, getter=ams_isIDMSAccount) BOOL ams_IDMSAccount;
- (BOOL)ams_isiCloudFamily;
@property(readonly, getter=ams_isiCloudAccount) BOOL ams_iCloudAccount;
@property(readonly, getter=ams_isHSA2) BOOL ams_HSA2;
@property(readonly, getter=ams_isDemoAccount) BOOL ams_demoAccount;
@property(readonly) NSString *ams_fullName;
@property(readonly) NSString *ams_firstName;
@property(readonly) NSNumber *ams_DSID;
- (BOOL)ams_didAgreeToTerms;
@property(readonly) NSString *ams_creditsString;
@property(readonly) NSArray *ams_cookies;
@property(readonly) NSString *ams_altDSID;
- (id)ams_accountFlags;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

