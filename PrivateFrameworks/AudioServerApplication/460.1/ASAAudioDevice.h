//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioServerApplication/ASAObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface ASAAudioDevice : ASAObject
{
}

- (BOOL)setOutputStreamUsage:(id)arg1 forAudioProc:(CDUnknownFunctionPointerType)arg2;
- (id)outputStreamUsageForAudioProc:(CDUnknownFunctionPointerType)arg1;
- (BOOL)setInputStreamUsage:(id)arg1 forAudioProc:(CDUnknownFunctionPointerType)arg2;
- (id)inputStreamUsageForAudioProc:(CDUnknownFunctionPointerType)arg1;
- (BOOL)stopAudioProc:(CDUnknownFunctionPointerType)arg1 error:(id *)arg2;
- (BOOL)startAudioProc:(CDUnknownFunctionPointerType)arg1 error:(id *)arg2;
- (BOOL)destroyAudioProcID:(CDUnknownFunctionPointerType)arg1 error:(id *)arg2;
- (BOOL)createAudioProcID:(CDUnknownFunctionPointerType *)arg1 forIOProc:(CDUnknownFunctionPointerType)arg2 withClientData:(void *)arg3 error:(id *)arg4;
- (id)coreAudioClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSDictionary *deviceDescription;
@property(copy, nonatomic) NSDictionary *clientDescription;
@property(readonly, copy, nonatomic) NSDictionary *headsetInfo; // @dynamic headsetInfo;
@property(readonly, copy, nonatomic) NSDictionary *aggregateDescription; // @dynamic aggregateDescription;
@property(copy, nonatomic) NSString *clockDeviceUID; // @dynamic clockDeviceUID;
@property(readonly, nonatomic, getter=isAggregate) BOOL aggregate; // @dynamic aggregate;
@property(readonly, nonatomic) BOOL hasOutput; // @dynamic hasOutput;
@property(readonly, nonatomic) BOOL hasInput; // @dynamic hasInput;
@property(readonly, copy, nonatomic) NSURL *iconURL;
@property(readonly, copy, nonatomic) NSArray *controls; // @dynamic controls;
@property(readonly, copy, nonatomic) NSArray *controlObjectIDs; // @dynamic controlObjectIDs;
@property(readonly, copy, nonatomic) NSArray *outputStreams; // @dynamic outputStreams;
@property(readonly, copy, nonatomic) NSArray *outputStreamObjectIDs; // @dynamic outputStreamObjectIDs;
@property(readonly, copy, nonatomic) NSArray *inputStreams; // @dynamic inputStreams;
@property(readonly, copy, nonatomic) NSArray *inputStreamObjectIDs; // @dynamic inputStreamObjectIDs;
@property(readonly, copy, nonatomic) NSArray *nominalSampleRates; // @dynamic nominalSampleRates;
@property(readonly, copy, nonatomic) NSArray *relatedDeviceObjectIDs; // @dynamic relatedDeviceObjectIDs;
@property(readonly, nonatomic) double actualSampleRate; // @dynamic actualSampleRate;
@property(nonatomic) float ioCycleUsage; // @dynamic ioCycleUsage;
@property(readonly, nonatomic) unsigned int maximumIOBufferFrameSize; // @dynamic maximumIOBufferFrameSize;
@property(readonly, nonatomic) unsigned int minimumIOBufferFrameSize; // @dynamic minimumIOBufferFrameSize;
@property(nonatomic) unsigned int ioBufferFrameSize; // @dynamic ioBufferFrameSize;
@property(readonly, nonatomic) unsigned int zeroTimestampPeriod; // @dynamic zeroTimestampPeriod;
@property(readonly, nonatomic) unsigned int outputSafetyOffset; // @dynamic outputSafetyOffset;
@property(readonly, nonatomic) unsigned int inputSafetyOffset; // @dynamic inputSafetyOffset;
@property(readonly, nonatomic) unsigned int outputLatency; // @dynamic outputLatency;
@property(readonly, nonatomic) unsigned int inputLatency; // @dynamic inputLatency;
@property(readonly, nonatomic, getter=isHidden) BOOL hidden; // @dynamic hidden;
@property(nonatomic) double nominalSampleRate; // @dynamic nominalSampleRate;
@property(readonly, nonatomic) BOOL canBeDefaultSystemDevice; // @dynamic canBeDefaultSystemDevice;
- (BOOL)defaultSystemDevice;
@property(readonly, nonatomic) BOOL canBeDefaultDevice; // @dynamic canBeDefaultDevice;
- (BOOL)defaultDevice;
@property(readonly, nonatomic, getter=isRunning) BOOL running; // @dynamic running;
@property(readonly, nonatomic, getter=isAlive) BOOL alive; // @dynamic alive;
@property(readonly, nonatomic) unsigned int clockDomain; // @dynamic clockDomain;
@property(readonly, nonatomic) unsigned int transportType; // @dynamic transportType;
@property(readonly, copy, nonatomic) NSString *modelUID; // @dynamic modelUID;
@property(readonly, copy, nonatomic) NSString *deviceUID; // @dynamic deviceUID;
@property(readonly, copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end
