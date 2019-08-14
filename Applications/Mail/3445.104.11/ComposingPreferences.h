//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSMatrix, NSPopUpButton, NSTextField;

@interface ComposingPreferences : NSViewController
{
    BOOL _endEditingSimply;
    NSPopUpButton *_defaultFormatButton;
    NSButton *_alwaysCCMyselfSwitch;
    NSPopUpButton *_ccOrBccButton;
    NSButton *_replyUsingSameFormatSwitch;
    NSButton *_expandAliasesSwitch;
    NSButton *_useQuoteBarsSwitch;
    NSPopUpButton *_spellCheckingPopUpButton;
    NSButton *_replyQuotingSwitch;
    NSMatrix *_quotingBehaviorMatrix;
    NSTextField *_quotingBehaviorLabel;
    NSButton *_matchDomainsSwitch;
    NSTextField *_matchingDomainField;
    NSPopUpButton *_sendingAccountButton;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL endEditingSimply; // @synthesize endEditingSimply=_endEditingSimply;
@property(nonatomic) __weak NSPopUpButton *sendingAccountButton; // @synthesize sendingAccountButton=_sendingAccountButton;
@property(nonatomic) __weak NSTextField *matchingDomainField; // @synthesize matchingDomainField=_matchingDomainField;
@property(nonatomic) __weak NSButton *matchDomainsSwitch; // @synthesize matchDomainsSwitch=_matchDomainsSwitch;
@property(nonatomic) __weak NSTextField *quotingBehaviorLabel; // @synthesize quotingBehaviorLabel=_quotingBehaviorLabel;
@property(nonatomic) __weak NSMatrix *quotingBehaviorMatrix; // @synthesize quotingBehaviorMatrix=_quotingBehaviorMatrix;
@property(nonatomic) __weak NSButton *replyQuotingSwitch; // @synthesize replyQuotingSwitch=_replyQuotingSwitch;
@property(nonatomic) __weak NSPopUpButton *spellCheckingPopUpButton; // @synthesize spellCheckingPopUpButton=_spellCheckingPopUpButton;
@property(nonatomic) __weak NSButton *useQuoteBarsSwitch; // @synthesize useQuoteBarsSwitch=_useQuoteBarsSwitch;
@property(nonatomic) __weak NSButton *expandAliasesSwitch; // @synthesize expandAliasesSwitch=_expandAliasesSwitch;
@property(nonatomic) __weak NSButton *replyUsingSameFormatSwitch; // @synthesize replyUsingSameFormatSwitch=_replyUsingSameFormatSwitch;
@property(nonatomic) __weak NSPopUpButton *ccOrBccButton; // @synthesize ccOrBccButton=_ccOrBccButton;
@property(nonatomic) __weak NSButton *alwaysCCMyselfSwitch; // @synthesize alwaysCCMyselfSwitch=_alwaysCCMyselfSwitch;
@property(nonatomic) __weak NSPopUpButton *defaultFormatButton; // @synthesize defaultFormatButton=_defaultFormatButton;
- (void).cxx_destruct;
- (void)sendingAccountClicked:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)matchDomainsClicked:(id)arg1;
- (void)_setComposeMode:(long long)arg1;
- (void)defaultMessageFormatChanged:(id)arg1;
- (void)expandAliasesClicked:(id)arg1;
- (void)alwaysCCMyselfClicked:(id)arg1;
- (void)spellCheckingBehaviorChanged:(id)arg1;
- (void)quotingBehaviorChanged:(id)arg1;
- (void)replyQuotingBehaviorChanged:(id)arg1;
- (void)useQuoteBarsClicked:(id)arg1;
- (void)replyUsingSameFormatClicked:(id)arg1;
- (void)initializeFromDefaults;
- (void)_sizeToFitWithinSuperview:(id)arg1;
- (void)_postComposePreferencesChanged;
- (void)awakeFromNib;

@end
