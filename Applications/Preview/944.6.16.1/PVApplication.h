//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

#import "CAAnimationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSServicesMenuRequestor-Protocol.h"

@class NSArray, NSMenuItem, NSString, NSTimer, NSWindowController, PVDocumentController, PVMediaContainerBase, PVScreenCaptureFeedbackPanel;

@interface PVApplication : NSApplication <NSServicesMenuRequestor, NSMenuDelegate, CAAnimationDelegate>
{
    NSMenuItem *_softProofMenuItem;
    NSMenuItem *_fontMenuItem;
    NSMenuItem *_signaturesMenuItem;
    PVScreenCaptureFeedbackPanel *_screenCaptureInfoWindow;
    NSTimer *_screenCaptureTimer;
    id _screenCaptureLocalEventMonitor;
    NSString *_tempFolderPath;
    PVDocumentController *_documentController;
    NSArray *_profilesArray;
    PVMediaContainerBase *_softProofMenuDocument;
    double _launchTime;
    NSWindowController *_annotationDebugOptionsController;
    NSMenuItem *_viewMenuItem;
    NSMenuItem *_annotationRectangleMenuItem;
    NSMenuItem *_annotationOvalMenuItem;
    NSMenuItem *_annotationLineMenuItem;
    NSMenuItem *_annotationArrowMenuItem;
    NSMenuItem *_annotationTextMenuItem;
    NSMenuItem *_annotationSpeechBubbleMenuItem;
    NSMenuItem *_annotationStarMenuItem;
    NSMenuItem *_annotationPolygonMenuItem;
    NSMenuItem *_annotationLoupeMenuItem;
    NSMenuItem *_annotationMaskMenuItem;
    NSMenuItem *_viewMenuHideSidebarSeparator;
}

@property(retain) NSMenuItem *viewMenuHideSidebarSeparator; // @synthesize viewMenuHideSidebarSeparator=_viewMenuHideSidebarSeparator;
@property(retain) NSMenuItem *annotationMaskMenuItem; // @synthesize annotationMaskMenuItem=_annotationMaskMenuItem;
@property(retain) NSMenuItem *annotationLoupeMenuItem; // @synthesize annotationLoupeMenuItem=_annotationLoupeMenuItem;
@property(retain) NSMenuItem *annotationPolygonMenuItem; // @synthesize annotationPolygonMenuItem=_annotationPolygonMenuItem;
@property(retain) NSMenuItem *annotationStarMenuItem; // @synthesize annotationStarMenuItem=_annotationStarMenuItem;
@property(retain) NSMenuItem *annotationSpeechBubbleMenuItem; // @synthesize annotationSpeechBubbleMenuItem=_annotationSpeechBubbleMenuItem;
@property(retain) NSMenuItem *annotationTextMenuItem; // @synthesize annotationTextMenuItem=_annotationTextMenuItem;
@property(retain) NSMenuItem *annotationArrowMenuItem; // @synthesize annotationArrowMenuItem=_annotationArrowMenuItem;
@property(retain) NSMenuItem *annotationLineMenuItem; // @synthesize annotationLineMenuItem=_annotationLineMenuItem;
@property(retain) NSMenuItem *annotationOvalMenuItem; // @synthesize annotationOvalMenuItem=_annotationOvalMenuItem;
@property(retain) NSMenuItem *annotationRectangleMenuItem; // @synthesize annotationRectangleMenuItem=_annotationRectangleMenuItem;
@property(retain) NSMenuItem *viewMenuItem; // @synthesize viewMenuItem=_viewMenuItem;
@property(readonly) __weak NSMenuItem *signaturesMenuItem; // @synthesize signaturesMenuItem=_signaturesMenuItem;
@property(readonly) __weak NSMenuItem *fontMenuItem; // @synthesize fontMenuItem=_fontMenuItem;
@property(readonly) PVDocumentController *documentController; // @synthesize documentController=_documentController;
- (void).cxx_destruct;
- (BOOL)hideAnnotationsSidebarOptionsMenuItem;
- (void)showAnnotionsSidebarOptions:(id)arg1;
- (BOOL)hideSwipeDebuggingMenuItem;
- (void)showSwipeDebuggingUI:(id)arg1;
- (void)setupAKMenuItemTags;
- (void)updateViewMenu;
- (void)updateSignaturesMenu;
- (void)ensureSoftProofProfilesMenuIsBuilt;
- (unsigned long long)validModesForFontPanel:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)logTimeSinceLaunch;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (void)newFromClipboard:(id)arg1;
- (void)newFromThisPasteboard:(id)arg1;
- (void)serviceOpenImage:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (id)tempFileName:(id)arg1;
- (id)tempFileName:(id)arg1 untitledString:(id)arg2;
- (id)tempFileAtPath:(id)arg1 withBasename:(id)arg2 extension:(id)arg3;
- (id)appSupportDirectoryPath;
- (id)createTempFileForUTType:(id)arg1;
- (id)tempFileFolderPath;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)openPreferencePanel:(id)arg1;
- (void)orderFrontStandardAboutPanel:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;
- (void)captureTimerFired:(id)arg1;
- (void)captureScreensTimed:(id)arg1;
- (void)captureInteractive:(id)arg1;
- (void)captureWindow:(id)arg1;
- (void)captureSelection:(id)arg1;
- (void)callScreencaptureWithOptions:(id)arg1;
- (void)callScreenCaptureXPCWithOptions:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)hideFeedbackWindowWithAnimation:(BOOL)arg1;
- (void)showFeedbackWindowWithText:(id)arg1 showPie:(BOOL)arg2;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (void)runFolderSelfTestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)runImageSelfTestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)runPDFSelfTestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_openSelfTestFiles:(id)arg1 withOpeningMode:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
