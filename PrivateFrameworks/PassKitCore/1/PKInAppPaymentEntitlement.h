//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject
{
    NSArray *_merchantIdentifiers;
    BOOL _ignoreMerchantIdentifiers;
}

@property(readonly, nonatomic) BOOL ignoreMerchantIdentifiers; // @synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers;
- (void).cxx_destruct;
- (void)_probeEntitlementsWithToken:(CDStruct_6ad76789)arg1;
@property(readonly, nonatomic) BOOL hasMerchantIdentifiers;
- (BOOL)hasMerchantIdentifier:(id)arg1;
- (id)initWithToken:(CDStruct_6ad76789)arg1;

@end
