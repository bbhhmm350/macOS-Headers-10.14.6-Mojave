//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalTools/MTLCommandEncoder-Protocol.h>

@protocol MTLBuffer, MTLFence, MTLMotionEstimationPipeline, MTLTexture;

@protocol MTLVideoCommandEncoderSPI <MTLCommandEncoder>
- (void)updateFence:(id <MTLFence>)arg1;
- (void)waitForFence:(id <MTLFence>)arg1;
- (void)generateMotionVectorsForTexture:(id <MTLTexture>)arg1 previousTexture:(id <MTLTexture>)arg2 resultBuffer:(id <MTLBuffer>)arg3 bufferOffset:(unsigned long long)arg4;
- (void)setMotionEstimationPipeline:(id <MTLMotionEstimationPipeline>)arg1;
@end

