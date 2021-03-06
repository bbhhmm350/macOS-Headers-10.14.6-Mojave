//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Weather/TWCCityUpdater.h>

@class CLGeocoder, City;

@interface TWCLocationUpdater : TWCCityUpdater
{
    City *_currentCity;
    CLGeocoder *_reverseGeocoder;
}

+ (id)sharedLocationUpdater;
@property(retain, nonatomic) CLGeocoder *reverseGeocoder; // @synthesize reverseGeocoder=_reverseGeocoder;
@property(retain, nonatomic) City *currentCity; // @synthesize currentCity=_currentCity;
- (void).cxx_destruct;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_completeReverseGeocodeForLocation:(id)arg1 currentCity:(id)arg2 geocodeError:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_geocodeLocation:(id)arg1 currentCity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateWeatherForLocation:(id)arg1 city:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2;
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2 isFromFrameworkClient:(BOOL)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)updateWeatherForCity:(id)arg1;
- (void)enableProgressIndicator:(BOOL)arg1;
- (void)parsedResultCity:(id)arg1;
- (void)dealloc;
- (id)init;

@end

