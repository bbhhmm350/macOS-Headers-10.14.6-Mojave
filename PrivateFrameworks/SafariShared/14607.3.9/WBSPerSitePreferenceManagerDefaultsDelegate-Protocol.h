//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@protocol WBSPerSitePreferenceManagerDefaultsDelegate <NSObject>
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(WBSPerSitePreference *)arg1;
- (long long)preferencesStoreKeyForPreference:(WBSPerSitePreference *)arg1;

@optional
- (void)getDefaultPreferenceValueIfNotCustomizedForPreference:(WBSPerSitePreference *)arg1 domain:(NSString *)arg2 completionHandler:(void (^)(id))arg3;
@end
