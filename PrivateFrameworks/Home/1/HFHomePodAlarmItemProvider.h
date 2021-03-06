//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFAccessorySettingMobileTimerAdapter, NSMutableDictionary, NSMutableSet;
@protocol HFHomePodAlarmItemProviderDelegate, HFMediaProfileContainer;

@interface HFHomePodAlarmItemProvider : HFItemProvider
{
    HFAccessorySettingMobileTimerAdapter *_mobileTimerAdapter;
    id <HFHomePodAlarmItemProviderDelegate> _delegate;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableDictionary *_alarmIDToItemMap;
    NSMutableSet *_alarmItems;
}

@property(readonly, nonatomic) NSMutableSet *alarmItems; // @synthesize alarmItems=_alarmItems;
@property(readonly, nonatomic) NSMutableDictionary *alarmIDToItemMap; // @synthesize alarmIDToItemMap=_alarmIDToItemMap;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property(nonatomic) __weak id <HFHomePodAlarmItemProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter; // @synthesize mobileTimerAdapter=_mobileTimerAdapter;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)items;
- (id)initWithMediaProfileContainer:(id)arg1;

@end

