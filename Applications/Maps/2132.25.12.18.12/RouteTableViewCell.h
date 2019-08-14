//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RoutePickingCell.h"

#import "MKMultiLineLabelContainer-Protocol.h"

@class NSString, NVInlineButton, NVRoute, RouteTableViewCellButtonConstraintsController, _MKUILabel;
@protocol RouteTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface RouteTableViewCell : RoutePickingCell <MKMultiLineLabelContainer>
{
    _MKUILabel *_primaryLabel;
    _MKUILabel *_secondaryLabel;
    BOOL _showDisclosureButton;
    NVRoute *_route;
    struct NVInlineButton *_disclosureButton;
    RouteTableViewCellButtonConstraintsController *_buttonConstraintsController;
    id <RouteTableViewCellDelegate> _delegate;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (id)reuseIdentifier;
@property(nonatomic) __weak id <RouteTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) RouteTableViewCellButtonConstraintsController *buttonConstraintsController; // @synthesize buttonConstraintsController=_buttonConstraintsController;
@property(nonatomic) BOOL showDisclosureButton; // @synthesize showDisclosureButton=_showDisclosureButton;
@property(readonly, nonatomic) NVInlineButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(retain, nonatomic) NVRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)setObjectValue:(id)arg1;
- (id)multilineTextFieldsWithinContainer;
- (void)_disclosureButtonTapped:(id)arg1;
- (id)_buttonConstraintsController;
- (struct NVInlineButton *)_disclosureButton;
- (void)_updateCellLabels;
- (double)_distanceToPositionPrimaryLabelFirstBaseline;
- (id)_anchorFromWhichToPositionPrimaryLabelFirstBaseline;
- (void)_updateConstraintValues;
- (id)_autolayoutConstraints;
- (void)_createSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
