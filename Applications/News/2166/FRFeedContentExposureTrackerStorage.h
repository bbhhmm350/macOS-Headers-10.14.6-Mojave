//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FRFeedDataStorage, NSDate;

@interface FRFeedContentExposureTrackerStorage : NSObject
{
    BOOL _syncedWithStorage;
    BOOL _lastRefreshContentExposed;
    FRFeedDataStorage *_feedDataStorage;
    NSDate *_lastRefreshEndDate;
}

@property(nonatomic) BOOL lastRefreshContentExposed; // @synthesize lastRefreshContentExposed=_lastRefreshContentExposed;
@property(copy, nonatomic) NSDate *lastRefreshEndDate; // @synthesize lastRefreshEndDate=_lastRefreshEndDate;
@property(nonatomic, getter=inSyncWithStorage) BOOL syncedWithStorage; // @synthesize syncedWithStorage=_syncedWithStorage;
@property(readonly, nonatomic) FRFeedDataStorage *feedDataStorage; // @synthesize feedDataStorage=_feedDataStorage;
- (void).cxx_destruct;
- (void)_writeToStorageLastRefreshEndDate:(id)arg1 exposed:(BOOL)arg2;
- (void)_readFromStorageIfNeeded;
- (void)setLastRefreshEndDate:(id)arg1 exposed:(BOOL)arg2;
- (id)initWithFeedDataStorage:(id)arg1;
- (id)init;

@end

