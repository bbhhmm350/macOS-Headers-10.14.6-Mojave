//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMSandboxTools : NSObject
{
}

+ (void)cleanupSandboxForSystem:(id)arg1 atPath:(id)arg2 sandBoxPath:(id)arg3;
+ (BOOL)shoveSandboxAtPath:(id)arg1 sandBoxPath:(id)arg2 destinationPath:(id)arg3 error:(id *)arg4;
+ (void)clearExistingBundleOnTarget:(id)arg1;
+ (BOOL)shoveSandboxAtPath:(id)arg1 sandBoxPath:(id)arg2 error:(id *)arg3;
+ (BOOL)prepareSandboxForSystem:(id)arg1 atPath:(id)arg2 sandBoxPath:(id)arg3;
+ (id)sandboxPathWithName:(id)arg1;
+ (id)sandboxPath;
+ (id)_dhsafeTemporaryDirectory;
+ (void)removeSandboxAtURL:(id)arg1;

@end
