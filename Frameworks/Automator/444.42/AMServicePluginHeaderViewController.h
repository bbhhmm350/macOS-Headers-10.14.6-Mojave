//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/AMInputOuptutPluginHeaderViewController.h>

@class AMServiceWorkflowMetaData, NSArray, NSDictionary, NSImage, NSPopUpButton;

@interface AMServicePluginHeaderViewController : AMInputOuptutPluginHeaderViewController
{
    NSPopUpButton *_iconPopUpButton;
    NSPopUpButton *_colorPopUpButton;
    NSImage *__cachedCustomImage;
}

+ (id)_imageNames;
+ (id)_imageMenuItems;
@property(nonatomic) __weak NSPopUpButton *colorPopUpButton; // @synthesize colorPopUpButton=_colorPopUpButton;
@property(retain, nonatomic) NSImage *_cachedCustomImage; // @synthesize _cachedCustomImage=__cachedCustomImage;
@property(nonatomic) __weak NSPopUpButton *iconPopUpButton; // @synthesize iconPopUpButton=_iconPopUpButton;
- (void).cxx_destruct;
- (void)_updateImageMenu;
- (void)_updateColorPopUpButton;
- (void)_setupColorPopUpButtonIfNeeded;
@property(readonly, nonatomic) NSDictionary *_colorKeysToSystemColors;
@property(readonly, nonatomic) NSArray *_orderedColorKeys;
- (void)_addMenuEntryForColorKey:(id)arg1 withMenuTitle:(id)arg2 toPopUp:(id)arg3;
- (void)imagePopUpButtonChanged:(id)arg1;
- (void)colorPopUpButtonChanged:(id)arg1;
- (void)_chooseCustomImage;
- (void)_selectFirstImage;
- (BOOL)_chooseCustomImageCompleteWithURL:(id)arg1;
- (void)_chooseCustomImageCompleteWithImageData:(id)arg1 pathExtension:(id)arg2;
- (void)_updateCachedImage;
@property(readonly, nonatomic) AMServiceWorkflowMetaData *_serviceWorkflowMetaData;
- (id)receivesLabelTextForInputType:(id)arg1;
- (void)loadView;

@end
