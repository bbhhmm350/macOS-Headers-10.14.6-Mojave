//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TouchBarViewController.h"

@class NSButton;

@interface AddToLibraryButtonTouchBarViewController : TouchBarViewController
{
    NSButton *_addToLibraryButton;
}

+ (id)makeTouchBarItemWithIdentifier:(id)arg1;
@property(retain, nonatomic) NSButton *addToLibraryButton; // @synthesize addToLibraryButton=_addToLibraryButton;
- (void)installHandlers;
@property(readonly, nonatomic) BOOL shouldEnableButton;
- (void)handleSelectionChanged:(id)arg1;
- (void)updateUI;
- (void)loadView;
- (void)handleAddToLibrary:(id)arg1;
- (void)dealloc;

@end
