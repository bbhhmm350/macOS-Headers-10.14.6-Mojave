//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MGJob.h"

#import "NSURLDownloadDelegate-Protocol.h"

@class NSError, NSObject, NSOperation, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MGMediaDownloadJob : MGJob <NSURLDownloadDelegate>
{
    NSOperation *_resolveRefMovieURLOperation;
    NSOperation *_downloadOperation;
    NSURL *_resolvedSourceURL;
    NSURL *_destinationURL;
    NSError *_error;
    struct __CFRunLoop *_downloadCFRunLoop;
    long long _expectedContentLength;
    long long _receivedDataLength;
    BOOL _downloadIsFinished;
    BOOL _hideExtension;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)cancel;
- (id)resultURL;
- (id)runningStatusString;
- (float)progress;
- (id)operations;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (BOOL)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)dealloc;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 hideExtension:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
