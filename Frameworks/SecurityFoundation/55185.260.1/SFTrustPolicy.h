//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface SFTrustPolicy : NSObject <NSCopying>
{
    id _trustPolicyInternal;
}

- (void).cxx_destruct;
- (BOOL)evaluateCertificateChain:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
