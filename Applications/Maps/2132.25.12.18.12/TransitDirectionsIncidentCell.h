//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TransitDirectionsIconCell.h"

@class NSLayoutConstraint, NVInlineButton;
@protocol TransitDirectionsInstructionsCellDelegate><TransitDirectionsIncidentCellDelegate;

__attribute__((visibility("hidden")))
@interface TransitDirectionsIncidentCell : TransitDirectionsIconCell
{
    NSLayoutConstraint *_topToPrimaryLabelBaselineConstraint;
    NVInlineButton *_incidentButton;
    id <TransitDirectionsInstructionsCellDelegate><TransitDirectionsIncidentCellDelegate> _delegate;
}

@property(nonatomic) __weak id <TransitDirectionsInstructionsCellDelegate><TransitDirectionsIncidentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NVInlineButton *incidentButton; // @synthesize incidentButton=_incidentButton;
- (void).cxx_destruct;
- (void)_incidentButtonTapped:(id)arg1;
- (double)_topToPrimaryLabelBaselineDistance;
- (void)configureWithItem:(id)arg1;
- (id)_initialConstraints;
- (void)_createSubviews;
- (id)incidentItem;

@end
