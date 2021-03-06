//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSArray, NSString;
@protocol FCFeedTransforming;

@interface FCCurrentMagazineContentFetchOperation : FCOperation
{
    CDUnknownBlockType _fetchCompletionHandler;
    FCCloudContext *_context;
    NSArray *_configIssueIDs;
    NSArray *_configArticleIDs;
    NSString *_trendingArticleListID;
    id <FCFeedTransforming> _currentHeadlinesTransformation;
    NSArray *_resultConfigIssues;
    NSArray *_resultConfigHeadlines;
    NSArray *_resultCurrentIssues;
    NSArray *_resultCurrentFeatureHeadlines;
    NSArray *_resultTrendingHeadlines;
}

@property(retain, nonatomic) NSArray *resultTrendingHeadlines; // @synthesize resultTrendingHeadlines=_resultTrendingHeadlines;
@property(retain, nonatomic) NSArray *resultCurrentFeatureHeadlines; // @synthesize resultCurrentFeatureHeadlines=_resultCurrentFeatureHeadlines;
@property(retain, nonatomic) NSArray *resultCurrentIssues; // @synthesize resultCurrentIssues=_resultCurrentIssues;
@property(retain, nonatomic) NSArray *resultConfigHeadlines; // @synthesize resultConfigHeadlines=_resultConfigHeadlines;
@property(retain, nonatomic) NSArray *resultConfigIssues; // @synthesize resultConfigIssues=_resultConfigIssues;
@property(retain, nonatomic) id <FCFeedTransforming> currentHeadlinesTransformation; // @synthesize currentHeadlinesTransformation=_currentHeadlinesTransformation;
@property(copy, nonatomic) NSString *trendingArticleListID; // @synthesize trendingArticleListID=_trendingArticleListID;
@property(retain, nonatomic) NSArray *configArticleIDs; // @synthesize configArticleIDs=_configArticleIDs;
@property(retain, nonatomic) NSArray *configIssueIDs; // @synthesize configIssueIDs=_configIssueIDs;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
- (void).cxx_destruct;
- (id)_filterInaccessibleIssues:(id)arg1;
- (id)_filterInaccessibleHeadlines:(id)arg1;
- (void)_fetchCurrentFeatureHeadlinesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchConfigContentAndCurrentIssuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)initWithContext:(id)arg1 configIssueIDs:(id)arg2 configArticleIDs:(id)arg3 trendingArticleListID:(id)arg4 currentHeadlinesTransformation:(id)arg5;
- (id)init;

@end

