//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPopoverDelegate-Protocol.h"
#import "PFWorkContextStatusUpdateReceiver-Protocol.h"

@class IPXGlobalProgressPopoverViewController, NSMutableArray, NSPopover, NSString;

@interface IPXGlobalProgressWatcher : NSObject <PFWorkContextStatusUpdateReceiver, NSPopoverDelegate>
{
    NSMutableArray *_taskViewControllers;
    NSMutableArray *_delegates;
    IPXGlobalProgressPopoverViewController *_popoverViewController;
    NSPopover *_popover;
    double _progressValue;
}

+ (void)initializeGlobalProgressWatcher;
@property double progressValue; // @synthesize progressValue=_progressValue;
- (void).cxx_destruct;
@property(readonly) unsigned long long taskCount;
- (void)_removeDelegate:(id)arg1;
- (void)_addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)progressTaskDidUpdateProgress:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)removedContext:(id)arg1;
- (void)updatedContext:(id)arg1;
- (void)addedContext:(id)arg1;
- (void)_togglePopoverForView:(id)arg1;
- (void)_showPopoverForView:(id)arg1;
- (id)_taskViewControllerForContext:(id)arg1;
- (void)_removePopoverItem:(id)arg1;
- (void)_addPopoverItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
