//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICNFMCMessageTracer : NSObject
{
}

+ (id)bucketSignatureForValue:(long long)arg1;
+ (void)messageTraceDomain:(id)arg1 withCustomKeysAndValues:(id)arg2;
+ (void)messageTraceResult:(const char *)arg1 domain:(id)arg2 signature:(id)arg3;
+ (void)messageTraceResult:(const char *)arg1 domain:(id)arg2 signature:(id)arg3 extraStatus:(id)arg4;
+ (void)messageTraceResult:(const char *)arg1 domain:(id)arg2 uuid:(id)arg3 signature:(id)arg4 extraStatus:(id)arg5;
+ (void)messageTraceResult:(const char *)arg1 count:(unsigned long long)arg2 domainPrefix:(id)arg3 domainSuffix:(id)arg4 signature:(id)arg5 extraStatus:(id)arg6;
+ (void)messageTraceDomainPrefix:(id)arg1 domainSuffix:(id)arg2 signature:(id)arg3 signature2:(id)arg4 extraStatus:(id)arg5;
+ (void)messageTraceOperationError:(id)arg1 domainPrefix:(id)arg2 domainSuffix:(id)arg3 uuid:(id)arg4 duration:(double)arg5 count:(unsigned long long)arg6 size:(unsigned long long)arg7;

@end
