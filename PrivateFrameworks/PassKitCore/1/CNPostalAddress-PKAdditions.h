//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNPostalAddress.h>

@interface CNPostalAddress (PKAdditions)
+ (id)_CNKeyFromABKey:(id)arg1;
+ (id)_ABKeyFromCNKey:(id)arg1;
+ (id)backwardsCompatiblePostalAddressDictionary:(id)arg1;
- (id)_countryCodeForCountryName:(id)arg1;
- (id)suggestedCountryCode;
- (id)redactedPostalAddress;
- (id)redactedStreetAddress;
- (id)webServiceDictionaryRepresentation;
- (id)backwardsCompatibleDictionaryRepresentation;
@end
