//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

@class NSButton, NSLayoutConstraint, NSProgressIndicator, NSTrackingArea;
@protocol IPXCancelableProgressIndicatorDelegate;

@interface IPXCancelableProgressIndicatorViewController : IPXViewController
{
    BOOL _showCancelButton;
    BOOL _showProgressIndicator;
    BOOL _mouseInsideTrackingArea;
    NSButton *_cancelButton;
    NSProgressIndicator *_progressIndicator;
    id <IPXCancelableProgressIndicatorDelegate> _delegate;
    NSLayoutConstraint *_widthConstraint;
    NSTrackingArea *_progressIndicatorTrackingArea;
}

@property BOOL mouseInsideTrackingArea; // @synthesize mouseInsideTrackingArea=_mouseInsideTrackingArea;
@property(retain) NSTrackingArea *progressIndicatorTrackingArea; // @synthesize progressIndicatorTrackingArea=_progressIndicatorTrackingArea;
@property __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) BOOL showProgressIndicator; // @synthesize showProgressIndicator=_showProgressIndicator;
@property(nonatomic) BOOL showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property __weak id <IPXCancelableProgressIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)_updateViews;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)a_cancelButtonClicked:(id)arg1;
- (void)_setupProgressIndicatorTrackingArea;
- (void)viewDidLoad;

@end
