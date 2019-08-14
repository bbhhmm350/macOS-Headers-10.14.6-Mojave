//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUAlarmTableViewCellDelegate-Protocol.h>

@class NSMapTable, NSString;
@protocol HUHomePodAlarmItemModuleControllerDelegate;

@interface HUHomePodAlarmItemModuleController : HUItemTableModuleController <HUAlarmTableViewCellDelegate>
{
    id <HUHomePodAlarmItemModuleControllerDelegate> _delegate;
    NSMapTable *_cellToItemMap;
}

@property(readonly, nonatomic) NSMapTable *cellToItemMap; // @synthesize cellToItemMap=_cellToItemMap;
@property(nonatomic) __weak id <HUHomePodAlarmItemModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setAlarmEnabled:(BOOL)arg1 forCell:(id)arg2;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
