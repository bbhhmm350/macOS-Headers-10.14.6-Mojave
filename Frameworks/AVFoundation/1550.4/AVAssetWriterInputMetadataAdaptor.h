//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptorInternal;

@interface AVAssetWriterInputMetadataAdaptor : NSObject
{
    AVAssetWriterInputMetadataAdaptorInternal *_internal;
}

+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1;
+ (void)initialize;
- (BOOL)appendTimedMetadataGroup:(id)arg1;
@property(readonly, nonatomic) AVAssetWriterInput *assetWriterInput;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithAssetWriterInput:(id)arg1;
- (id)init;

@end
