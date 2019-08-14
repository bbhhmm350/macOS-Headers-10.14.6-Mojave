//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ImageCaptureCore/ICScannerFeature.h>

@interface ICScannerFeatureRange : ICScannerFeature
{
    id _rvProps;
}

- (id)description;
- (id)oldAndNewSettings:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (double)getValidatedValue:(double)arg1;
@property double currentValue;
@property(readonly) double stepSize;
@property(readonly) double maxValue;
@property(readonly) double minValue;
@property(readonly) double defaultValue;

@end
