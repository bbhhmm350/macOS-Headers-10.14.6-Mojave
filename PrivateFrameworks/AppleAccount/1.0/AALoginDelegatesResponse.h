//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSNumber, NSString;

@interface AALoginDelegatesResponse : AAResponse
{
}

- (id)augmentedResponseParametersForServiceIdentifier:(id)arg1 withAppleID:(id)arg2 password:(id)arg3 DSID:(id)arg4 altDSID:(id)arg5;
@property(readonly, nonatomic) NSString *altDSID;
@property(readonly, nonatomic) NSString *dsid;
- (id)responseParametersForServiceIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *responseParameters;
@property(readonly, nonatomic) NSString *statusMessage;
@property(readonly, nonatomic) NSNumber *status;

@end
