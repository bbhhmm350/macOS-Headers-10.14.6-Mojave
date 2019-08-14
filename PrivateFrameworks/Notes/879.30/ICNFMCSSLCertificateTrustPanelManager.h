//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ICNFMCSSLCertificateTrustPanelManager : NSObject
{
    id _hostStateLock;
    NSMutableSet *_hostnamesAlreadyPromptedFor;
    NSMutableDictionary *_hostnamesToPendingOperations;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (void)resetCertificateTrustPanelForHost:(id)arg1;
- (BOOL)showCertificateTrustPanelForError:(id)arg1 host:(id)arg2 didPromptUser:(char *)arg3;
- (void)dealloc;
- (id)init;

@end
