//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCReadingHistoryObserving-Protocol.h"
#import "TUMenuBarItemHandlerProviding-Protocol.h"

@class FCPurchaseController, FCReadingHistory, FCReadingList, FCSubscriptionController, NSString, UIViewController;
@protocol FCHeadlineProviding, FCNewsAppConfigurationManager, FCPaidAccessCheckerType;

@interface FRArticleMenuItemHandlerProvider : NSObject <FCReadingHistoryObserving, TUMenuBarItemHandlerProviding>
{
    UIViewController *_activeViewController;
    id <FCHeadlineProviding> _headline;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionController *_subscriptionController;
    FCPurchaseController *_purchaseController;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    id <FCPaidAccessCheckerType> _accessChecker;
}

@property(readonly, nonatomic) id <FCPaidAccessCheckerType> accessChecker; // @synthesize accessChecker=_accessChecker;
@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(readonly, nonatomic) FCPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(readonly, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property(readonly, nonatomic) __weak UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
- (void).cxx_destruct;
- (id)decreaseTextSizeHandler;
- (id)increaseTextSizeHandler;
- (id)copyLinkHandler;
- (id)dislikeHandler;
- (id)likeHandler;
- (id)blockHandler;
- (id)followHandler;
- (id)openInSafariHandler;
- (id)saveHandler;
- (id)menuItemHandlers;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
- (BOOL)isSpotlightArticle;
- (void)dealloc;
- (id)initWithHeadline:(id)arg1 viewController:(id)arg2 readingHistory:(id)arg3 readingList:(id)arg4 personalizationData:(id)arg5 subscriptionController:(id)arg6 analyticsController:(id)arg7 purchaseController:(id)arg8 appConfigurationManager:(id)arg9 accessChecker:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
