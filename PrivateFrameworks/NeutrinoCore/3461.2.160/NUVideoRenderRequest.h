//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@class NUColorSpace;
@protocol NUScalePolicy;

@interface NUVideoRenderRequest : NURenderRequest
{
    NUColorSpace *_colorSpace;
    id <NUScalePolicy> _scalePolicy;
}

@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;

@end
