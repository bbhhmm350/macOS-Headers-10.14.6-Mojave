//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPVideoKeyFrameResult;

@interface VCPMovieHighlightResult : NSObject
{
    float _score;
    VCPVideoKeyFrameResult *_keyFrame;
    CDStruct_e83c9415 _timerange;
}

@property(readonly, nonatomic) VCPVideoKeyFrameResult *keyFrame; // @synthesize keyFrame=_keyFrame;
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) CDStruct_e83c9415 timerange; // @synthesize timerange=_timerange;
- (void).cxx_destruct;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 score:(float)arg2 andKeyFrame:(id)arg3;

@end
