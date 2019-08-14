//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKSecureDatabaseResetOperation : FCOperation
{
    BOOL _deleteZones;
    BOOL _restoreSecureSentinel;
    BOOL _restoreZoneContents;
    FCCKPrivateDatabase *_database;
    CDUnknownBlockType _resetCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType resetCompletionHandler; // @synthesize resetCompletionHandler=_resetCompletionHandler;
@property(nonatomic) BOOL restoreZoneContents; // @synthesize restoreZoneContents=_restoreZoneContents;
@property(nonatomic) BOOL restoreSecureSentinel; // @synthesize restoreSecureSentinel=_restoreSecureSentinel;
@property(nonatomic) BOOL deleteZones; // @synthesize deleteZones=_deleteZones;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)_rawRecordsToSave;
- (id)_rawZonesToRecreate;
- (id)_rawZoneIDsToDelete;
- (id)_restoreZoneContents;
- (id)_restoreSecureSentinel;
- (id)_recreateZones;
- (id)_deleteZones;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end
