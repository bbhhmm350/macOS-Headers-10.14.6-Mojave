//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMCopyEngineFileCopier.h>

#import <SystemMigration/SMYaaActionDelegate-Protocol.h>

@class NSString, NSURL, SMNetworkSourceProxy;

@interface SMCopyEngineNetworkCopier : SMCopyEngineFileCopier <SMYaaActionDelegate>
{
    NSURL *absoluteBaseSourcePath;
    NSURL *absoluteDestinationBasePath;
    long long operationCompletedSize;
    long long currentFileCompletedSize;
    NSString *lastSkippedFile;
    SMNetworkSourceProxy *_proxy;
}

@property(retain) SMNetworkSourceProxy *proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (int)bomCopierEncounteredFileError:(struct _BOMCopier *)arg1 atPath:(const char *)arg2 error:(int)arg3;
- (void)bomCopierEncounteredFatalFileError:(struct _BOMCopier *)arg1 atPath:(const char *)arg2 error:(int)arg3;
- (void)bomCopierEncounteredFatalError:(struct _BOMCopier *)arg1 message:(const char *)arg2;
- (void)yaaFileFinished:(id)arg1 filePath:(id)arg2 totalSize:(unsigned long long)arg3;
- (void)bomCopierCopyFileFinished:(struct _BOMCopier *)arg1 filePath:(const char *)arg2 type:(int)arg3 totalSize:(long long)arg4 result:(int)arg5;
- (void)fileFinishedFromArchiver:(id)arg1 totalSize:(unsigned long long)arg2;
- (void)bomCopierCopyFileUpdate:(struct _BOMCopier *)arg1 filePath:(const char *)arg2 totalSizeCopied:(long long)arg3;
- (BOOL)copyFrom:(id)arg1 relativeFrom:(id)arg2 to:(id)arg3 error:(id *)arg4;
- (BOOL)processReturningError:(id *)arg1;
- (id)initWithProxy:(id)arg1;

@end
