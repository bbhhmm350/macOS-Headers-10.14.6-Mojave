//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsTransport/NTPBTelemetryNetworkEventGroup.h>

@class FCNetworkEventStats, NSDate;

@interface NTPBTelemetryNetworkEventGroup (FCNetworkBehaviorMonitorAdditions)
@property(readonly, nonatomic) unsigned long long cacheMissCount;
@property(readonly, nonatomic) unsigned long long cacheHitCount;
@property(readonly, nonatomic) FCNetworkEventStats *timeToFirstByteStats;
@property(readonly, nonatomic) FCNetworkEventStats *connectDurationStats;
@property(readonly, nonatomic) FCNetworkEventStats *dnsDurationStats;
@property(readonly, nonatomic) FCNetworkEventStats *totalDurationStats;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@end
