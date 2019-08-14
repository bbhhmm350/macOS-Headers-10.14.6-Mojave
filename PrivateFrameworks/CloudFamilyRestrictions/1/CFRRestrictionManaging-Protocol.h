//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudFamilyRestrictions/NSObject-Protocol.h>

@class NSData, NSNumber, NSString;

@protocol CFRRestrictionManaging <NSObject>
- (void)deleteAllRecords;
- (void)setupSubscription;
- (void)locallyEnforceRestrictionsForUser:(NSString *)arg1 withAuth:(NSData *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)resetToAgeDefaultRestrictionsForFamilyMember:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)restrictionsDifferFromAgeDefaultsForFamilyMember:(NSString *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)ageOfFamilyMember:(NSString *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)saveRestrictionsForFamilyMember:(NSString *)arg1 withAuth:(NSData *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)setValue:(id)arg1 forRestriction:(NSString *)arg2 familyMember:(NSString *)arg3 reply:(void (^)(BOOL, NSError *))arg4;
- (void)fetchAllRestrictionsForFamilyMember:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)valueForRestriction:(NSString *)arg1 familyMember:(NSString *)arg2 reply:(void (^)(id, NSError *))arg3;
- (void)setParentalRestrictionsEnabled:(NSNumber *)arg1 forFamilyMember:(NSString *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)isParentalRestrictionsEnabledForFamilyMember:(NSString *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)disableOveride;
- (void)enableOverrideWithParentEmail:(NSString *)arg1 andPassword:(NSString *)arg2;
- (void)setupFamilyWithZoneID:(NSString *)arg1 shareID:(NSString *)arg2;
@end
