//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRAdUtilities : NSObject
{
}

+ (id)unloadedAdProxyFromBanner:(id)arg1;
+ (int)ADCreativeTypeForNFLAdType:(long long)arg1;
+ (struct CGSize)FRAdSizeForType:(long long)arg1 portrait:(BOOL)arg2;
+ (struct CGSize)FRAdSizePortraitForType:(long long)arg1;
+ (struct CGSize)FRAdSizeLandscapeForType:(long long)arg1;
+ (id)stringForNFLAdType:(long long)arg1;
+ (long long)NFLAdTypeForString:(id)arg1;
+ (long long)NFLAdTypeForAdSpaceDescription:(id)arg1;
+ (struct CGSize)boundsSizeForType:(long long)arg1;

@end
