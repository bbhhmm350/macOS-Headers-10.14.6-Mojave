//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXContextualMemoriesSetting-Protocol.h>

@class NSArray, NSString;

@interface PXContextualMemoriesPeopleSetting : NSObject <PXContextualMemoriesSetting>
{
    NSArray *_peopleNames;
}

@property(retain, nonatomic) NSArray *peopleNames; // @synthesize peopleNames=_peopleNames;
- (void).cxx_destruct;
- (void)requestPeopleNamesUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetToDefault;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *headerTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end
