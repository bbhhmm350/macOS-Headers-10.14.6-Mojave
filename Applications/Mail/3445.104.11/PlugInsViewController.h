//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"
#import "TerminationHandler-Protocol.h"

@class NSArray, NSButton, NSMutableSet, NSProgressIndicator, NSString, NSTableView, NSTextField;

@interface PlugInsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSUserInterfaceValidations, TerminationHandler>
{
    NSArray *_bundles;
    NSMutableSet *_bundlesToUninstall;
    NSMutableSet *_bundlesToInstall;
    NSTableView *_tableView;
    NSButton *_applyButton;
    NSButton *_cancelButton;
    NSTextField *_progressLabel;
    NSProgressIndicator *_progressIndicator;
}

@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSTextField *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSButton *applyButton; // @synthesize applyButton=_applyButton;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_updateApplyButton;
- (void)_showInFinder:(id)arg1;
- (void)_applyAndReopenMail:(id)arg1;
- (void)setState:(long long)arg1 forBundle:(id)arg2;
- (void)viewDidDisappear;
- (void)viewWillAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
