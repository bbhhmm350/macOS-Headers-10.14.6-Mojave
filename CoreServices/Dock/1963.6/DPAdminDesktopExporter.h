//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface DPAdminDesktopExporter : NSObject
{
    NSObject<OS_dispatch_source> *_source;
    unsigned int _widToCapture;
    float _scale;
    _Bool _secondary;
    char _uuidString[37];
}

- (void).cxx_destruct;
- (void)_export;
- (void)exportWindow:(unsigned int)arg1 scale:(float)arg2;
- (void)dealloc;
- (id)init:(unsigned char [16])arg1;

@end
