//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class MIKMLWindowController, NSArray;

@protocol MIKMLWindowControllerDelegate
- (void)KMLWindowController:(MIKMLWindowController *)arg1 wantsRegionVisible:(CDStruct_02837cd9)arg2;
- (void)KMLWindowController:(MIKMLWindowController *)arg1 removeOverlays:(NSArray *)arg2;
- (void)KMLWindowController:(MIKMLWindowController *)arg1 displayOverlays:(NSArray *)arg2;
- (void)KMLWindowController:(MIKMLWindowController *)arg1 removeAnnotations:(NSArray *)arg2;
- (void)KMLWindowController:(MIKMLWindowController *)arg1 displayAnnotations:(NSArray *)arg2;
@end
