//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIActionSheetPresentationControllerVisualStyle-Protocol.h>

@class NSString, UIActionSheetiOSDismissActionView, UIColor;

__attribute__((visibility("hidden")))
@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle>
{
    UIActionSheetiOSDismissActionView *_dismissActionView;
}

@property(retain, nonatomic) UIActionSheetiOSDismissActionView *dismissActionView; // @synthesize dismissActionView=_dismissActionView;
- (void).cxx_destruct;
@property(readonly) double cornerRadius;
@property(readonly) UIColor *dimmingViewColor;
@property(readonly) double dismissToContentSpacing;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

