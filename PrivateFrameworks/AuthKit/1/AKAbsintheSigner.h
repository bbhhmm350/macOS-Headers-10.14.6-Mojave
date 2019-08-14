//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface AKAbsintheSigner : NSObject
{
    struct NACContextOpaque_ *_context;
    NSDate *_contextCreationDate;
}

+ (id)sharedSigner;
- (void).cxx_destruct;
- (BOOL)_didSigningContextExpire;
- (void)dealloc;
- (void)_destroySigningContext;
- (void)_establishSessionWithInfo:(id)arg1 sessionURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_sessionInfoFromCertificateData:(id)arg1;
- (void)_createSigningContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_generateSignatureForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signatureForURLRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)signatureForURLRequest:(id)arg1;

@end
