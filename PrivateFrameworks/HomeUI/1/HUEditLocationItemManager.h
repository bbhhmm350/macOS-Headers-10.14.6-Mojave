//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFHomeBuilder, HFItem, HFResidentDeviceItemProvider, HUUserNotificationTopicListModule;

@interface HUEditLocationItemManager : HFItemManager
{
    HUUserNotificationTopicListModule *_notificationSettingsModule;
    HFItem *_nameItem;
    HFItem *_usersItem;
    HFItem *_inviteUsersItem;
    HFItem *_wallpaperPickerItem;
    HFItem *_cameraItem;
    HFItem *_chooseWallpaperItem;
    HFItem *_wallpaperThumbnailItem;
    HFItem *_detailNotesItem;
    HFItem *_softwareUpdateItem;
    HFItem *_accessControlItem;
    HFItem *_removeItem;
    unsigned long long _context;
    HFResidentDeviceItemProvider *_residentDeviceItemProvider;
    HFHomeBuilder *_homeBuilder;
}

+ (CDUnknownBlockType)residentDeviceItemComparator;
@property(retain, nonatomic) HFHomeBuilder *homeBuilder; // @synthesize homeBuilder=_homeBuilder;
@property(retain, nonatomic) HFResidentDeviceItemProvider *residentDeviceItemProvider; // @synthesize residentDeviceItemProvider=_residentDeviceItemProvider;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(retain, nonatomic) HFItem *removeItem; // @synthesize removeItem=_removeItem;
@property(retain, nonatomic) HFItem *accessControlItem; // @synthesize accessControlItem=_accessControlItem;
@property(retain, nonatomic) HFItem *softwareUpdateItem; // @synthesize softwareUpdateItem=_softwareUpdateItem;
@property(retain, nonatomic) HFItem *detailNotesItem; // @synthesize detailNotesItem=_detailNotesItem;
@property(retain, nonatomic) HFItem *wallpaperThumbnailItem; // @synthesize wallpaperThumbnailItem=_wallpaperThumbnailItem;
@property(retain, nonatomic) HFItem *chooseWallpaperItem; // @synthesize chooseWallpaperItem=_chooseWallpaperItem;
@property(retain, nonatomic) HFItem *cameraItem; // @synthesize cameraItem=_cameraItem;
@property(retain, nonatomic) HFItem *wallpaperPickerItem; // @synthesize wallpaperPickerItem=_wallpaperPickerItem;
@property(retain, nonatomic) HFItem *inviteUsersItem; // @synthesize inviteUsersItem=_inviteUsersItem;
@property(retain, nonatomic) HFItem *usersItem; // @synthesize usersItem=_usersItem;
@property(retain, nonatomic) HFItem *nameItem; // @synthesize nameItem=_nameItem;
@property(retain, nonatomic) HUUserNotificationTopicListModule *notificationSettingsModule; // @synthesize notificationSettingsModule=_notificationSettingsModule;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_homeFuture;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2 context:(unsigned long long)arg3;

@end

