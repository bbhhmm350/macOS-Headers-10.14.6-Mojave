//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Sharing/AuthenticationHintsProvider-Protocol.h>

@class NSString;

@protocol SDAuthenticationHintsInterface <AuthenticationHintsProvider>
- (void)authenticateAccountWithAppleID:(NSString *)arg1 password:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end
