//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class BarBackground, NSView;

@interface PVBannerViewController : NSViewController
{
    NSView *firstKeySubview;
    NSView *lastKeySubview;
    id _delegate;
}

+ (long long)bannerSortOrder;
@property __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)compareBanners:(id)arg1;
- (void)didUninstallBannerView;
- (void)didInstallBannerView;
- (void)uninstallWithAnimation:(BOOL)arg1;
- (void)installWithAnimation:(BOOL)arg1;
- (void)uninstall:(id)arg1;
- (BOOL)isInstalled;
@property(retain) BarBackground *view; // @dynamic view;
- (id)nibName;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

@end

