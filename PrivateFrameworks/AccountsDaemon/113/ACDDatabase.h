//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStore, NSString;

@interface ACDDatabase : NSObject
{
    NSString *_path;
    NSManagedObjectContext *_context;
    NSPersistentStore *_store;
    id _contextDidSaveNotificationObserver;
}

+ (void)_resetPeristentStoreCoordinator;
+ (id)_optionsForOpeningPersistentStore;
+ (BOOL)_isUnrecoverableDatabaseError:(id)arg1;
+ (void)_removePersistentStoreAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
+ (void)_replacePersistentStoreAtURL:(id)arg1 withCleanStoreForCoordinator:(id)arg2;
+ (BOOL)_addPersistentStoreWithURL:(id)arg1 toStoreCoordinator:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
+ (id)_sharedPersistentCoordinatorForStoreAtPath:(id)arg1;
+ (id)_managedObjectModel;
+ (struct __CFString *)_copyRootPath;
+ (BOOL)_copyDatabaseAtPath:(id)arg1 toPath:(id)arg2;
+ (id)_lastAvailableDatabasePathWithRootPath:(id)arg1;
+ (id)defaultPath;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)_createLocalBackupCopy:(id *)arg1;
- (id)_localBackupStorePath;
- (id)_localBackupDirectoryURL;
- (id)_localBackupDirectoryPath;
- (void)_handleManagedObjectContextDidSaveNotification:(id)arg1;
- (BOOL)_databaseFileExists;
- (id)_store;
- (void)_setupManagedObjectContext;
- (BOOL)saveWithError:(id *)arg1 rollbackOnFailure:(BOOL)arg2;
- (BOOL)saveWithError:(id *)arg1;
- (id)managedObjectIDForURI:(id)arg1;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)existingObjectWithURI:(id)arg1;
- (id)objectForObjectURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1;
@property long long keychainVersion;
@property long long version; // @dynamic version;
@property(readonly) NSManagedObjectContext *managedObjectContext; // @dynamic managedObjectContext;
- (void)dealloc;
- (id)initWithTimeMachineHomeFolderPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithDefaultPath;

@end
