//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFAccessorySettingsEntity, NAFuture;

@protocol HFAccessorySettingAdapterButtonHandling <NSObject>
- (NAFuture *)inProgressButtonPressFutureForEntity:(HFAccessorySettingsEntity *)arg1;
- (BOOL)supportButtonPressForEntity:(HFAccessorySettingsEntity *)arg1;
- (NAFuture *)handleButtonPressForEntity:(HFAccessorySettingsEntity *)arg1;
@end
