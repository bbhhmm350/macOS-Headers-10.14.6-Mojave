//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteQueryCacheMissLogger, NSArray;

@interface CNAutocompleteQueryCacheMissAuditor : NSObject
{
    CNAutocompleteQueryCacheMissLogger *_logger;
    NSArray *_cachedResults;
}

@property(copy) NSArray *cachedResults; // @synthesize cachedResults=_cachedResults;
@property(retain) CNAutocompleteQueryCacheMissLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)didReturnLiveResults:(id)arg1;
- (void)didReturnCachedResults:(id)arg1;
- (id)description;
- (id)initWithLogger:(id)arg1;
- (id)init;

@end
