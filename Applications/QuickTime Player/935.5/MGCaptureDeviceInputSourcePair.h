//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, NSString;

@interface MGCaptureDeviceInputSourcePair : NSObject
{
    AVCaptureDevice *_device;
    NSString *_inputSourceIdentifier;
}

+ (id)inputSourcePairWithDevice:(id)arg1 inputSourceIdentifier:(id)arg2;
@property(readonly, nonatomic) NSString *inputSourceIdentifier; // @synthesize inputSourceIdentifier=_inputSourceIdentifier;
@property(readonly, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName;
- (id)description;
- (id)init;
- (id)initWithDevice:(id)arg1 inputSourceIdentifier:(id)arg2;

@end
