//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FREditorialTabBarItemManager, NSString;

@protocol FRToCEditorialManager
@property(copy, nonatomic) NSString *editorialTabArticleID;
@property(nonatomic) __weak FREditorialTabBarItemManager *editorialTabBarItemManager;
- (void)prewarmWithCompletion:(void (^)(void))arg1;
- (void)removeBadgeForArticleID:(NSString *)arg1;
- (void)refreshEditorialItems;
@end
