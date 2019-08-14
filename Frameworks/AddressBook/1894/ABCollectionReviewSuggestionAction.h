//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCollectionAbstractAction.h>

#import <AddressBook/ABSuggestedValueViewControllerDelegate-Protocol.h>
#import <AddressBook/NSPopoverDelegate-Protocol.h>

@class ABCollectionViewItem, ABSuggestedValueViewController, NSPopover, NSString;
@protocol ABCardCollectionViewDelegate;

@interface ABCollectionReviewSuggestionAction : ABCollectionAbstractAction <NSPopoverDelegate, ABSuggestedValueViewControllerDelegate>
{
    ABCollectionViewItem *_targetItem;
    id <ABCardCollectionViewDelegate> _collectionViewDelegate;
    ABSuggestedValueViewController *_viewController;
    NSPopover *_popover;
}

+ (id)sourceApplicationNameForSuggestedViewItem:(id)arg1;
+ (id)snippetWithDonatedValue:(id)arg1;
+ (id)snippetWithSuggestedLabeledValue:(id)arg1;
+ (id)snippetWithLabeledValue:(id)arg1;
@property(retain, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) ABSuggestedValueViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <ABCardCollectionViewDelegate> collectionViewDelegate; // @synthesize collectionViewDelegate=_collectionViewDelegate;
@property(nonatomic) __weak ABCollectionViewItem *targetItem; // @synthesize targetItem=_targetItem;
- (void).cxx_destruct;
- (void)confirmationViewController:(id)arg1 didRejectLabeledValue:(id)arg2;
- (void)confirmationViewController:(id)arg1 didConfirmLabeledValue:(id)arg2;
- (void)configureViewWithSnippet:(id)arg1 labeledValue:(id)arg2;
- (id)labeledValueFromCollectionViewItem:(id)arg1;
- (id)snippetFromCollectionViewItem:(id)arg1;
- (void)displaySnippetViewControllerInPopoverRelativeToCollectionViewItem:(id)arg1;
- (void)updateSnippetViewControllerWithValueFromCollectionViewItem:(id)arg1;
- (void)messageTraceExecutionOfActionOnCollectionViewItem:(id)arg1;
- (void)ensurePopoverIsCreated;
- (void)executeWithSender:(id)arg1 target:(id)arg2;
- (void)executeWithTarget:(id)arg1;
- (BOOL)validateWithTarget:(id)arg1;
- (void)dealloc;
- (id)initWithCollectionViewDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
