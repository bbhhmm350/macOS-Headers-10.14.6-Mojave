//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PCTDFA;

@interface CTFuzzyIndex : NSObject
{
    PCTDFA *_CTindex;
    NSMutableDictionary *_CTdata;
}

- (void).cxx_destruct;
- (id)_CTcreateFollowingState:(id)arg1 withState:(id)arg2 withSymbol:(id)arg3;
- (id)_CTcreateDFAFromNFA:(id)arg1;
- (id)_CTcreateNFAWithWord:(id)arg1 withMaxDistance:(long long)arg2;
- (id)description;
- (id)search:(id)arg1 withMaxDistance:(long long)arg2;
- (void)addWordsFromString:(id)arg1 data:(id)arg2;
- (void)addString:(id)arg1 withData:(id)arg2;
- (void)addString:(id)arg1;
- (int)getMode;
- (void)setMode:(int)arg1;
- (id)initAtPath:(id)arg1;
- (id)init;

@end
