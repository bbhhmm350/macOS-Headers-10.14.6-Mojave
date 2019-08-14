//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLNoiseStrategy-Protocol.h>

@class NSString;

@interface PMLConstantNoiseStrategy : NSObject <PMLNoiseStrategy>
{
    int maxIterations;
    float _constantNoise;
}

@property(nonatomic) float constantNoise; // @synthesize constantNoise=_constantNoise;
@property int maxIterations; // @synthesize maxIterations;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (void)addNoiseToSparseMatrix:(id)arg1;
- (float)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(BOOL)arg2;
- (void)addNoiseToSparseVector:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
