//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRGuide.h>

__attribute__((visibility("hidden")))
@interface SCRVerbosityRotorGuide : SCRGuide
{
}

- (long long)verbosityRotorItemIndexForEvent:(id)arg1 request:(id *)arg2 force:(BOOL)arg3;
- (BOOL)handlesEvents;
- (void)_handleVerbositySelectionEvent:(id)arg1;
- (void)informVerbosityRotorGuideOfNewSelection:(id)arg1;
- (void)close;
- (void)open;

@end
