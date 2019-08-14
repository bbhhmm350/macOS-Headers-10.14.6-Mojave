//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFTriggerBuilder.h>

@class HFEventBuilder, NSSet;
@protocol HFLocationEventBuilder;

@interface HFLocationTriggerBuilder : HFTriggerBuilder
{
    HFEventBuilder<HFLocationEventBuilder> *_eventBuilder;
    NSSet *_stagedEvents;
}

+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) NSSet *stagedEvents; // @synthesize stagedEvents=_stagedEvents;
@property(retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *eventBuilder; // @synthesize eventBuilder=_eventBuilder;
- (void).cxx_destruct;
- (id)_performValidation;
- (id)_updateEvents;
- (id)_allActionSets;
- (BOOL)requiresFMFDeviceToRun;
- (BOOL)requiresLocationServicesAuthorization;
- (BOOL)secureActionsRequireConfirmationToRun;
- (BOOL)requiresConfirmationToRun;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)commitEditTrigger;
- (id)commitCreateTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (BOOL)supportsEndEvents;
- (BOOL)supportsConditions;

@end
