//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

#import "NSAccessibilityButton-Protocol.h"

@class NSString, TTTabViewItem;

@interface TTAXTabCloseButton : NSAccessibilityElement <NSAccessibilityButton>
{
    TTTabViewItem *_tabViewItem;
}

@property TTTabViewItem *tabViewItem; // @synthesize tabViewItem=_tabViewItem;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityTitle;
- (struct CGRect)accessibilityFrameInParentSpace;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (id)initWithTabViewItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
