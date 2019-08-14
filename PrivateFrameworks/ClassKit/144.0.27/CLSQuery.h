//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ClassKit/CLSDataObserver.h>

#import <ClassKit/CLSQuery-Protocol.h>
#import <ClassKit/NSLocking-Protocol.h>

@class NSDate, NSMutableArray, NSString;

@interface CLSQuery : CLSDataObserver <NSLocking, CLSQuery>
{
    NSMutableArray *_results;
    struct os_unfair_lock_s _lock;
    BOOL _executing;
    BOOL _shouldAddResultsToDataStore;
    BOOL _shouldFaultResults;
    long long _fetchLimit;
    CDUnknownBlockType _completion;
    NSDate *_startDate;
    unsigned long long _state;
}

+ (id)queryWithObjectType:(Class)arg1 predicate:(id)arg2 error:(id *)arg3;
+ (id)queryWithObjectType:(Class)arg1 predicate:(id)arg2;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) BOOL shouldFaultResults; // @synthesize shouldFaultResults=_shouldFaultResults;
@property(nonatomic) BOOL shouldAddResultsToDataStore; // @synthesize shouldAddResultsToDataStore=_shouldAddResultsToDataStore;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)_notifyOfCompletionWithResults:(id)arg1 error:(id)arg2;
- (void)_notifyOfCompletionWithError:(id)arg1;
- (void)_faultResultsAndComplete;
- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2;
- (oneway void)clientRemote_deliverObject:(id)arg1;
- (oneway void)clientRemote_invalidate;
- (void)reset;
@property(readonly, copy) NSString *description;
- (void)unlock;
- (void)lock;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
