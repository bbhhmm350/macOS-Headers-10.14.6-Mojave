//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VTUtteranceMetadataManager : NSObject
{
}

+ (id)recordedTimeStampOfFile:(id)arg1;
+ (BOOL)isUtteranceImplicitlyTrained:(id)arg1;
+ (void)_upgradeUtteranceMeta:(id)arg1;
+ (BOOL)_audioDirectoryNeedsUpgrade:(id)arg1;
+ (void)_upgradeLocaleDirectoryIfNecessary:(id)arg1;
+ (void)_saveMetaVersionFileAtPath:(id)arg1;
+ (void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)arg1;
+ (void)saveMetaVersionFileAtSATAudioDirectory:(id)arg1;
+ (void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2;
+ (id)_getBaseMetaDictionaryForUtterancePath:(id)arg1;
+ (void)saveUtteranceMetadataForUtterance:(id)arg1 isExplicitEnrollment:(BOOL)arg2 isHandheldEnrollment:(BOOL)arg3 withBiometricResult:(unsigned long long)arg4;

@end

