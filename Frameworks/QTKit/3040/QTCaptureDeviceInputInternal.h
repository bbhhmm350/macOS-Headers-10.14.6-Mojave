//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, QTCaptureDevice, QTMediaIOGraphUnitDescription;

__attribute__((visibility("hidden")))
@interface QTCaptureDeviceInputInternal : NSObject
{
    QTCaptureDevice *_device;
    NSArray *_connections;
    QTMediaIOGraphUnitDescription *_deviceInputUnitDescription;
    QTMediaIOGraphUnitDescription *_demuxUnitDescription;
    unsigned long long _unitUseCount;
    BOOL _ready;
    BOOL automaticallyConfiguresDevice;
}

@end
