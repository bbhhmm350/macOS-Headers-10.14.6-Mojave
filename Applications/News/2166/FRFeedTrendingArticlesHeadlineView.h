//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FRFeedHeadlineView.h"

@class FRTextInCircleView;

@interface FRFeedTrendingArticlesHeadlineView : FRFeedHeadlineView
{
    FRTextInCircleView *_numberedCircleView;
}

@property(readonly, nonatomic) FRTextInCircleView *numberedCircleView; // @synthesize numberedCircleView=_numberedCircleView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)prepareForNewHeadline;
- (id)initWithFrame:(struct CGRect)arg1;

@end
