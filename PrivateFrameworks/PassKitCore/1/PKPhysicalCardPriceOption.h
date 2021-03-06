//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKCurrencyAmount;

@interface PKPhysicalCardPriceOption : NSObject <NSSecureCoding>
{
    unsigned long long _reason;
    PKCurrencyAmount *_amount;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

