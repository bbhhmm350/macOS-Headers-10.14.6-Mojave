//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionTaskDelegatePrivate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UnitTestSchemeUpgradeTaskDelegate : NSObject <NSURLSessionTaskDelegatePrivate>
{
}

- (BOOL)testPassed:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithTestDisposition:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
