//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UITextField.h>

#import <UIKitCore/_UISearchBarTextFieldOrMailReplacement-Protocol.h>

@class NSMutableDictionary, NSString, NSValue, _UISearchBarSearchFieldBackgroundView;

__attribute__((visibility("hidden")))
@interface UISearchBarTextField : UITextField <_UISearchBarTextFieldOrMailReplacement>
{
    NSMutableDictionary *_customClearButtons;
    NSMutableDictionary *_iconOffsets;
    NSValue *_searchTextOffsetValue;
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundTop;
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundBottom;
    BOOL _deferringFirstResponder;
    BOOL _animatePlaceholderOnResignFirstResponder;
    struct {
        unsigned int delegateWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged:1;
    } _searchBarTextFieldFlags;
    BOOL __preventSelectionViewActivation;
    long long __textInputSource;
}

@property(nonatomic) long long _textInputSource; // @synthesize _textInputSource=__textInputSource;
@property(nonatomic, setter=_setPreventSelectionViewActivation:) BOOL _preventSelectionViewActivation; // @synthesize _preventSelectionViewActivation=__preventSelectionViewActivation;
- (void).cxx_destruct;
- (BOOL)_textShouldFillFieldEditorHeight;
- (long long)_blurEffectStyle;
- (BOOL)_shouldDetermineInterfaceStyleTextColor;
- (void)insertTextSuggestion:(id)arg1;
- (id)textInputTraits;
- (void)_setBottomEffectBackgroundVisible:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_becomeFirstResponder;
- (void)_activateSelectionView;
- (void)_removeEffectsBackgroundViews;
- (void)_clearBackgroundViews;
- (void)_updateBackgroundViewsAnimated:(BOOL)arg1;
- (void)updateForBackdropStyle:(unsigned long long)arg1;
- (void)_applyHighlightedAnimated:(BOOL)arg1;
- (void)_setBackgroundViewsAlpha:(double)arg1;
- (void)_setAnimatesBackgroundCornerRadius:(BOOL)arg1;
- (id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2;
- (void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (id)_placeholderColor;
- (Class)_systemBackgroundViewClass;
- (Class)_placeholderLabelClass;
- (void)tintColorDidChange;
- (long long)_suffixLabelTextAlignment;
- (struct CGRect)_suffixFrame;
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(BOOL)arg2;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (BOOL)_becomeFirstResponderWhenPossible;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_clearButtonSize;
- (struct CGRect)_bookmarkViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_searchIconViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (BOOL)_shouldCenterPlaceholder;
- (struct CGRect)_adjustmentsForSearchIconViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_adjustedTextOrEditingRect:(struct CGRect)arg1 forBounds:(struct CGRect)arg2;
- (BOOL)_shouldResignOnEditingDidEndOnExit;
@property(retain, nonatomic, setter=_setSearchTextOffetValue:) NSValue *_searchTextOffsetValue;
- (id)_offsetValueForIcon:(long long)arg1;
- (void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2;
- (BOOL)_showsClearButtonWhenEmpty;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
