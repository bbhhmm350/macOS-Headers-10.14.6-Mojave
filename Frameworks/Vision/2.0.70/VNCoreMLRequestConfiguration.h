//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface VNCoreMLRequestConfiguration : VNImageBasedRequestConfiguration
{
    unsigned long long _imageCropAndScaleOption;
    id <NSObject><NSCopying> _modelCachingIdentifier;
}

@property(copy, nonatomic) id <NSObject><NSCopying> modelCachingIdentifier; // @synthesize modelCachingIdentifier=_modelCachingIdentifier;
@property(nonatomic) unsigned long long imageCropAndScaleOption; // @synthesize imageCropAndScaleOption=_imageCropAndScaleOption;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithPropertiesOfModel:(id)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
