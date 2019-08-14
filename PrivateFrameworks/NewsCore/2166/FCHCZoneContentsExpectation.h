//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCHCExpectation-Protocol.h>

@class CKDatabase, CKRecordZoneID, NSArray, NSString;

@interface FCHCZoneContentsExpectation : NSObject <FCHCExpectation>
{
    CKDatabase *_database;
    CKRecordZoneID *_zoneID;
    NSArray *_recordTests;
}

@property(copy, nonatomic) NSArray *recordTests; // @synthesize recordTests=_recordTests;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)validate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
