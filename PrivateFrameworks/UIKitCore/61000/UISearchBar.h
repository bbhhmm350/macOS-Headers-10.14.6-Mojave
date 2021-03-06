//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIBarPositioning-Protocol.h>
#import <UIKitCore/UIStatusBarTinting-Protocol.h>
#import <UIKitCore/UITextInputTraits-Protocol.h>
#import <UIKitCore/UITextInputTraits_Private-Protocol.h>
#import <UIKitCore/_UIBarPositioningInternal-Protocol.h>
#import <UIKitCore/_UINavigationBarAugmentedTitleView-Protocol.h>

@class NSArray, NSIndexSet, NSString, UIBarButtonItem, UIButton, UIColor, UIImage, UIImageView, UIInputContextHistory, UILabel, UISearchBarTextField, UISearchController, UITapGestureRecognizer, UITextInputAssistantItem, UITextInputPasswordRules, UITextInputTraits, _UIBackdropView, _UINavigationBarTitleViewOverlayRects, _UISearchBarNavigationItem, _UISearchBarScopeBarBackground;
@protocol UISearchBarDelegate, UISearchBarDelegate><UISearchBarDelegate_Private, _UINavigationBarTitleViewDataSource;

@interface UISearchBar : UIView <UITextInputTraits_Private, UIStatusBarTinting, _UIBarPositioningInternal, _UINavigationBarAugmentedTitleView, UIBarPositioning, UITextInputTraits>
{
    UISearchBarTextField *_searchField;
    UILabel *_promptLabel;
    UIButton *_cancelButton;
    id <UISearchBarDelegate><UISearchBarDelegate_Private> _delegate;
    id _controller;
    UIColor *_barTintColor;
    UIImageView *_separator;
    NSString *_cancelButtonText;
    NSArray *_scopes;
    long long _selectedScope;
    UIView *_background;
    UIView *_scopeBar;
    UIView *_scopeBarContainerView;
    struct UIEdgeInsets _contentInsetPrivate;
    double _indexWidth;
    struct UIEdgeInsets _effectiveContentInset;
    UIImageView *_shadowView;
    id _appearanceStorage;
    _UISearchBarNavigationItem *_searchDisplayControllerNavigationItem;
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;
    UIBarButtonItem *_animatedAppearanceBarButtonItem;
    _UIBackdropView *_backdrop;
    unsigned long long _backdropStyle;
    UIView *_maskView;
    UITapGestureRecognizer *_tapToActivateGestureRecognizer;
    UIBarButtonItem *_cancelBarButtonItem;
    UITextInputTraits *_textInputTraits;
    UIButton *_leftButton;
    id <_UINavigationBarTitleViewDataSource> _dataSource;
    long long _titleLocation;
    _UINavigationBarTitleViewOverlayRects *_overlayRects;
    struct {
        unsigned int barStyle:3;
        unsigned int showsBookmarkButton:1;
        unsigned int showsCancelButton:1;
        unsigned int showsDeleteButton:1;
        unsigned int barTranslucence:3;
        unsigned int autoDisableCancelButton:1;
        unsigned int showsScopeBar:1;
        unsigned int hideBackground:1;
        unsigned int combinesLandscapeBars:1;
        unsigned int usesEmbeddedAppearance:1;
        unsigned int showsSearchResultsButton:1;
        unsigned int searchResultsButtonSelected:1;
        unsigned int pretendsIsInBar:1;
        unsigned int disabled:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int containedInNavigationPalette:1;
        unsigned int containedInNavigationBar:1;
        unsigned int containedInToolBar:1;
        unsigned int drawsBackgroundInPalette:1;
        unsigned int centerPlaceholder:1;
        unsigned int searchFieldLeftViewMode:2;
        unsigned int cancelButtonWantsLetterpress:1;
        unsigned int isAnimatingScopeBarIn:1;
        unsigned int isAnimatingScopeBarOut:1;
    } _searchBarFlags;
    BOOL __forceCenteredPlaceholderLayout;
    BOOL __transplanting;
    UIColor *_statusBarTintColor;
    UIView *_inputAccessoryView;
    long long _barPosition;
    unsigned long long _searchBarStyle;
    UISearchController *__searchController;
    unsigned long long __scopeBarPosition;
}

+ (void)_initializeForIdiom:(long long)arg1;
@property(nonatomic, setter=_setScopeBarPosition:) unsigned long long _scopeBarPosition; // @synthesize _scopeBarPosition=__scopeBarPosition;
@property(nonatomic, setter=_setTransplanting:) BOOL _transplanting; // @synthesize _transplanting=__transplanting;
@property(nonatomic, setter=_setSearchController:) UISearchController *_searchController; // @synthesize _searchController=__searchController;
@property(nonatomic) BOOL _forceCenteredPlaceholderLayout; // @synthesize _forceCenteredPlaceholderLayout=__forceCenteredPlaceholderLayout;
@property(nonatomic) unsigned long long searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property(readonly, nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor; // @synthesize _statusBarTintColor;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(nonatomic) __weak id <UISearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_uiktest_placeholderLabelColor;
- (void)_setCancelButtonWantsLetterpress;
- (id)_alternateTitle;
- (BOOL)_shouldUseNavigationBarHeight;
- (long long)_barMetricsForOrientation:(long long)arg1;
- (void)setSearchFieldLeftViewMode:(long long)arg1;
- (long long)searchFieldLeftViewMode;
- (void)_updateInsetsForCurrentContainerViewAndBarPosition;
- (void)_getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4;
- (void)_updateInsetsForTableView:(id)arg1;
- (void)tappedSearchBar:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updatePlaceholderColor;
- (void)_allowCursorToAppear:(BOOL)arg1;
- (id)_textColor;
- (id)_colorForComponent:(unsigned long long)arg1 disabled:(BOOL)arg2;
- (BOOL)_hasDarkUIAppearance;
- (BOOL)centerPlaceholder;
- (void)setCenterPlaceholder:(BOOL)arg1;
- (id)_presentationBackgroundBlurEffectForTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)_backdropStyle;
- (void)_setBackdropStyle:(unsigned long long)arg1;
- (void)_applySearchBarStyle;
- (void)_updateNeedForBackdrop;
- (void)_setBackgroundLayoutNeedsUpdate:(BOOL)arg1;
- (BOOL)_containedInNavigationPalette;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg1;
- (BOOL)_isAtTop;
- (id)_animatedAppearanceBarButtonItem;
- (id)_searchDisplayControllerNavigationItem;
@property(readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem;
- (BOOL)_ownsInputAccessoryView;
- (struct UIOffset)positionAdjustmentForSearchBarIcon:(long long)arg1;
- (void)setPositionAdjustment:(struct UIOffset)arg1 forSearchBarIcon:(long long)arg2;
@property(nonatomic) struct UIOffset searchTextPositionAdjustment;
@property(nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment;
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (id)scopeBarButtonBackgroundImageForState:(unsigned long long)arg1;
- (void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)_imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)_imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(char *)arg3;
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setSeparatorImage:(id)arg1;
- (id)_separatorImage;
@property(retain, nonatomic) UIImage *backgroundImage;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)_effectiveBarTintColorDidChange:(BOOL)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (void)_setBarTintColor:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)_effectiveBarTintColor;
- (void)_setDisableFocus:(BOOL)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusedView;
- (id)preferredFocusEnvironments;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_scopeChanged:(id)arg1;
@property(nonatomic) BOOL showsScopeBar;
- (void)_setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2;
- (void)_setScopeBarHidden:(BOOL)arg1;
@property(nonatomic) long long selectedScopeButtonIndex;
@property(copy, nonatomic) NSArray *scopeButtonTitles;
- (void)_setUpScopeBar;
- (void)_updateScopeBarFrame;
- (void)_updateScopeBarBackground;
- (struct UIEdgeInsets)_scopeBarInsets;
- (BOOL)_scopeBarIsVisible;
- (BOOL)_containsScopeBar;
@property(readonly, nonatomic) struct UIEdgeInsets _effectiveContentInset;
- (void)_updateEffectiveContentInset;
- (BOOL)_getNavigationTitleLeadingInset:(double *)arg1 trailingInset:(double *)arg2 isRTL:(BOOL)arg3;
- (void)safeAreaInsetsDidChange;
- (void)layoutMarginsDidChange;
- (struct UIEdgeInsets)contentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)_makeShadowView;
- (BOOL)_shouldDisplayShadow;
- (void)_setShadowVisibleIfNecessary:(BOOL)arg1;
- (id)_navigationBarForShadow;
- (void)layoutSubviewsInBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_getScopeBarHeight:(double *)arg1 containerHeight:(double *)arg2;
- (double)_scopeBarHeight;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (double)_searchFieldHeight;
- (double)_landscapeScopeBarWidth;
- (double)_landscapeSearchFieldWidth;
- (double)_availableBoundsWidthForSize:(struct CGSize)arg1;
- (double)_availableBoundsWidth;
- (BOOL)_searchFieldWidthShouldBeFlexible;
- (void)_setShowsSeparator:(BOOL)arg1;
- (id)_currentSeparatorImage;
- (struct CGSize)intrinsicContentSize;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_defaultWidth;
- (double)_defaultHeightForOrientation:(long long)arg1;
- (double)_defaultHeight;
- (double)_barHeightForBarMetrics:(long long)arg1;
- (double)_barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;
- (double)_barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(struct UIEdgeInsets)arg2;
- (void)_transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)_performTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)_transitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (BOOL)_wantsTwoPartTransition;
- (void)_contentDidChange;
- (long long)_preferredContentSizeForSize:(long long)arg1;
@property(readonly, nonatomic) BOOL _hideNavigationBarTrailingBarButtons;
@property(readonly, nonatomic) BOOL _hideNavigationBarStandardTitle;
@property(readonly, nonatomic) BOOL _hideNavigationBarLeadingBarButtons;
@property(readonly, nonatomic) BOOL _hideNavigationBarBackButton;
@property(readonly, nonatomic) double _navigationBarBackButtonMaximumWidth;
@property(readonly, nonatomic) double _navigationBarContentHeight;
@property(readonly, nonatomic) BOOL _underlayNavigationBarContent;
- (void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3;
@property(readonly, nonatomic) long long _preferredAlignment;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)textInputTraits;
@property(readonly, retain, nonatomic) UIButton *_leftButton; // @synthesize _leftButton;
- (void)_setupLeftButton;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (BOOL)usesEmbeddedAppearance;
- (void)setUsesEmbeddedAppearance:(BOOL)arg1;
- (BOOL)_wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;
- (BOOL)_shouldCombineLandscapeBarsForOrientation:(long long)arg1;
- (BOOL)_useRelaxedScopeLayout;
- (BOOL)_shouldCombineLandscapeBars;
- (BOOL)combinesLandscapeBars;
- (void)setCombinesLandscapeBars:(BOOL)arg1;
- (BOOL)drawsBackgroundInPalette;
- (void)setDrawsBackgroundInPalette:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (id)_cancelBarButtonItem;
- (void)_displayNavBarCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setShowsCancelButton:(BOOL)arg1;
@property(nonatomic) BOOL showsCancelButton;
- (void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL showsBookmarkButton;
@property(nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property(nonatomic) BOOL showsSearchResultsButton;
- (void)_updateRightView;
- (id)_defaultPromptString;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *prompt;
@property(copy, nonatomic) NSString *text;
@property(nonatomic, getter=isTranslucent) BOOL translucent;
@property(nonatomic) long long barStyle;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)_identifyBarContainer;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (id)_scopeBar;
- (id)_searchBarTextFieldOrMailReplacementView;
@property(readonly, nonatomic, getter=_searchBarTextField) UISearchBarTextField *searchBarTextField;
- (id)searchField;
- (id)controller;
- (void)setController:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)_viewForChildViews;
- (void)_setMaskBounds:(struct CGRect)arg1;
- (void)_setMaskActive:(BOOL)arg1;
- (void)_commonInit;
- (id)_scopeBarContainer;
- (long long)_barPosition;
- (void)_setBarPosition:(long long)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)_updateBackgroundToBackdropStyle:(long long)arg1;
- (id)_scopeBarContainerView;
- (id)_scopeBarBackgroundView;
- (long long)_textInputSource;
- (id)_backgroundView;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setScopeBarSegmentsEnabled:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (BOOL)_isEnabled;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)reloadInputViews;
- (BOOL)_enableAutomaticKeyboardPressDone;
- (BOOL)_disableAutomaticKeyboardUI;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldReturnPressed;
- (void)_searchFieldEndEditing;
- (void)_searchFieldBeginEditing;
- (void)_resultsListButtonPressed;
- (void)_bookmarkButtonPressed;
- (void)_cancelOperation:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_cancelButtonPressed;
- (void)_destroyCancelButton;
- (void)_setupCancelButtonWithAppearance:(id)arg1;
- (void)_setupCancelButton;
- (void)_setAutoDisableCancelButton:(BOOL)arg1;
- (void)_setCancelButtonText:(id)arg1;
- (void)_deleteButtonPressed;
- (void)_setShowsDeleteButton:(BOOL)arg1;
- (void)_setupPromptLabel;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)_textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)_updateOpacity;
- (void)_setupSearchField;
- (void)_updateMagnifyingGlassView;
- (void)_updateSearchFieldArt;
- (BOOL)_consideredInBarWithSuperview:(id)arg1;
- (BOOL)_isInBar;
- (void)setPretendsIsInBar:(BOOL)arg1;
- (BOOL)pretendsIsInBar;
- (double)_defaultAutolayoutSpacing;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4;
- (BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)arg1;

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) BOOL acceptsDictationSearchResults;
@property(nonatomic) BOOL acceptsEmoji;
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL acceptsPayloads;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) BOOL contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) BOOL deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property(nonatomic) BOOL disableInputBars;
@property(nonatomic) BOOL disablePrediction;
@property(nonatomic) BOOL displaySecureEditsUsingPlainText;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) BOOL forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) BOOL forceDisableDictation;
@property(nonatomic) BOOL forceEnableDictation;
@property(nonatomic) BOOL hasDefaultContents;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL hidePrediction;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) BOOL isCarPlayIdiom;
@property(nonatomic) BOOL isSingleLineDocument;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(nonatomic) BOOL learnsCorrections;
@property(nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) long long smartDashesType; // @dynamic smartDashesType;
@property(nonatomic) long long smartInsertDeleteType; // @dynamic smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType; // @dynamic smartQuotesType;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType; // @dynamic textContentType;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) long long textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) BOOL useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;

@end

