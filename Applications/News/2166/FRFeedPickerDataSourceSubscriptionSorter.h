//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface FRFeedPickerDataSourceSubscriptionSorter : NSObject
{
    NSMutableDictionary *_tagOpenedDate;
    NSArray *_fallbackSortOrder;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *fallbackSortOrder; // @synthesize fallbackSortOrder=_fallbackSortOrder;
@property(retain, nonatomic) NSMutableDictionary *tagOpenedDate; // @synthesize tagOpenedDate=_tagOpenedDate;
- (void).cxx_destruct;
- (void)recordSubscriptionAsRecentlyOpened:(id)arg1;
- (id)sortSubscriptionsByRecency:(id)arg1 sortedPopularTagIDs:(id)arg2;
- (id)trimTheArticle:(id)arg1;
- (id)sortSubscriptionsAlphabetically:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType comparatorForSubscriptions;
- (id)init;

@end
