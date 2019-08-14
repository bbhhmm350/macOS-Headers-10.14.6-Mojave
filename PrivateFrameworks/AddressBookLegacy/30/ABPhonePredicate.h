//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookLegacy/ABPredicate.h>

@class NSString;

@interface ABPhonePredicate : ABPredicate
{
    NSString *_homeCountryCode;
    NSString *_phoneNumber;
    NSString *_country;
}

@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context *)arg1 predicateContext:(id)arg2 values:(struct sqlite3_value **)arg3 count:(int)arg4;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (BOOL)hasCallback;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2;
- (id)predicateFormat;
- (BOOL)isValid;
- (id)homeCountryCode;
- (void)dealloc;

@end
