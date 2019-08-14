//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSCollectionViewDataSource-Protocol.h"
#import "NSCollectionViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class FBBackgroundView, FBDuplicateResolutionCollectionView, FBFace, NSArray, NSBox, NSButton, NSDictionary, NSImageView, NSLayoutConstraint, NSMutableDictionary, NSMutableSet, NSNumberFormatter, NSPanel, NSScrollView, NSSegmentedControl, NSString, NSTextField, NSTextView;

@interface FBDuplicateResolutionWindowController : NSWindowController <NSWindowDelegate, NSCollectionViewDataSource, NSCollectionViewDelegate>
{
    NSPanel *panel;
    FBBackgroundView *view;
    NSButton *acceptChangesButton;
    NSButton *resolveCurrentDuplicateButton;
    NSButton *cancelButton;
    NSTextField *navigationPositionField;
    NSButton *resolveByTrashingCheckbox;
    NSButton *revealInFinderButton;
    NSTextField *fontNameField;
    NSImageView *fontProtectedImage;
    NSTextView *sampleView;
    NSScrollView *sampleScrollView;
    NSTextField *currentPreferredFaceField;
    NSTextField *fontVersionField;
    NSTextField *fontAccessField;
    NSTextField *fontFileField;
    NSTextField *fontDateField;
    NSTextField *isInUseField;
    NSBox *separatorBox;
    NSDictionary *duplicateFaces;
    NSMutableDictionary *preferredFaces;
    NSArray *psNames;
    NSMutableSet *reviewedNames;
    long long currentDuplicateIndex;
    long long currentPreferredFaceIndex;
    long long preferredFaceOffset;
    NSString *resolveAllDuplicatesButtonText;
    NSString *resolveCurrentDuplicateButtonText;
    BOOL _didAwakeFromNib;
    FBDuplicateResolutionCollectionView *_collectionView;
    NSLayoutConstraint *_oldButtonConstraint;
    NSSegmentedControl *_duplicateSetNavigationControl;
    NSString *_sampleString;
    NSNumberFormatter *_formatter;
}

+ (id)windowNibName;
@property BOOL didAwakeFromNib; // @synthesize didAwakeFromNib=_didAwakeFromNib;
@property(retain) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(copy) NSString *sampleString; // @synthesize sampleString=_sampleString;
@property(retain) NSSegmentedControl *duplicateSetNavigationControl; // @synthesize duplicateSetNavigationControl=_duplicateSetNavigationControl;
@property(retain) NSLayoutConstraint *oldButtonConstraint; // @synthesize oldButtonConstraint=_oldButtonConstraint;
@property(retain) FBDuplicateResolutionCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property long long preferredFaceOffset; // @synthesize preferredFaceOffset;
@property long long currentDuplicateIndex; // @synthesize currentDuplicateIndex;
@property long long currentPreferredFaceIndex; // @synthesize currentPreferredFaceIndex;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)cancelDuplicateResolution:(id)arg1;
- (void)resolveByTrashing:(id)arg1;
- (void)revealInFinder:(id)arg1;
@property(readonly) FBFace *currentFace;
@property(readonly) NSArray *currentDuplicates;
- (void)switchToPSName:(id)arg1;
- (void)resolveSingleDuplicate:(id)arg1;
- (void)finishDuplicateResolution:(id)arg1;
- (void)startDuplicateResolution:(id)arg1 forFaces:(id)arg2;
- (void)showHelp:(id)arg1;
- (void)navigate:(id)arg1;
@property(retain) NSMutableDictionary *preferredFaces;
@property(retain) NSDictionary *duplicateFaces;
@property(retain) NSMutableSet *reviewedNames;
- (void)setPSNames:(id)arg1;
@property(readonly, retain) NSArray *psNames;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (id)windowNibName;
- (void)dealloc;
- (id)init;
- (void)_doResolution:(id)arg1;
- (void)_rebuildDisplay;
- (void)_generateDuplicateFaces:(id)arg1;
- (void)_registeredFontsChanged:(id)arg1;
- (void)_switchToPreferredFace:(long long)arg1;
- (void)_switchToFaceIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
