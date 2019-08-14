//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INCancelWorkoutIntentExport-Protocol.h>

@class INSpeakableString, NSString;

@interface INCancelWorkoutIntent : INIntent <INCancelWorkoutIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setWorkoutName:(id)arg1;
@property(readonly, copy) INSpeakableString *workoutName;
- (id)initWithWorkoutName:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
