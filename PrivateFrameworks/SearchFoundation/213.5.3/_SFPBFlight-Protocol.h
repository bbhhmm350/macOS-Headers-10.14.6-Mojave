//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBFlightLeg;

@protocol _SFPBFlight <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *carrierPhoneNumber;
@property(copy, nonatomic) NSString *operatorFlightNumber;
@property(copy, nonatomic) NSString *operatorCarrierCode;
@property(copy, nonatomic) NSArray *legs;
@property(copy, nonatomic) NSString *flightNumber;
@property(copy, nonatomic) NSString *carrierName;
@property(copy, nonatomic) NSString *carrierCode;
@property(copy, nonatomic) NSString *flightID;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFlightLeg *)legsAtIndex:(unsigned long long)arg1;
- (unsigned long long)legsCount;
- (void)addLegs:(_SFPBFlightLeg *)arg1;
- (void)clearLegs;
@end
