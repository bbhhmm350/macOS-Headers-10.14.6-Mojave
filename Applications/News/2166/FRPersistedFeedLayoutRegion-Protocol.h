//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FRPersistedBatchMetadata-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NFLBatchContext, NSArray, NSDictionary, NSString;

@protocol FRPersistedFeedLayoutRegion <FRPersistedBatchMetadata, NSObject, NSCopying>
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) NFLBatchContext *batchContext;
@property(readonly, nonatomic) NSDictionary *layoutAttributesByTileInfoID;
@property(readonly, nonatomic) NSArray *tileInfoIDs;
@property(readonly, copy, nonatomic) NSString *regionID;
@end
