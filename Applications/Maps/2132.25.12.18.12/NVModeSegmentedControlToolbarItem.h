//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NVToolbarItem.h"

@class NSMenuItem, NSSegmentedControl;

__attribute__((visibility("hidden")))
@interface NVModeSegmentedControlToolbarItem : NVToolbarItem
{
    NSMenuItem *_modeMenuItem;
    NSSegmentedControl *_modeSegmentedControl;
}

+ (double)maximumLabelWidthInCurrentLocale;
@property(retain, nonatomic) NSSegmentedControl *modeSegmentedControl; // @synthesize modeSegmentedControl=_modeSegmentedControl;
- (void).cxx_destruct;
- (id)menuFormRepresentation;
- (id)initWithItemIdentifier:(id)arg1;

@end
