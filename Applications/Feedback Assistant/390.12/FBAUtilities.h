//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAUtilities : NSObject
{
}

+ (id)bulletedListStringWithComponents:(id)arg1;
+ (BOOL)canAccessInternet;
+ (id)hardwareDictionary;
+ (long long)compareVersionString:(id)arg1 toVersionString:(id)arg2;
+ (long long)compareBuildString:(id)arg1 toBuildString:(id)arg2;
+ (id)uniquify:(id)arg1;
+ (BOOL)compressDirectoryAtPath:(id)arg1 destinationPath:(id)arg2;
+ (id)descriptionForArchitecture:(int)arg1;
+ (id)currentSystemBuild;
+ (int)currentSystemVersion;
+ (id)currentSystemVersionString;
+ (id)jsonSerializeObject:(id)arg1;
+ (id)tempUserDirectoryDatedWithName:(id)arg1;
+ (id)tempUserDirectory;

@end
