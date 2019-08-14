//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXScrollableEditToolContentController.h"

#import "IPXPluginControllerContentDelegate-Protocol.h"

@class IPXEditPluginController, IPXEditToolHeaderView, NSArray, NSStackView, NSString;

@interface IPXEditPluginsContentController : IPXScrollableEditToolContentController <IPXPluginControllerContentDelegate>
{
    IPXEditPluginController *_pluginController;
    NSStackView *_stackView;
    IPXEditToolHeaderView *_headerView;
    NSArray *_displayedExtensions;
}

- (void).cxx_destruct;
- (void)pluginListDidUpdate;
- (void)didSelectItemController:(id)arg1;
- (void)versionDidBecomeAvailable;
- (void)versionDidChangeMetadata;
- (id)_buttonForExtension:(id)arg1;
- (void)_addSeparatorToStack:(id)arg1;
- (BOOL)_isValidExtension:(id)arg1 forVersion:(id)arg2;
- (void)updatePlugins;
- (void)loadView;
- (id)initWithPluginsController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
