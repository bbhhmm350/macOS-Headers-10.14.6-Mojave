//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUIconContentView.h>

@class HFPrimaryStateIconDescriptor, UIImageView;

@interface HUWaterDropletIconContentView : HUIconContentView
{
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) HFPrimaryStateIconDescriptor *iconDescriptor; // @dynamic iconDescriptor;

@end
