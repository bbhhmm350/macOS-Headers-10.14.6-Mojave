//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MigrationMacBuddyViewController.h"

@class NSProgressIndicator, NSTextField, SMMigrationProgressViewController;

@interface MigrationProgressController : MigrationMacBuddyViewController
{
    NSProgressIndicator *progressBar;
    NSTextField *currentItemTextField;
    NSTextField *timeRemainingTextField;
    BOOL _nonUserInitatedForwardAction;
    SMMigrationProgressViewController *_progressViewController;
}

@property BOOL nonUserInitatedForwardAction; // @synthesize nonUserInitatedForwardAction=_nonUserInitatedForwardAction;
@property(retain) SMMigrationProgressViewController *progressViewController; // @synthesize progressViewController=_progressViewController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)migrationRequestCompletedState:(unsigned long long)arg1 advancingTo:(unsigned long long)arg2 withErrorsAndWarnings:(id)arg3;
- (void)_deregisterObservers;
- (void)sizeErrorPanelDidEnd:(BOOL)arg1;
- (void)_displayFatalSizeErrorSheet;
- (void)_displaySizeErrorSheet;
- (void)backwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)alternatePaneWithHandler:(CDUnknownBlockType)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (void)awakeFromNib;
- (id)init;
- (id)previousViewIdentifier;
- (id)nextViewIdentifier;

@end
