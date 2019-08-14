//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneCommand-Protocol.h>

@class NSArray, NSString;

@interface SCWatchlistAddDefaultSymbolsCommand : NSObject <SCKZoneCommand>
{
    BOOL _deferUpload;
    NSArray *_symbols;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL deferUpload; // @synthesize deferUpload=_deferUpload;
@property(readonly, copy, nonatomic) NSArray *symbols; // @synthesize symbols=_symbols;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldDeferUpload;
- (void)executeWithZone:(id)arg1;
- (id)initWithSymbols:(id)arg1 deferUpload:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
