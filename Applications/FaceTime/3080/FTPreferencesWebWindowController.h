//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class NSButton, NSData, NSProgressIndicator, NSString, NSURL, NSView, WKWebView;

@interface FTPreferencesWebWindowController : NSWindowController <WKNavigationDelegate, WKScriptMessageHandler>
{
    NSView *_containerView;
    NSButton *_cancelButton;
    WKWebView *_webView;
    CDUnknownBlockType _completionBlock;
    NSURL *_url;
    NSData *_body;
    NSProgressIndicator *_progressIndicator;
}

@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) WKWebView *webView; // @synthesize webView=_webView;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)statusChanged:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)provisioningTimedOut;
- (void)provisioningCanceled;
- (void)provisioningDone;
- (void)loadURL:(id)arg1 body:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadURL:(id)arg1 body:(id)arg2;
- (void)loadViewWithSpinner;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
