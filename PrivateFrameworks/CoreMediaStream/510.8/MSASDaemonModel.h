//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreMediaStream/MSASModelBase.h>

@interface MSASDaemonModel : MSASModelBase
{
}

+ (id)defaultModel;
- (void)clearAllNextActivityDates;
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;
- (id)nextActivityDateByPersonID;
- (id)earliestNextActivityDate;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)init;

@end
