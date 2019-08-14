//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol HFMediaProfileContainer;

@interface HFAccessorySettingAdapterManager : NSObject
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableDictionary *_adaptersByID;
}

@property(readonly, nonatomic) NSMutableDictionary *adaptersByID; // @synthesize adaptersByID=_adaptersByID;
@property(readonly, nonatomic) __weak id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
- (id)_createAdapterForIdentifier:(id)arg1;
- (id)adapterForIdentifier:(id)arg1;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1;

@end
