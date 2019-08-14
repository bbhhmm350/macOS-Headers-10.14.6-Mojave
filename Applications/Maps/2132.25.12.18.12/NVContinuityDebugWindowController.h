//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSTextViewDelegate-Protocol.h"

@class NSString, NSTextView, NVAppDelegate;

__attribute__((visibility("hidden")))
@interface NVContinuityDebugWindowController : NSWindowController <NSTextViewDelegate>
{
    NSTextView *_currentStateTextView;
    NSTextView *_lastStateTextView;
    NVAppDelegate *_delegate;
}

+ (id)keyPathsForValuesAffectingCurrentState;
@property(retain, nonatomic) NVAppDelegate *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
@property(readonly, nonatomic) NSString *currentState;
- (id)mainWindowController;
- (id)sharedMapsDelegate;
- (id)init;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
