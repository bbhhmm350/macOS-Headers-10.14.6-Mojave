//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KeychainItemBasic, NSWindow, SFCertificateView;

@interface CertificateDetachedView : NSObject
{
    SFCertificateView *_certView;
    NSWindow *_window;
    KeychainItemBasic *_item;
}

- (void)makeKeyAndOrderFront:(id)arg1;
- (void)show:(id)arg1;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)forceClose;
- (id)initWithItem:(id)arg1;

@end
