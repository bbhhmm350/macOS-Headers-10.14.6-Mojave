//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SocialUI/SOChatViewController.h>

#import <SocialUI/NSTableViewDataSource-Protocol.h>
#import <SocialUI/NSTableViewDelegate-Protocol.h>
#import <SocialUI/SOAttachmentsTabViewControllerDelegate-Protocol.h>

@class NSButton, NSLayoutConstraint, NSStackView, NSString, NSTableView, NSTextField, NSView, SOAddRecipientFieldViewController, SOAttachmentsTabViewController, SOCKDownloadPurgedAttachmentsView, SOHandleMenuController, SOMapViewController;

@interface SOChatDetailsViewController : SOChatViewController <NSTableViewDataSource, NSTableViewDelegate, SOAttachmentsTabViewControllerDelegate>
{
    BOOL _hasUpdatedAttachments;
    BOOL _didCacheIsCurrentlyDownloadingCheck;
    BOOL _cachedValueForCurrentlyDownloadingCheck;
    BOOL _didCacheAttachmentCount;
    NSStackView *_stackView;
    NSLayoutConstraint *_preferredScrollViewHeightConstraint;
    NSLayoutConstraint *_maximumScrollViewHeightConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSView *_titleTextFieldContainer;
    NSTextField *_titleTextField;
    NSView *_titleSeparatorView;
    NSView *_mapViewContainer;
    SOMapViewController *_mapViewController;
    NSStackView *_multiwayButtonsAndGroupNameContainer;
    NSView *_participantLabelContainer;
    NSTextField *_participantLabel;
    NSTableView *_participantTableView;
    NSLayoutConstraint *_participantTableHeightConstraint;
    SOHandleMenuController *_handleMenuController;
    NSView *_addRecipientContainer;
    SOAddRecipientFieldViewController *_addRecipientFieldViewController;
    NSButton *_muteUnmuteButton;
    NSView *_enableReadReceiptContainer;
    NSButton *_enableDisableReadReceiptButton;
    NSView *_leaveContainer;
    NSButton *_leaveButton;
    NSStackView *_attachmentsContainer;
    SOAttachmentsTabViewController *_attachmentsTabViewController;
    NSView *_attachmentsSeparator;
    NSLayoutConstraint *_tabViewControllerViewHeightConstraint;
    unsigned long long _cachedValueForAttachmentCount;
    SOCKDownloadPurgedAttachmentsView *_downloadAttachmentsView;
}

@property(retain, nonatomic) SOCKDownloadPurgedAttachmentsView *downloadAttachmentsView; // @synthesize downloadAttachmentsView=_downloadAttachmentsView;
@property(nonatomic) unsigned long long cachedValueForAttachmentCount; // @synthesize cachedValueForAttachmentCount=_cachedValueForAttachmentCount;
@property(nonatomic) BOOL didCacheAttachmentCount; // @synthesize didCacheAttachmentCount=_didCacheAttachmentCount;
@property(nonatomic) BOOL cachedValueForCurrentlyDownloadingCheck; // @synthesize cachedValueForCurrentlyDownloadingCheck=_cachedValueForCurrentlyDownloadingCheck;
@property(nonatomic) BOOL didCacheIsCurrentlyDownloadingCheck; // @synthesize didCacheIsCurrentlyDownloadingCheck=_didCacheIsCurrentlyDownloadingCheck;
@property BOOL hasUpdatedAttachments; // @synthesize hasUpdatedAttachments=_hasUpdatedAttachments;
@property(retain) NSLayoutConstraint *tabViewControllerViewHeightConstraint; // @synthesize tabViewControllerViewHeightConstraint=_tabViewControllerViewHeightConstraint;
@property(retain) NSView *attachmentsSeparator; // @synthesize attachmentsSeparator=_attachmentsSeparator;
@property(retain) SOAttachmentsTabViewController *attachmentsTabViewController; // @synthesize attachmentsTabViewController=_attachmentsTabViewController;
@property(retain) NSStackView *attachmentsContainer; // @synthesize attachmentsContainer=_attachmentsContainer;
@property(retain) NSButton *leaveButton; // @synthesize leaveButton=_leaveButton;
@property(retain, nonatomic) NSView *leaveContainer; // @synthesize leaveContainer=_leaveContainer;
@property(retain) NSButton *enableDisableReadReceiptButton; // @synthesize enableDisableReadReceiptButton=_enableDisableReadReceiptButton;
@property(retain) NSView *enableReadReceiptContainer; // @synthesize enableReadReceiptContainer=_enableReadReceiptContainer;
@property(retain) NSButton *muteUnmuteButton; // @synthesize muteUnmuteButton=_muteUnmuteButton;
@property(retain) SOAddRecipientFieldViewController *addRecipientFieldViewController; // @synthesize addRecipientFieldViewController=_addRecipientFieldViewController;
@property(retain) NSView *addRecipientContainer; // @synthesize addRecipientContainer=_addRecipientContainer;
@property(retain) SOHandleMenuController *handleMenuController; // @synthesize handleMenuController=_handleMenuController;
@property(retain) NSLayoutConstraint *participantTableHeightConstraint; // @synthesize participantTableHeightConstraint=_participantTableHeightConstraint;
@property(retain) NSTableView *participantTableView; // @synthesize participantTableView=_participantTableView;
@property(retain) NSTextField *participantLabel; // @synthesize participantLabel=_participantLabel;
@property(retain) NSView *participantLabelContainer; // @synthesize participantLabelContainer=_participantLabelContainer;
@property(retain) NSStackView *multiwayButtonsAndGroupNameContainer; // @synthesize multiwayButtonsAndGroupNameContainer=_multiwayButtonsAndGroupNameContainer;
@property(retain) SOMapViewController *mapViewController; // @synthesize mapViewController=_mapViewController;
@property(retain) NSView *mapViewContainer; // @synthesize mapViewContainer=_mapViewContainer;
@property(retain) NSView *titleSeparatorView; // @synthesize titleSeparatorView=_titleSeparatorView;
@property(retain) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain) NSView *titleTextFieldContainer; // @synthesize titleTextFieldContainer=_titleTextFieldContainer;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) NSLayoutConstraint *maximumScrollViewHeightConstraint; // @synthesize maximumScrollViewHeightConstraint=_maximumScrollViewHeightConstraint;
@property(retain) NSLayoutConstraint *preferredScrollViewHeightConstraint; // @synthesize preferredScrollViewHeightConstraint=_preferredScrollViewHeightConstraint;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (unsigned long long)_uncachedAttachmentCount;
- (BOOL)_isCurrentlyDownloading;
- (BOOL)validateMenuItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)chatDisplayControllerDidChange:(id)arg1;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_preferredScrollerStyleDidChange:(id)arg1;
- (void)_windowOcclusionStateDidChange:(id)arg1;
- (void)_windowWillClose:(id)arg1;
- (void)_fmfLocationDidChange:(id)arg1;
- (void)_chatFMFStatusDidChange:(id)arg1;
- (void)_stackViewFrameDidChange:(id)arg1;
- (void)_updateAddRecipientFieldVisibility;
- (void)_updateFMFMapVisibility;
- (void)_updateSeparatorLayout;
- (void)_chatPurgedAttachmentsDownloadBatchDidComplete:(id)arg1;
- (void)_chatPurgedAttachmentsDownloadFinished:(id)arg1;
- (void)_chatJoinStateDidChange:(id)arg1;
- (void)_chatPropertiesDidChange:(id)arg1;
- (void)_chatDisplayControllerTitleDidChange:(id)arg1;
- (void)_updateLeaveButton;
- (void)_updateEnableDisableReadReceiptCheckBox;
- (void)_updateMuteCheckBox;
- (void)_updateTitleEditability;
- (void)_updateTitlePlaceholder;
- (void)_updateTitle;
- (void)_updateParticipantsTable;
- (void)_chatParticipantsDidChange:(id)arg1;
- (void)_chatDisplayControllerRecipientHandlesDidChange:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (void)updateLocationTracking;
- (void)copy:(id)arg1;
- (void)downloadMoreAttachments:(id)arg1;
- (void)mapViewControllerSelectionDidChange:(id)arg1;
- (void)tableViewWasDoubleClicked:(id)arg1;
- (void)showContactCard:(id)arg1;
- (void)enableDisableReadReceipt:(id)arg1;
- (void)muteUnmute:(id)arg1;
- (void)leaveChat:(id)arg1;
- (void)titleTextFieldDidEndEditing:(id)arg1;
- (void)startAudioMultiwayCall:(id)arg1;
- (void)startFaceTimeMultiwayCall:(id)arg1;
- (void)_callButtonPressedWithVideo:(BOOL)arg1;
- (BOOL)hasUncachedImageAttachmentsForTabViewController:(id)arg1;
- (void)attachmentsTabViewController:(id)arg1 viewDidChangeAfterUpdatingAttachments:(BOOL)arg2;
- (void)_updateShowAttachmentsGrid;
@property BOOL showsAttachmentsGrid;
@property(readonly) BOOL shouldShowAttachmentsGrid;
- (void)_updateDownloadMoreButton;
@property(readonly) BOOL shouldShowDownloadMoreButton;
- (void)_updateShowAttachmentsContainer;
@property BOOL showsAttachmentsContainer;
- (void)_setupDownloadMoreButtonIfNeeded;
@property(readonly) BOOL shouldShowAttachmentsContainer;
@property(nonatomic) BOOL showsFMFMap; // @dynamic showsFMFMap;
@property double maximumHeight; // @dynamic maximumHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
