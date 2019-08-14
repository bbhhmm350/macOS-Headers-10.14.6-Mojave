//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HelpData/NSURLSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface DDMAssetURLSessionManager : NSObject <NSURLSessionDelegate>
{
    NSURLSessionConfiguration *_configuration;
    NSURLSession *_session;
    NSOperationQueue *_sessionDelegateQueue;
    NSMutableDictionary *_activeTasks;
    NSObject<OS_dispatch_queue> *_activeTasksQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *activeTasksQueue; // @synthesize activeTasksQueue=_activeTasksQueue;
@property(retain) NSMutableDictionary *activeTasks; // @synthesize activeTasks=_activeTasks;
@property(retain) NSOperationQueue *sessionDelegateQueue; // @synthesize sessionDelegateQueue=_sessionDelegateQueue;
@property(readonly) NSURLSession *session; // @synthesize session=_session;
@property(readonly, copy) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)delegateForTask:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
