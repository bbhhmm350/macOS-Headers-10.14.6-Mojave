//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPGaborFilter : NSObject
{
    struct Kernel **_filterBanks;
    int _numScales;
    int _numOrientations;
    int _num;
}

- (int)createGaborFilterKernel:(struct Kernel)arg1 sigmaX:(float)arg2 sigmaY:(float)arg3 lambda:(float)arg4 thetaInDegree:(float)arg5 phaseInDegree:(float)arg6;
- (int)processWithFilterScaleIdx:(int)arg1 orientIdx:(int)arg2 srcImage:(const float *)arg3 outImage:(float *)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6;
- (void)dealloc;
- (id)initWithNumberOfScales:(int)arg1 numOfOrientations:(int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;

@end
