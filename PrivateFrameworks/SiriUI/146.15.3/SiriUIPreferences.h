//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriUIPreferences : NSObject
{
}

+ (id)sharedPreferences;
- (void)setupAssistantSetSiriEnabled:(BOOL)arg1;
- (void)setLanguageCode:(id)arg1;
- (BOOL)shouldSkipBuddy;
- (BOOL)suitableMicrophoneExists;

@end
