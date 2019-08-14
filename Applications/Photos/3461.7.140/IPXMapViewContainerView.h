//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXView.h>

#import "NSAccessibilityContainsTransientUI-Protocol.h"
#import "NSAccessibilityGroup-Protocol.h"

@class NSString;
@protocol IPXAccessibilityContainsTransientUI;

@interface IPXMapViewContainerView : UXView <NSAccessibilityGroup, NSAccessibilityContainsTransientUI>
{
    id <IPXAccessibilityContainsTransientUI> _accessibilityDelegate;
}

@property(nonatomic) __weak id <IPXAccessibilityContainsTransientUI> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (void).cxx_destruct;
- (BOOL)isAccessibilityAlternateUIVisible;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowAlternateUI;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
