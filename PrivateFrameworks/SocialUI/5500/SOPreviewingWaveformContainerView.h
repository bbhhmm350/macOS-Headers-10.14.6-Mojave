//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SocialUI/SOAbstractWaveFormView.h>

@class NSTextField, SOPreviewingWaveformView;

@interface SOPreviewingWaveformContainerView : SOAbstractWaveFormView
{
    SOPreviewingWaveformView *_waveformView;
    NSTextField *_timeStamp;
}

@property(retain, nonatomic) NSTextField *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) SOPreviewingWaveformView *waveformView; // @synthesize waveformView=_waveformView;
- (void).cxx_destruct;
- (void)clearWaveform;
- (void)setTime:(double)arg1;
- (void)setWaveformImage:(id)arg1;

@end

