//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSplitViewController.h>

@class RemindersWindowController;

@interface RemindersSplitViewController : NSSplitViewController
{
    RemindersWindowController *_windowController;
}

@property __weak RemindersWindowController *windowController; // @synthesize windowController=_windowController;
- (void).cxx_destruct;
- (void)splitViewItem:(id)arg1 didChangeCollapsed:(BOOL)arg2 animated:(BOOL)arg3;

@end
