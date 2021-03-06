//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface AMSMetricsBatch : NSObject
{
    ACAccount *_account;
    NSURL *_reportURL;
    NSArray *_events;
    NSArray *_eventDictionaries;
    NSArray *_blacklistedEvents;
}

@property(retain) NSArray *blacklistedEvents; // @synthesize blacklistedEvents=_blacklistedEvents;
@property(retain) NSArray *eventDictionaries; // @synthesize eventDictionaries=_eventDictionaries;
@property(retain) NSArray *events; // @synthesize events=_events;
@property(retain) NSURL *reportURL; // @synthesize reportURL=_reportURL;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;

@end

