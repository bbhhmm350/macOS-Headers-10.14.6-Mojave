//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ImageScalingPolicy.h"

@interface CloudPhotoLibraryCompatibleImageScalingPolicy : ImageScalingPolicy
{
    long long _maximumPixelCount;
}

+ (id)policyWithMaximumPixelCount:(long long)arg1;
@property long long maximumPixelCount; // @synthesize maximumPixelCount=_maximumPixelCount;
- (double)scaleFactorForInputSize:(struct CGSize)arg1;
- (id)initWithMaximumPixelCount:(long long)arg1;

@end
