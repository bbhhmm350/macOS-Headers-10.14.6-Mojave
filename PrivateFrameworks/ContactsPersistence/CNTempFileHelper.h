//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNTempFileHelper : NSObject
{
}

+ (BOOL)copyDatabaseAtURL:(id)arg1 toUrl:(id)arg2 withCoordinator:(id)arg3 error:(id *)arg4;
+ (id)standardizedPathForPath:(id)arg1;
+ (id)createHashedMigrationDirectoryForDatabasePath:(id)arg1 error:(id *)arg2;
+ (id)temporaryDatabaseUrlForDatabasePath:(id)arg1 error:(id *)arg2;
+ (id)temporaryTimeMachineDirectory;
+ (id)temporaryDatabaseUrlByCopyingDatabaseAtPath:(id)arg1 withCoordinator:(id)arg2 error:(id *)arg3;

@end
