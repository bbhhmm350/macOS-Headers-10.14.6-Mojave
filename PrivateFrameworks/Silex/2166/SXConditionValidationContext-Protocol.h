//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString;

@protocol SXConditionValidationContext <NSObject>
@property(readonly, nonatomic, getter=isChannelSubscriber) BOOL channelSubscriber;
@property(readonly, nonatomic, getter=isBundleSubscriber) BOOL bundleSubscriber;
@property(readonly, nonatomic) unsigned long long viewingLocation;
@property(readonly, nonatomic) BOOL testing;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
@property(readonly, nonatomic) NSString *contentSizeCategory;
@property(readonly, nonatomic) long long verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass;
@property(readonly, nonatomic) struct CGSize viewportSize;
@end
