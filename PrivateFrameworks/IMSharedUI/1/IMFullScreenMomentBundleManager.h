//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface IMFullScreenMomentBundleManager : NSObject
{
    NSMutableDictionary *_fullScreenMomentBundles;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)hasFullScreenMomentForIdentifier:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)fullScreenMomentForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *fullScreenMomentBundles; // @dynamic fullScreenMomentBundles;
- (void)_loadFSMBundlesAtPath:(id)arg1 intoDictionary:(id)arg2;
- (id)init;

@end

