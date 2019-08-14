//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PowerlogCore/PLEntry.h>

@class NSDate, NSString;

@interface PLArchiveEntry : PLEntry
{
    BOOL _systemTimeOffsetModified;
    NSString *_crPath;
}

+ (id)storageQueue;
+ (id)entryKey;
+ (void)load;
@property(readonly) BOOL systemTimeOffsetModified; // @synthesize systemTimeOffsetModified=_systemTimeOffsetModified;
@property(readonly, nonatomic) NSString *crPath; // @synthesize crPath=_crPath;
- (void).cxx_destruct;
- (void)log;
@property(nonatomic) long long mainDBSizeAtStart;
@property(readonly, nonatomic) BOOL removed;
@property(retain, nonatomic) NSDate *removedDate;
@property(readonly, nonatomic) BOOL syncedOff;
@property(retain, nonatomic) NSDate *syncedOffDate;
@property(nonatomic) unsigned long long numAttempts;
@property(nonatomic) long long stage;
@property(readonly) BOOL fullMode;
@property(nonatomic) double systemTimeOffset;
@property(readonly) NSString *uuid;
@property(readonly) NSDate *endDate;
@property(readonly) NSDate *startDate;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *compressedPath;
@property(readonly, nonatomic) NSString *path;
- (id)initEntryWithRawData:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 andUUID:(id)arg3;

@end
