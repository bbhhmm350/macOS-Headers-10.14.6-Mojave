//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSViewController.h>

@protocol IPMapEditCalloutViewControllerDelegate;

@interface IPMapEditCalloutViewController : NSViewController
{
    id <IPMapEditCalloutViewControllerDelegate> _delegate;
}

@property id <IPMapEditCalloutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateView;
- (void)resetName:(id)arg1;
- (void)confirmName:(id)arg1;
- (void)loadView;
- (void)setRepresentedObject:(id)arg1;

@end
