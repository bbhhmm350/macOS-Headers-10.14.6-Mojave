//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GradientView, NSLayoutConstraint, NSTextField;

@interface VideoHeaderView : NSView
{
    GradientView *_gradientView;
    NSLayoutConstraint *_imageRightEdgeTrailingToCenterConstraint;
    NSView *_avatarViewContainer;
    NSTextField *_textWithImage;
    NSTextField *_subTextWithImage;
    NSTextField *_textCentered;
    NSTextField *_subTextCentered;
}

@property(nonatomic) __weak NSTextField *subTextCentered; // @synthesize subTextCentered=_subTextCentered;
@property(nonatomic) __weak NSTextField *textCentered; // @synthesize textCentered=_textCentered;
@property(nonatomic) __weak NSTextField *subTextWithImage; // @synthesize subTextWithImage=_subTextWithImage;
@property(nonatomic) __weak NSTextField *textWithImage; // @synthesize textWithImage=_textWithImage;
@property(nonatomic) __weak NSView *avatarViewContainer; // @synthesize avatarViewContainer=_avatarViewContainer;
@property(nonatomic) __weak NSLayoutConstraint *imageRightEdgeTrailingToCenterConstraint; // @synthesize imageRightEdgeTrailingToCenterConstraint=_imageRightEdgeTrailingToCenterConstraint;
@property(nonatomic) __weak GradientView *gradientView; // @synthesize gradientView=_gradientView;
- (void).cxx_destruct;

@end
