//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDate;

@interface _CDEventIndexerBookmark : NSObject <NSSecureCoding>
{
    NSDate *_earliestCreationDate;
    NSDate *_latestCreationDate;
    NSDate *_latestTombstoneDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)baseBookmark;
@property(readonly, copy, nonatomic) NSDate *latestTombstoneDate; // @synthesize latestTombstoneDate=_latestTombstoneDate;
@property(readonly, copy, nonatomic) NSDate *latestCreationDate; // @synthesize latestCreationDate=_latestCreationDate;
@property(readonly, copy, nonatomic) NSDate *earliestCreationDate; // @synthesize earliestCreationDate=_earliestCreationDate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)updatedBookmarkWithLatestTombstoneDate:(id)arg1;
- (id)updatedBookmarkWithLatestCreationDate:(id)arg1;
- (id)updatedBookmarkWithEarliestCreationDate:(id)arg1;
- (id)initWithEarliestCreationDate:(id)arg1 latestCreationDate:(id)arg2 latestTombstoneDate:(id)arg3;

@end

