//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABBufferQueryPredicate : NSObject
{
    CDUnknownBlockType _bindBlock;
    NSString *_query;
}

+ (id)predicateForContactsMatchingPreferredChannel:(id)arg1 limitOne:(BOOL)arg2;
+ (id)predicateForContactsInRange:(struct _NSRange)arg1 allowedStoreIdentifiers:(id)arg2 sortOrder:(int)arg3;
+ (id)predicateForContactsInRange:(struct _NSRange)arg1 sortOrder:(int)arg2;
+ (id)predicateForContactsMatchingOrganizationName:(id)arg1;
+ (id)predicateForSingleContactMatchingMultivalueProperty:(int)arg1 value:(id)arg2;
+ (id)predicateForContactsMatchingMultivalueProperty:(int)arg1 value:(id)arg2;
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1 addressBook:(void *)arg2;
+ (id)predicateForContactsWithLegacyIdentifier:(int)arg1;
+ (id)predicateForContactsWithUUIDs:(id)arg1 ignoreUnifiedIdentifiers:(BOOL)arg2;
+ (id)bindPlaceholderStringOfCount:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) CDUnknownBlockType bindBlock; // @synthesize bindBlock=_bindBlock;
- (void)dealloc;

@end

