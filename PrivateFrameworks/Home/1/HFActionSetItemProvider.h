//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, HMRoom, NSMutableSet;
@protocol HFCharacteristicValueSource;

@interface HFActionSetItemProvider : HFItemProvider
{
    BOOL _onlyShowsFavorites;
    HMHome *_home;
    HMRoom *_room;
    CDUnknownBlockType _filter;
    unsigned long long _actionSetItemStyle;
    NSMutableSet *_actionSetItems;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

@property(retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource; // @synthesize overrideValueSource=_overrideValueSource;
@property(retain, nonatomic) NSMutableSet *actionSetItems; // @synthesize actionSetItems=_actionSetItems;
@property(readonly, nonatomic) unsigned long long actionSetItemStyle; // @synthesize actionSetItemStyle=_actionSetItemStyle;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(nonatomic) BOOL onlyShowsFavorites; // @synthesize onlyShowsFavorites=_onlyShowsFavorites;
@property(retain, nonatomic) HMRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (CDUnknownBlockType)_favoriteFilter;
- (CDUnknownBlockType)_roomFilter;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1 actionSetItemStyle:(unsigned long long)arg2;
- (id)initWithHome:(id)arg1;

@end

