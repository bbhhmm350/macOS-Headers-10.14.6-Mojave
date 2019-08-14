//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

#import <AccountsUI/ACUIAccountDataclassDelegate-Protocol.h>
#import <AccountsUI/ACUIAccountInfoViewControllerAccountSyncDelegate-Protocol.h>

@class ACUIAccountDetailsViewController, ACUICredentialPromptViewController, NSButton, NSProgressIndicator, NSStackView, NSString, NSTextField, NSView;

@interface ACUIAccountInfoViewController : ACUIViewController <ACUIAccountDataclassDelegate, ACUIAccountInfoViewControllerAccountSyncDelegate>
{
    NSString *_password;
    NSView *_dataclassesTableView;
    NSButton *_helpButton;
    NSView *_headerLogo;
    NSView *_headerLogoWithDetails;
    NSView *_headerLogoWithDetailsNoFullName;
    NSView *_headerGenericAccount;
    NSView *_enableAccountView;
    NSTextField *_descriptionField;
    NSTextField *_fullNameField;
    NSView *_dataclassesTableViewWithPadding;
    NSProgressIndicator *_spinner;
    ACUIAccountDetailsViewController *_accountDetailsVC;
    ACUICredentialPromptViewController *_credentialPromptVC;
}

@property(retain) ACUICredentialPromptViewController *credentialPromptVC; // @synthesize credentialPromptVC=_credentialPromptVC;
@property(retain) ACUIAccountDetailsViewController *accountDetailsVC; // @synthesize accountDetailsVC=_accountDetailsVC;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain) NSView *dataclassesTableViewWithPadding; // @synthesize dataclassesTableViewWithPadding=_dataclassesTableViewWithPadding;
@property(retain) NSTextField *fullNameField; // @synthesize fullNameField=_fullNameField;
@property(retain) NSTextField *descriptionField; // @synthesize descriptionField=_descriptionField;
@property(retain) NSView *enableAccountView; // @synthesize enableAccountView=_enableAccountView;
@property(retain) NSView *headerGenericAccount; // @synthesize headerGenericAccount=_headerGenericAccount;
@property(retain) NSView *headerLogoWithDetailsNoFullName; // @synthesize headerLogoWithDetailsNoFullName=_headerLogoWithDetailsNoFullName;
@property(retain) NSView *headerLogoWithDetails; // @synthesize headerLogoWithDetails=_headerLogoWithDetails;
@property(retain) NSView *headerLogo; // @synthesize headerLogo=_headerLogo;
@property(retain) NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain) NSView *dataclassesTableView; // @synthesize dataclassesTableView=_dataclassesTableView;
@property(retain) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (void)saveAccountFailedWithError:(id)arg1;
- (void)saveAccountSucceeded;
- (void)didUpdatePassword:(id)arg1;
- (void)detailsButtonClicked:(id)arg1;
- (void)constructViewStack;
- (void)addUseWithDataclassSlice;
- (void)addEmailAddressSlice;
- (void)addFullNameSlice;
- (void)addPasswordSlice;
- (void)addDescriptionSlice;
- (void)addUserNameSliceWithLabel:(id)arg1;
- (void)addEnableThisAccountSlice;
- (void)addDataClassesConfigurationSlice;
- (void)addHeaderGenericAccountSlice;
- (void)addHeaderLogoWithDetailsSlice;
- (void)addHeaderLogoSlice;
- (void)saveAccountWithoutVerification:(id)arg1;
- (BOOL)willToggleDataclass:(id)arg1;
- (void)didToggleDataclass:(id)arg1;
- (void)viewDidAppear;
- (void)_verifyCredentialAndPromptIfNeeded:(CDUnknownBlockType)arg1;
- (void)turnOnAfterVerification;
- (id)nibName;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) NSStackView *view; // @dynamic view;

@end
