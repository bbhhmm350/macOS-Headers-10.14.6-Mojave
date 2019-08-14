//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPerson, NSString;

@interface Address : NSObject
{
    NSString *_label;
    NSString *_name;
    ABPerson *_person;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    NSString *_country;
    NSString *_countryCode;
    BOOL _dontSave;
}

- (id)formattedAddress;
- (id)property;
- (id)objectSpecifier;
- (void)setCountryCode:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setZip:(id)arg1;
- (void)setState:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setStreet:(id)arg1;
- (id)countryCode;
- (id)country;
- (id)zip;
- (id)state;
- (id)city;
- (id)street;
- (void)setUniqueId:(id)arg1;
- (id)uniqueId;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)dblabel;
- (id)person;
- (void)setPerson:(id)arg1;
- (void)updatePerson;
- (void)setDontSave:(BOOL)arg1;
- (id)value;
- (id)description;
- (void)finalize;
- (void)dealloc;

@end
