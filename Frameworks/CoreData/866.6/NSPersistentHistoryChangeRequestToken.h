//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding>
{
    NSDictionary *_token;
    NSDate *_date;
    long long _resultType;
    BOOL _delete;
    BOOL _transactionFromToken;
    unsigned long long _fetchLimit;
    unsigned long long _fetchBatchSize;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long fetchBatchSize; // @synthesize fetchBatchSize=_fetchBatchSize;
@property(readonly, nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(readonly, nonatomic) BOOL transactionFromToken; // @synthesize transactionFromToken=_transactionFromToken;
@property(readonly, nonatomic) BOOL delete; // @synthesize delete=_delete;
@property(readonly, nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(readonly, retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, retain, nonatomic) NSDictionary *token; // @synthesize token=_token;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initForRequest:(id)arg1;

@end
