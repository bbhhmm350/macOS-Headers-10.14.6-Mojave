//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKBankAccountInformation : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_accountNumber;
    NSString *_routingNumber;
    NSString *_bankName;
    NSString *_identifier;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (Class)_classForType:(long long)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *routingNumber; // @synthesize routingNumber=_routingNumber;
@property(copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)maskedAccountNumber;
- (id)accountSuffix;
- (BOOL)isValid;
- (void)deleteAllLocalBankInformation;
- (void)deleteAllBankInformation;
- (void)_commonDeleteAllBankInformation;
- (void)updateToLatestKeychainData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)init;

@end
