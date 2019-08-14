//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface IPXExternalEditSettings : PXSettings
{
    BOOL _debugUserNotificationsEnabled;
    BOOL _searchForRAWInAdditionToFallbackTypes;
    BOOL _searchForHEIFInAdditionToFallbackTypes;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) BOOL searchForHEIFInAdditionToFallbackTypes; // @synthesize searchForHEIFInAdditionToFallbackTypes=_searchForHEIFInAdditionToFallbackTypes;
@property(nonatomic) BOOL searchForRAWInAdditionToFallbackTypes; // @synthesize searchForRAWInAdditionToFallbackTypes=_searchForRAWInAdditionToFallbackTypes;
@property(nonatomic) BOOL debugUserNotificationsEnabled; // @synthesize debugUserNotificationsEnabled=_debugUserNotificationsEnabled;
- (void)setDefaultValues;
- (id)parentSettings;

@end
