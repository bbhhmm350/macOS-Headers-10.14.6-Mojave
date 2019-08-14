//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFSyncedFile.h>

@class NSString;

@interface MFSyncedSignatureContentsFile : MFSyncedFile
{
    NSString *_uniqueID;
}

+ (id)syncedSignatureContentsFileWithUniqueID:(id)arg1;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (id)upgradeLegacyCloudData:(id)arg1 fromLegacyVersion:(long long)arg2;
- (id)resolveConflictVersion:(id)arg1 againstCurrentVersion:(id)arg2;
- (void)writeSignatureContents:(id)arg1;
- (id)readSignatureContents;

@end
