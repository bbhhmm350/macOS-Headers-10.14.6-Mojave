//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray, NSString;

@interface DMFFetchDeclarationsRequest : DMFTaskRequest
{
    BOOL _includeInternalState;
    BOOL _includePayloadContents;
    NSString *_organizationIdentifier;
    NSArray *_payloadIdentifiers;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) BOOL includePayloadContents; // @synthesize includePayloadContents=_includePayloadContents;
@property(nonatomic) BOOL includeInternalState; // @synthesize includeInternalState=_includeInternalState;
@property(copy, nonatomic) NSArray *payloadIdentifiers; // @synthesize payloadIdentifiers=_payloadIdentifiers;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
