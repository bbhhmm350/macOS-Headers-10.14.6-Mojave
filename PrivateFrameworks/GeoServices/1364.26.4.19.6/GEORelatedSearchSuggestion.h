//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDRelatedSearchSuggestion, NSString;

@interface GEORelatedSearchSuggestion : NSObject
{
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
- (void).cxx_destruct;
- (id)_suggestionEntryMetadata;
@property(readonly, nonatomic) NSString *searchBarDisplayToken;
@property(readonly, nonatomic) NSString *displayString;
- (id)initWithPDRelatedSearchSuggestion:(id)arg1;

@end
