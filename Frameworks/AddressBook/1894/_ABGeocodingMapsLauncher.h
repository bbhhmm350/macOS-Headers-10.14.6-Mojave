//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABMapsLauncher.h>

@class CLGeocoder;

@interface _ABGeocodingMapsLauncher : ABMapsLauncher
{
    CLGeocoder *_geocoder;
}

@property(readonly, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
- (void).cxx_destruct;
- (id)launchOptionsWithDirections:(BOOL)arg1;
- (void)launchMapsShowingPlacemarks:(id)arg1;
- (void)showPlacemarks:(id)arg1;
- (void)launchMaps;
- (id)initWithLaunchRequest:(id)arg1 nextLauncher:(id)arg2;

@end
