//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PodcastProducerKit/PCPSourceRecorder.h>

#import <PodcastProducerKit/NSCoding-Protocol.h>

@class NSDictionary, NSString, PCPSession;

@interface PCPRemoteVideoRecorder : PCPSourceRecorder <NSCoding>
{
    NSString *_remoteRecorderName;
    unsigned long long _delayBeforeRecording;
    NSDictionary *_metadata;
    NSString *_workflow;
    NSString *_submissionUUID;
    PCPSession *_session;
}

+ (id)recorderWithRemoteRecorderName:(id)arg1 session:(id)arg2;
@property(retain) PCPSession *session; // @synthesize session=_session;
@property(retain) NSString *submissionUUID; // @synthesize submissionUUID=_submissionUUID;
@property(retain) NSString *workflow; // @synthesize workflow=_workflow;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property unsigned long long delayBeforeRecording; // @synthesize delayBeforeRecording=_delayBeforeRecording;
@property(retain) NSString *remoteRecorderName; // @synthesize remoteRecorderName=_remoteRecorderName;
- (BOOL)isRemote;
- (void)failedToCancelRecordingWithAction:(id)arg1;
- (void)cancelledRecordingWithAction:(id)arg1;
- (void)cancel;
- (void)failedToStopRecordingWithAction:(id)arg1;
- (void)stoppedRecordingWithAction:(id)arg1;
- (void)stop;
- (void)failedToResumeRecordingWithAction:(id)arg1;
- (void)resumedRecordingWithAction:(id)arg1;
- (void)resume;
- (void)failedToPauseRecordingWithAction:(id)arg1;
- (void)pausedRecordingWithAction:(id)arg1;
- (void)pause;
- (void)failedToStartRecordingWithAction:(id)arg1;
- (void)recordingStartedWithAction:(id)arg1;
- (void)startWithDelay:(double)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteRecorderName:(id)arg1 session:(id)arg2;
- (void)commonInit;

@end
