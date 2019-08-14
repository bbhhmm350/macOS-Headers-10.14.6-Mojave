//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>
#import <HomeUI/HUEditableTextCellProtocol-Protocol.h>

@class HFItem, HUCheckmarkAccessoryView, NSArray, NSString, UITapGestureRecognizer, UITextField;
@protocol HUEditableCheckmarkDelegate, HUResizableCellDelegate;

@interface HUEditableCheckmarkTextCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUEditableTextCellProtocol>
{
    BOOL _disabled;
    BOOL _disableCheckmark;
    BOOL _isChecked;
    BOOL _allowCheckmarkSelectionWhileDisabled;
    UITextField *_textField;
    HFItem *_item;
    HUCheckmarkAccessoryView *_checkmarkView;
    id <HUEditableCheckmarkDelegate> _delegate;
    NSArray *_staticConstraints;
    NSArray *_dynamicConstraints;
    UITapGestureRecognizer *_checkmarkTapRecognizer;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) UITapGestureRecognizer *checkmarkTapRecognizer; // @synthesize checkmarkTapRecognizer=_checkmarkTapRecognizer;
@property(retain, nonatomic) NSArray *dynamicConstraints; // @synthesize dynamicConstraints=_dynamicConstraints;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(nonatomic) __weak id <HUEditableCheckmarkDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL allowCheckmarkSelectionWhileDisabled; // @synthesize allowCheckmarkSelectionWhileDisabled=_allowCheckmarkSelectionWhileDisabled;
@property(nonatomic, setter=setChecked:) BOOL isChecked; // @synthesize isChecked=_isChecked;
@property(nonatomic) BOOL disableCheckmark; // @synthesize disableCheckmark=_disableCheckmark;
@property(retain, nonatomic) HUCheckmarkAccessoryView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_checkmarkTapped:(id)arg1;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
