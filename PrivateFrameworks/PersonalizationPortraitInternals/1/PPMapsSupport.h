//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPMapsSupport : NSObject
{
}

+ (BOOL)harvestMapItem:(id)arg1 documentIdentifier:(id)arg2 groupIdentifier:(id)arg3 includingPostalAddress:(BOOL)arg4 error:(id *)arg5;
+ (void)_clearMapsFavorites;
+ (void)importMapsData;
+ (id)favoritesContainer;

@end

