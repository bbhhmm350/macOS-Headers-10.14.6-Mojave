//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@interface NSTextView (SafariNSTextViewExtras)
- (BOOL)willHandleArrowUpKey;
- (BOOL)willHandleArrowDownKey;
- (BOOL)hasSingleNonEmptyTrailingSelection;
- (BOOL)validate_takeFindStringFromSelection:(id)arg1;
- (void)takeFindStringFromSelection:(id)arg1;
- (BOOL)canTakeFindStringFromSelection;
@end
