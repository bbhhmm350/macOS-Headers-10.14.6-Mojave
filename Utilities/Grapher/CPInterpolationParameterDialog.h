//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPModalDialog.h"

@class EInterpolationParameterView, NSWindow;

@interface CPInterpolationParameterDialog : CPModalDialog
{
    NSWindow *mParentWindow;
    id mEquation;
    EInterpolationParameterView *mParameterView;
}

- (void)dialogDidCancel;
- (void)dialogDidOK;
- (BOOL)dialogShouldOK;
- (void)editParameterName:(id)arg1 withParameterView:(id)arg2;
- (id)parentWindow;

@end
