//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "ComposeViewControllerDelegate-Protocol.h"
#import "NSAnimationDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "NSWindowRestoration-Protocol.h"
#import "PopoutAnimationContentProvider-Protocol.h"

@class ComposeViewController, ComposeWindow, MailInspectorBar, NSDictionary, NSMenu, NSString;

@interface ComposeWindowController : NSWindowController <NSWindowDelegate, ComposeViewControllerDelegate, NSAnimationDelegate, NSToolbarDelegate, NSWindowRestoration, PopoutAnimationContentProvider>
{
    MailInspectorBar *_inspectorBar;
    BOOL _shouldCloseWindowWhenAnimationCompletes;
    BOOL _inspectorBarDisplayed;
    CDUnknownBlockType _loadCompletionHandler;
    NSDictionary *_toolbarItems;
    NSMenu *_disclosureMenu;
    struct CGPoint _animationStartFrameOrigin;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)keyPathsForValuesAffectingTitle;
@property(nonatomic) struct CGPoint animationStartFrameOrigin; // @synthesize animationStartFrameOrigin=_animationStartFrameOrigin;
@property(retain, nonatomic) NSMenu *disclosureMenu; // @synthesize disclosureMenu=_disclosureMenu;
@property(nonatomic) BOOL inspectorBarDisplayed; // @synthesize inspectorBarDisplayed=_inspectorBarDisplayed;
@property(retain, nonatomic) NSDictionary *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(copy, nonatomic) CDUnknownBlockType loadCompletionHandler; // @synthesize loadCompletionHandler=_loadCompletionHandler;
@property(nonatomic) BOOL shouldCloseWindowWhenAnimationCompletes; // @synthesize shouldCloseWindowWhenAnimationCompletes=_shouldCloseWindowWhenAnimationCompletes;
- (void).cxx_destruct;
- (void)flushRecordedKeystrokes;
- (void)beginRecordingKeystrokes;
- (struct CGRect)_toolbarRect;
- (id)getContentGeometryData;
- (void)getSnapshotParts:(CDUnknownBlockType)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)closeAll:(id)arg1;
- (void)performClose:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) MailInspectorBar *inspectorBar;
- (void)_updateInspectorBar:(BOOL)arg1;
- (void)updateInspectorBar;
@property(nonatomic) BOOL shouldDisplayInspectorBar;
- (void)toggleComposeFormatInspectorBar:(id)arg1;
- (void)composeViewControllerDidFinishLoading:(id)arg1;
- (void)composeViewControllerShouldShow:(id)arg1;
- (void)composeViewControllerShouldClose:(id)arg1;
- (void)composeViewControllerDidSend:(id)arg1;
- (void)prepareComposeViewController:(id)arg1 forSendingWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)restoreFrame;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowWillLoad;
- (void)_performSendAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)addComposeViewController:(id)arg1;
- (id)_menuForListsItem;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)animationContentProvider:(id)arg1;
- (void)synchronizeIncludeAttachmentsToolbarItem:(id)arg1;
- (void)configureSegmentedItem:(id)arg1 withDictionary:(id)arg2 forSegment:(long long)arg3;
- (void)toolbarWillAddItem:(id)arg1;
- (void)updateSendButtonStateInToolbar;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)synchronizeToolbarReplyWithType:(long long)arg1;
- (void)_synchronizeChangeReplyItem:(id)arg1 messageType:(long long)arg2;
- (id)toolbarIdentifier;
- (void)_setupToolbar;
@property(readonly, copy, nonatomic) NSString *title;
- (void)windowDidLoad;
@property(retain) ComposeViewController *contentViewController;
@property(retain) ComposeWindow *window;
- (id)windowNibName;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
