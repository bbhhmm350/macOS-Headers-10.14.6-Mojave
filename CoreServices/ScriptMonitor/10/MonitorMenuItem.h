//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSMenuItem.h>

@class NSArray, NSButton, NSString;

@interface MonitorMenuItem : NSMenuItem
{
    NSButton *__stopButton;
    NSArray *_nibTopLevelObjects;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain) NSArray *nibTopLevelObjects; // @synthesize nibTopLevelObjects=_nibTopLevelObjects;
@property __weak NSButton *_stopButton; // @synthesize _stopButton=__stopButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) double fractionCompleted;
@property(readonly, nonatomic) BOOL isIndeterminate;
@property(readonly, nonatomic) long long runningState;
- (id)title;
- (void)setTarget:(id)arg1;
- (id)initWithProgress:(id)arg1;

@end
