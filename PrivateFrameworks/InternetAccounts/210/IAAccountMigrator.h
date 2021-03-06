//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray, NSMutableDictionary, NSMutableSet;

@interface IAAccountMigrator : NSObject
{
    ACAccountStore *_accountStore;
    NSMutableSet *_parentAccounts;
    NSMutableSet *_childAccounts;
    NSMutableDictionary *_migratedAccountUIDs;
    NSArray *_plugins;
}

- (void).cxx_destruct;
- (id)_validateAndLoadPlugin:(id)arg1;
- (id)_loadPlugins;
- (id)_makeAccountWithSettings:(id)arg1 pluginID:(id)arg2 uid:(id)arg3;
- (id)_bListAccountForDataPlugin:(id)arg1 withSettings:(id)arg2;
- (id)_handleIMAPForMailAndNotesForAccount:(id)arg1 withParent:(id)arg2 pluginID:(id)arg3;
- (id)_parentForAccount:(id)arg1 withSettings:(id)arg2 pluginIdentifier:(id)arg3 uid:(id)arg4 shouldSkip:(char *)arg5;
- (id)_defaultDomainForAccountTypeIdentifier:(id)arg1;
- (id)_providerIDForPluginID:(id)arg1;
- (id)_dataclassForPluginIdentifier:(id)arg1;
- (id)_acAccountTypeForProvider:(id)arg1;
- (void)_fetchParentAccounts;
- (id)migrateAccountWithSettings:(id)arg1 pluginID:(id)arg2;
- (void)_handleExchangeAccount:(id)arg1 withStoredAccount:(id)arg2 fromPlugin:(id)arg3 uid:(id)arg4;
- (void)_fetchMigratedAccountIdentifiers;
- (BOOL)runWithOSVersionDidIncrease:(BOOL)arg1;
- (id)init;

@end

