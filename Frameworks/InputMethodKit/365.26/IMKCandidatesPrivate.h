//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputMethodKit/IMKCandidateControllerDelegate-Protocol.h>
#import <InputMethodKit/IMKCandidateSelectionViewDelegate-Protocol.h>

@class IMKCandidate, IMKCandidateListDictionary, IMKCandidates, IMKServer, IMKUICandidateTouchBarItemController, IMKUICandidateWindowController, IMKUICandidateWindowPositionController, NSArray, NSDictionary, NSString, NSValue, NSView;
@protocol IMKCandidatesDelegate, IMKCandidatesSimulatorDelegate;

@interface IMKCandidatesPrivate : NSObject <IMKCandidateControllerDelegate, IMKCandidateSelectionViewDelegate>
{
    long long _alignment;
    NSDictionary *_attributes;
    IMKUICandidateTouchBarItemController *_candidateTouchBarController;
    IMKUICandidateWindowController *_candidateWindowController;
    NSValue *_candidateWindowPosition;
    NSArray *_candidates;
    IMKCandidateListDictionary *_candidateListDictionary;
    id <IMKCandidatesDelegate> _delegate;
    BOOL _dismissesAutomatically;
    IMKCandidate *_focusedCandidate;
    double _fontSize;
    NSView *_informationView;
    struct __TISInputSource *_inputSource;
    NSString *_noCandidatesMessage;
    unsigned long long _numberOfFixedSizeCandidates;
    IMKCandidates *_parent;
    IMKUICandidateWindowPositionController *_positionController;
    BOOL _presentsAutomatically;
    struct __TISInputSource *_selectionKeysKeyLayout;
    NSArray *_sortingModes;
    unsigned long long _panelType;
    NSArray *_selectionKeys;
    IMKServer *_server;
    id <IMKCandidatesSimulatorDelegate> _simulatorDelegate;
}

@property(nonatomic) id <IMKCandidatesSimulatorDelegate> simulatorDelegate; // @synthesize simulatorDelegate=_simulatorDelegate;
@property(nonatomic) struct __TISInputSource *selectionKeysKeyLayout; // @synthesize selectionKeysKeyLayout=_selectionKeysKeyLayout;
@property(retain, nonatomic) IMKServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSArray *selectionKeys; // @synthesize selectionKeys=_selectionKeys;
@property(nonatomic) BOOL presentsAutomatically; // @synthesize presentsAutomatically=_presentsAutomatically;
@property(retain, nonatomic) IMKUICandidateWindowPositionController *positionController; // @synthesize positionController=_positionController;
@property(nonatomic) IMKCandidates *parent; // @synthesize parent=_parent;
@property(nonatomic) unsigned long long panelType; // @synthesize panelType=_panelType;
@property(nonatomic) unsigned long long numberOfFixedSizeCandidates; // @synthesize numberOfFixedSizeCandidates=_numberOfFixedSizeCandidates;
@property(copy, nonatomic) NSString *noCandidatesMessage; // @synthesize noCandidatesMessage=_noCandidatesMessage;
@property(nonatomic) struct __TISInputSource *inputSource; // @synthesize inputSource=_inputSource;
@property(retain, nonatomic) NSView *informationView; // @synthesize informationView=_informationView;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) BOOL dismissesAutomatically; // @synthesize dismissesAutomatically=_dismissesAutomatically;
@property(nonatomic) id <IMKCandidatesDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(retain, nonatomic) NSValue *candidateWindowPosition; // @synthesize candidateWindowPosition=_candidateWindowPosition;
@property(retain, nonatomic) IMKCandidateListDictionary *candidateListDictionary; // @synthesize candidateListDictionary=_candidateListDictionary;
@property(retain, nonatomic) IMKUICandidateWindowController *candidateWindowController; // @synthesize candidateWindowController=_candidateWindowController;
@property(retain, nonatomic) IMKUICandidateTouchBarItemController *candidateTouchBarController; // @synthesize candidateTouchBarController=_candidateTouchBarController;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
- (BOOL)isExpanded;
- (id)selectedCandidateForSender:(id)arg1 proposedCandidate:(id)arg2;
- (unsigned long long)firstVisibleLineForSender:(id)arg1;
- (struct CGRect)contentFrameForWindowWithSize:(struct CGSize)arg1;
- (struct CGPoint)positionForWindowWithSize:(struct CGSize)arg1 sender:(id)arg2;
- (struct CGSize)preferredWindowSize:(struct CGSize)arg1;
- (void)didFinishInteracting:(id)arg1;
- (void)didUpdateVisibleCandidates:(id)arg1;
- (void)didSelectSortingMode:(id)arg1 sender:(id)arg2;
- (void)didCommitCandidate:(id)arg1 sender:(id)arg2;
- (void)didSelectCandidate:(id)arg1 sender:(id)arg2;
- (void)candidateSelection:(id)arg1 commit:(BOOL)arg2;
@property(retain, nonatomic) NSArray *sortingModes;
- (BOOL)forceNoIncrementalSearchPositioning;
- (void)setForceNoIncrementalSearchPositioning:(BOOL)arg1;
@property(retain, nonatomic) IMKCandidate *focusedCandidate;
- (id)selectionKeyTitlesFromKeyCodes:(id)arg1;
- (struct __TISInputSource *)findUSKeyboardLayout;
- (id)attributedTitleFromDefinitionUnit:(id)arg1;
- (void)updateAndShowCandidates;
- (id)IMKCandidates;
- (id)layoutTraitsForFontSize:(double)arg1 alignment:(long long)arg2;
- (id)itemLayoutForFontSize:(double)arg1;
- (void)dealloc;
- (id)initWithServer:(id)arg1 panelType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
