//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DifferentialPrivacy/_DPMaintenance-Protocol.h>

@interface _DPReportGenerator : NSObject <_DPMaintenance>
{
}

+ (id)randomizeKeys:(id)arg1 andSortByPriority:(BOOL)arg2;
+ (id)queryKeysForPattern:(id)arg1 storage:(id)arg2;
+ (id)queryRecordsForKey:(id)arg1 storage:(id)arg2;
+ (id)filterNonConformingRecordsFrom:(id)arg1;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;
- (id)generateReportForKeys:(id)arg1 storage:(id)arg2;
- (id)generateReportUsing:(id)arg1;
- (BOOL)markSubmitted:(id)arg1 storage:(id)arg2;

@end
