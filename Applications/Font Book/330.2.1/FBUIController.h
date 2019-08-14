//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSAnimationDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"

@class FBCollectionViewController, FBDuplicateResolutionWindowController, FBFontViewController, FBGroup, FBLanguagePicker, FBMultiPreviewController, FBPrintController, FBProgressWindowController, FBSearchController, FBSmartCollection, NSArray, NSBox, NSButton, NSImage, NSMenu, NSMutableArray, NSNumberFormatter, NSPanel, NSPredicateEditor, NSPrintOperation, NSResponder, NSSegmentedControl, NSSpeechSynthesizer, NSSplitViewController, NSSplitViewItem, NSString, NSTextField, NSTimer, NSToolbar, NSToolbarItem, NSUndoManager, NSView, NSWindow;
@protocol FBPluginProtocol;

@interface FBUIController : NSWindowController <NSToolbarDelegate, NSAnimationDelegate>
{
    NSArray *_smartCollectionSheetTopObjects;
    NSSpeechSynthesizer *_speechSynthesizer;
    BOOL _isChangingFullScreenMode;
    BOOL _canChangePreviewType;
    BOOL _canChangeLanguage;
    BOOL _accessAppleInternalFeatures;
    BOOL _showVariationPanel;
    BOOL _isCollapsingPreview;
    BOOL _isAnimatingWindowResize;
    BOOL _didAwakeFromNib;
    BOOL _isCollapsing;
    BOOL _isAnimating;
    NSSplitViewController *_mainSplitViewController;
    FBFontViewController *_fontController;
    FBCollectionViewController *_collectionController;
    FBMultiPreviewController *_previewController;
    FBDuplicateResolutionWindowController *_duplicatePanelController;
    FBProgressWindowController *_progressWindowController;
    FBPrintController *_printController;
    NSSplitViewItem *_fontSplitViewItem;
    NSSplitViewItem *_collectionSplitViewItem;
    NSSplitViewItem *_previewSplitViewItem;
    NSMenu *_collectionContextMenu;
    NSMenu *_fontContextMenu;
    NSToolbar *_toolbar;
    NSSegmentedControl *_setPreviewTypeControl;
    NSMenu *_searchPopupMenu;
    FBSearchController *_searchController;
    NSToolbarItem *_searchFieldItem;
    NSBox *_collectionControlsGroup;
    NSButton *_collectionAddButton;
    NSButton *_fontAddButton;
    NSButton *_enableDisableFontsButton;
    NSWindow *_editSmartCollectionSheet;
    NSTextField *_selectedSmartCollectionNameField;
    NSPredicateEditor *_predicateEditor;
    FBSmartCollection *_smartCollectionToEdit;
    FBLanguagePicker *_languagesSubmenu;
    NSUndoManager *_undoManager;
    double _previewWidth;
    NSString *_previewStatus;
    FBGroup *_installationDestination;
    NSArray *_objectsToProcess;
    id <FBPluginProtocol> _plugin;
    NSPanel *_variationPanel;
    NSNumberFormatter *_formatter;
    NSView *_savedPreviewView;
    double _savedPreviewWidth;
    NSResponder *_scratchResponder;
    NSPrintOperation *_printOperation;
    NSMutableArray *_inaccessibleFiles;
    NSMutableArray *_postScriptNameFreeFiles;
    NSMutableArray *_uninstallableFontFiles;
    NSTimer *_waitingForDataTimer;
    unsigned long long _resizingMask;
}

+ (id)warningImageScaledToHeight:(double)arg1;
+ (id)cloudImageScaledToHeight:(double)arg1;
+ (id)selectedCloudImageScaledToHeight:(double)arg1;
+ (id)uiController;
+ (void)initialize;
@property unsigned long long resizingMask; // @synthesize resizingMask=_resizingMask;
@property BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property BOOL isCollapsing; // @synthesize isCollapsing=_isCollapsing;
@property NSTimer *waitingForDataTimer; // @synthesize waitingForDataTimer=_waitingForDataTimer;
@property BOOL didAwakeFromNib; // @synthesize didAwakeFromNib=_didAwakeFromNib;
@property NSMutableArray *uninstallableFontFiles; // @synthesize uninstallableFontFiles=_uninstallableFontFiles;
@property NSMutableArray *postScriptNameFreeFiles; // @synthesize postScriptNameFreeFiles=_postScriptNameFreeFiles;
@property NSMutableArray *inaccessibleFiles; // @synthesize inaccessibleFiles=_inaccessibleFiles;
@property NSPrintOperation *printOperation; // @synthesize printOperation=_printOperation;
@property NSResponder *scratchResponder; // @synthesize scratchResponder=_scratchResponder;
@property BOOL isAnimatingWindowResize; // @synthesize isAnimatingWindowResize=_isAnimatingWindowResize;
@property BOOL isCollapsingPreview; // @synthesize isCollapsingPreview=_isCollapsingPreview;
@property double savedPreviewWidth; // @synthesize savedPreviewWidth=_savedPreviewWidth;
@property NSView *savedPreviewView; // @synthesize savedPreviewView=_savedPreviewView;
@property(retain) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property NSPanel *variationPanel; // @synthesize variationPanel=_variationPanel;
@property BOOL showVariationPanel; // @synthesize showVariationPanel=_showVariationPanel;
@property(retain) id <FBPluginProtocol> plugin; // @synthesize plugin=_plugin;
@property BOOL accessAppleInternalFeatures; // @synthesize accessAppleInternalFeatures=_accessAppleInternalFeatures;
@property(copy) NSArray *objectsToProcess; // @synthesize objectsToProcess=_objectsToProcess;
@property(retain) FBGroup *installationDestination; // @synthesize installationDestination=_installationDestination;
@property(copy) NSString *previewStatus; // @synthesize previewStatus=_previewStatus;
@property double previewWidth; // @synthesize previewWidth=_previewWidth;
@property BOOL canChangeLanguage; // @synthesize canChangeLanguage=_canChangeLanguage;
@property BOOL canChangePreviewType; // @synthesize canChangePreviewType=_canChangePreviewType;
@property BOOL isChangingFullScreenMode; // @synthesize isChangingFullScreenMode=_isChangingFullScreenMode;
@property NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property FBLanguagePicker *languagesSubmenu; // @synthesize languagesSubmenu=_languagesSubmenu;
@property FBSmartCollection *smartCollectionToEdit; // @synthesize smartCollectionToEdit=_smartCollectionToEdit;
@property NSPredicateEditor *predicateEditor; // @synthesize predicateEditor=_predicateEditor;
@property NSTextField *selectedSmartCollectionNameField; // @synthesize selectedSmartCollectionNameField=_selectedSmartCollectionNameField;
@property NSWindow *editSmartCollectionSheet; // @synthesize editSmartCollectionSheet=_editSmartCollectionSheet;
@property NSButton *enableDisableFontsButton; // @synthesize enableDisableFontsButton=_enableDisableFontsButton;
@property NSButton *fontAddButton; // @synthesize fontAddButton=_fontAddButton;
@property NSButton *collectionAddButton; // @synthesize collectionAddButton=_collectionAddButton;
@property NSBox *collectionControlsGroup; // @synthesize collectionControlsGroup=_collectionControlsGroup;
@property NSToolbarItem *searchFieldItem; // @synthesize searchFieldItem=_searchFieldItem;
@property FBSearchController *searchController; // @synthesize searchController=_searchController;
@property NSMenu *searchPopupMenu; // @synthesize searchPopupMenu=_searchPopupMenu;
@property NSSegmentedControl *setPreviewTypeControl; // @synthesize setPreviewTypeControl=_setPreviewTypeControl;
@property NSToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property NSMenu *fontContextMenu; // @synthesize fontContextMenu=_fontContextMenu;
@property NSMenu *collectionContextMenu; // @synthesize collectionContextMenu=_collectionContextMenu;
@property NSSplitViewItem *previewSplitViewItem; // @synthesize previewSplitViewItem=_previewSplitViewItem;
@property NSSplitViewItem *collectionSplitViewItem; // @synthesize collectionSplitViewItem=_collectionSplitViewItem;
@property NSSplitViewItem *fontSplitViewItem; // @synthesize fontSplitViewItem=_fontSplitViewItem;
@property FBPrintController *printController; // @synthesize printController=_printController;
@property FBProgressWindowController *progressWindowController; // @synthesize progressWindowController=_progressWindowController;
@property FBDuplicateResolutionWindowController *duplicatePanelController; // @synthesize duplicatePanelController=_duplicatePanelController;
@property FBMultiPreviewController *previewController; // @synthesize previewController=_previewController;
@property FBCollectionViewController *collectionController; // @synthesize collectionController=_collectionController;
@property FBFontViewController *fontController; // @synthesize fontController=_fontController;
@property NSSplitViewController *mainSplitViewController; // @synthesize mainSplitViewController=_mainSplitViewController;
- (id)filteredDescriptor:(id)arg1;
- (void)resolveDuplicatesWithSelectedFaces:(id)arg1;
- (void)selectedFontItemsDidChange:(id)arg1;
- (void)disableFontArray:(id)arg1;
- (void)enableFontArray:(id)arg1;
- (id)selectedSmartCollection;
@property(readonly, retain) NSArray *selectedCollections;
@property(readonly, retain) NSArray *selectedFamilies;
@property(readonly, retain) NSArray *selectedFaces;
@property(readonly, retain) NSArray *selectedFonts;
- (void)stopProgressIndicator;
- (void)startProgressIndicator;
- (void)resumeSuspendedAppleEvents;
- (BOOL)suspendAppleEventIfBusy;
@property double hideDelta;
@property BOOL previewHidden;
- (BOOL)isBusy;
- (void)operationWillEnd:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (void)showBusy:(BOOL)arg1;
@property(readonly, copy) NSString *currentSampleLanguage;
- (void)selectLibrary:(id)arg1 edit:(BOOL)arg2;
- (void)selectGroup:(id)arg1 edit:(BOOL)arg2;
- (void)selectFamiliesAndFaces:(id)arg1 andOpenPreview:(BOOL)arg2;
- (void)switchToInfoMode;
- (void)setPreviewPaneHidden:(BOOL)arg1 display:(BOOL)arg2;
- (id)windowWillReturnUndoManager:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (void)savePersistentInfo;
- (void)applicationDidFinishLaunching;
- (id)windowNibName;
- (void)showPreviewWindowForFace:(id)arg1;
- (void)updatePreviewStatus:(id)arg1;
@property(readonly) BOOL allPreviewModesAvailable;
@property(readonly, retain) NSImage *lockImageForCurrentFace;
- (void)doSmartCollectionEdit:(id)arg1;
- (void)doSmartCollectionAddAndEdit:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)selectLastSelectedFamily;
- (id)getContextMenu;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)_updateLanguagesMenu:(id)arg1;
- (void)_downloadFailed:(id)arg1;
- (void)_extendedSamplesChanged:(id)arg1;
- (void)_resolveSelectedDuplicatesAutomatically;
- (void)_doDuplicateResolutionOfFace:(id)arg1;
- (void)_resolveDuplicatesManually:(id)arg1;
- (void)_resolveDuplicatesDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_resolveDuplicatedFaces:(id)arg1 warnIfMovingToTrash:(BOOL)arg2;
- (void)_stopWaitingForData:(id)arg1;
- (void)_startWaitingForData:(id)arg1;
- (void)_makeChangesToSelectedSmartCollection;
- (void)_smartCollectionAddAndEditDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_smartCollectionEditDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_setupSmartCollectionsPredicateEditor;
- (BOOL)_checkFamily:(id)arg1 forFile:(id)arg2;
- (void)_selectGroupWithoutEdit:(id)arg1;
- (void)_selectGroup:(id)arg1;
- (void)_previewModeDidChange:(id)arg1;
- (void)_warnOfUninstalledFonts:(id)arg1;
- (void)_couldNotInstallFont:(id)arg1;
- (void)_warnOfPostScriptNameFreeFiles;
- (void)_postScriptNameFreeFileEncountered:(id)arg1;
- (void)_warnOfInaccessibleFiles;
- (void)_inaccessibleFileEncountered:(id)arg1;
- (void)_abortLengthyOperation;
- (BOOL)_isProcessingObjects;
- (void)_addActivatedFontsToGroup:(id)arg1;
- (void)_addFiles:(id)arg1 toGroup:(id)arg2;
- (void)_activateFontsAndAddToGroup:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_addFontsToGroup:(id)arg1;
- (void)_enableSearchField:(id)arg1;
- (void)_loadPlugin;
- (void)_updateAccessibilityInfo;
- (void)selfTestIterateAllFontsPerformance:(long long)arg1;
- (void)selfTestSearchPerformance:(long long)arg1;
- (void)selfTestIterateCollections;
- (void)_toggleAppleInternalPref;
- (void)_testProgressWindow:(id)arg1;
- (id)_appleInternalPrefPath;
- (id)_appleInternalPrefSet;
- (void)_addHiddenMenuItems;
- (id)_accessAppleInternalFeatures;
- (void)_modelDidInitialize:(id)arg1;
- (void)_updateStatusBar:(id)arg1;
- (void)_addController:(id)arg1 toView:(id)arg2;
- (void)_toggleICloudSupport;
@property BOOL iCloudSupport;
- (void)_togglePreviewAllFonts;
@property BOOL previewAllFonts;
- (void)_toggleAllValidatorTests;
@property BOOL allValidatorTests;
- (void)_toggleFullValidatorReports;
@property BOOL fullValidatorReports;
- (void)_toggleShowAdditionalFontInfo;
@property BOOL showAdditionalFontInfo;
- (void)_toggleUseAlternateDomainNames;
@property BOOL useAlternateDomainNames;
- (void)_toggleShowLockedFonts;
@property BOOL showLockedFonts;
- (void)_toggleShowLanguageCodes;
@property BOOL showLanguageCodes;
- (void)_toggleUseNewUI;
@property BOOL useNewUI;
- (void)_toggleShowFontUse;
@property BOOL showFontUse;
- (void)_toggleAllowSpokenAnnouncements;
@property BOOL allowSpokenAnnouncements;
- (void)_speakText:(id)arg1;
- (void)appleInternalSetValue:(id)arg1 forKey:(id)arg2;
- (id)appleInternalValueForKey:(id)arg1;
- (void)appleInternalSetBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)appleInternalBoolForKey:(id)arg1 defaultsTo:(BOOL)arg2;
- (void)installFonts:(id)arg1;
- (void)customizeToolbar:(id)arg1;
- (void)setViewType:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)saveValidationReport:(id)arg1;
- (void)validateFiles:(id)arg1;
- (void)finishSmartCollectionEdit:(id)arg1;
- (void)cancelSmartCollectionEdit:(id)arg1;
- (void)submenuAction:(id)arg1;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)print:(id)arg1;
- (void)pageLayoutPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)pageLayout:(id)arg1;
- (void)selectSearchField:(id)arg1;
- (void)validateFonts:(id)arg1;
- (void)_validateFilesInArray:(id)arg1 forGroup:(id)arg2 controller:(id)arg3;
- (void)_validateFiles:(id)arg1;
- (void)_refreshUI:(id)arg1;
- (void)_deleteAsset:(id)arg1;
- (void)_duplicateAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_accumulateFilesForValidation:(id)arg1 forGroup:(id)arg2 to:(id)arg3 controller:(id)arg4;
- (void)_accumulateFacesForValidation:(id)arg1 forGroup:(id)arg2 to:(id)arg3 controller:(id)arg4;
- (void)exportFonts:(id)arg1;
- (id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(BOOL)arg3;
- (void)openFontURL:(id)arg1;
- (void)renameGroup:(id)arg1;
- (void)resolveDuplicates:(id)arg1;
- (void)restoreStandardFonts:(id)arg1;
- (void)selectDuplicates:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)hideInfo:(id)arg1;
- (void)showInfo:(id)arg1;
- (void)switchPreviewMode:(id)arg1;
- (void)resetPreview:(id)arg1;
- (void)resetPreviewMode:(id)arg1;
- (void)showPreview:(id)arg1;
- (void)hidePreview:(id)arg1;
- (void)previewFonts:(id)arg1;
- (void)toggleSidebar:(id)arg1;
- (void)showFontFileInFinder:(id)arg1;
- (void)removeGroups:(id)arg1;
- (void)removeFonts:(id)arg1;
- (void)enableDisableGroups:(id)arg1;
- (void)enableGroups:(id)arg1;
- (void)disableGroups:(id)arg1;
- (void)enableFonts:(id)arg1;
- (void)editSmartCollection:(id)arg1;
- (void)disableNonSystemFonts:(id)arg1;
- (void)disableFonts:(id)arg1;
- (void)addLibrary:(id)arg1;
- (void)addCollectionOrSmartCollection:(id)arg1;
- (void)addSmartCollection:(id)arg1;
- (void)addCollection:(id)arg1;
- (void)addFonts:(id)arg1;
- (void)DEBUGDumpWindowViewSubtreeDescription:(id)arg1;
- (void)DEBUGDumpWindowViewConstraints:(id)arg1;
- (void)DEBUGDumpWindowView:(id)arg1;
- (void)displayFontInformation:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)createLibraryFromText:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)createCollectionFromText:(id)arg1 userData:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
