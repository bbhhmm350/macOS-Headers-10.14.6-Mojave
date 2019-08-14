//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAPrivilegedClient-Protocol.h"

@class FBAPrivilegedOperation, NSMutableArray, NSString, NSXPCConnection;
@protocol FBAPrivilegedDaemon;

@interface FBAPrivilegedHelper : NSObject <FBAPrivilegedClient>
{
    BOOL _shuttingDown;
    int _state;
    NSXPCConnection *_connection;
    id <FBAPrivilegedDaemon> _daemon;
    NSMutableArray *_requestQueue;
    FBAPrivilegedOperation *_currentOperation;
    CDUnknownBlockType _shutdownHandler;
}

+ (void)terminateDaemon;
+ (id)sharedInstance;
@property(copy) CDUnknownBlockType shutdownHandler; // @synthesize shutdownHandler=_shutdownHandler;
@property(retain) FBAPrivilegedOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain) NSMutableArray *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain) id <FBAPrivilegedDaemon> daemon; // @synthesize daemon=_daemon;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(getter=isShuttingDown) BOOL shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)pingDaemon;
- (void)installLogsWithDestination:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)syslogsWithDestination:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sampleProcessWithPID:(unsigned long long)arg1 destination:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)mdsDiagnoseWithDestination:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)tmDiagnoseWithDestination:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)bluetoothDiagnoseWithDestination:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)wifiDiagnoseWithDestination:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sysDiagnoseWithDestination:(id)arg1 extraArgs:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sysDiagnoseWithDestination:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)mobilityReportWithDestination:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)systemProfileWithDestination:(id)arg1 detailLevel:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)askHelperToAddFBASymlink;
- (void)installLogsDidFinish:(id)arg1 error:(id)arg2;
- (void)syslogsDidFinish:(id)arg1 error:(id)arg2;
- (void)MDSDiagnoseDidFinish:(id)arg1 error:(id)arg2;
- (void)TMDiagnoseDidFinish:(id)arg1 error:(id)arg2;
- (void)bluetoothDiagnoseDidFinish:(id)arg1 error:(id)arg2;
- (void)wifiDiagnoseDidFinish:(id)arg1 error:(id)arg2;
- (void)sampleProcessDidFinish:(id)arg1 error:(id)arg2;
- (void)sysDiagnoseDidFinish:(id)arg1 error:(id)arg2;
- (void)mobilityReportDidFinish:(id)arg1 error:(id)arg2;
- (void)systemProfileDidFinish:(id)arg1 error:(id)arg2;
- (void)logMessage:(id)arg1;
- (void)helperReadyWithVersion:(id)arg1;
- (void)runNextOperationIfAvailable;
- (void)completeCurrentOperation:(id)arg1 error:(id)arg2;
- (void)addOperationToQueue:(CDUnknownBlockType)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)shutDownHelperWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startHelperSetup;
- (void)failAllPendingOperationsWithError:(id)arg1;
- (void)terminateDaemon;
- (id)helperLabel;
- (BOOL)unloadDaemonWithError:(id *)arg1;
- (void)connectionWasInvalidated;
- (void)connectionWasInterrupted;
- (void)connectHelper;
- (BOOL)isHelperSubmitted;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
