//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

@class NSPopUpButton, NSTextField, TBulkRenameController;

@interface TBulkRenameFormatterController : TViewController
{
    NSPopUpButton *_formatterSwitcherBtn;
    NSTextField *_firstTextField;
    TBulkRenameController *_parentController;
}

- (void)configureFormatterMenu:(id)arg1;
- (id)reformat:(id)arg1 row:(unsigned long long)arg2;
- (void)formatterChanged:(id)arg1;
- (void)updateUI;
- (long long)customIndex;
- (_Bool)resetCounterForEachFile;
- (_Bool)allowRename;
- (id)displayName;
- (int)formatterType;
- (void)setParentController:(id)arg1;
- (id)firstTextField;
- (void)aboutToTearDown;

@end
