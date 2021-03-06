//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DMManager;

@interface TMDiskArbiter : NSObject
{
    struct __DASession *_daSession;
    DMManager *_dmManager;
}

- (BOOL)isDevicePresent:(id)arg1;
- (BOOL)_performSynchronousOperation:(unsigned int)arg1 withDisk:(struct __DADisk *)arg2 options:(unsigned int)arg3 diskInfo:(out id *)arg4 error:(out id *)arg5;
- (BOOL)ejectDisk:(struct __DADisk *)arg1 error:(out id *)arg2;
- (BOOL)unmountDisk:(struct __DADisk *)arg1 force:(BOOL)arg2 error:(out id *)arg3;
- (BOOL)unmountDisk:(struct __DADisk *)arg1 error:(out id *)arg2;
- (id)mountDisk:(struct __DADisk *)arg1 error:(out id *)arg2;
- (struct __DADisk *)copyDiskForDevice:(id)arg1;
- (id)manager;
- (void)dealloc;
- (id)init;

@end

