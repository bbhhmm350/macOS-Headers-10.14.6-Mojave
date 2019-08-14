//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL, PLPhotoLibraryPathManager;

@interface PLAppPrivateData : NSObject
{
    NSMutableDictionary *_backingDictionary;
    NSURL *_libraryURL;
    PLPhotoLibraryPathManager *_pathManager;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)appPrivateDataForLibraryURL:(id)arg1;
@property(retain) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property(retain) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
@property(retain) NSMutableDictionary *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
- (void).cxx_destruct;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (id)allKeys;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)_recursiveCreateSubDictionariesIfMissing:(id)arg1 index:(unsigned long long)arg2 parentDictionary:(id)arg3;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)_appPrivateDataFolderURL;
- (void)_readFromFilesystem;
- (void)_saveToFilesystem;
- (id)_dictionaryStorageURL;
- (id)debugDescription;
- (id)initWithLibraryURL:(id)arg1;

@end
