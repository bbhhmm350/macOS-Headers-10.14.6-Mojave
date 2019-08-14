//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SMMigrateEngine;

@interface SMMigrationEngineElement : NSObject
{
    BOOL _hasRan;
    SMMigrateEngine *_engine;
    double _progressPercentage;
    double _initialTimeEstimate;
}

@property double initialTimeEstimate; // @synthesize initialTimeEstimate=_initialTimeEstimate;
@property double progressPercentage; // @synthesize progressPercentage=_progressPercentage;
@property BOOL hasRan; // @synthesize hasRan=_hasRan;
@property __weak SMMigrateEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (void)calculateProgressPercentages:(double)arg1;
- (double)estimateTimeRemaining;
- (double)estimatedTimeToComplete;
- (unsigned long long)completedSize;
- (BOOL)shouldContinue;
- (id)run;
- (id)description;
- (id)initWithEngine:(id)arg1;

@end
