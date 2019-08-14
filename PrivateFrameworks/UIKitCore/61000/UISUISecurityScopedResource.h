//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class FPSandboxingURLWrapper, NSURL;

@interface UISUISecurityScopedResource : NSObject <NSSecureCoding>
{
    BOOL _hasActiveAccessAssertion;
    NSURL *_url;
    long long _allowedAccess;
    FPSandboxingURLWrapper *_sandboxExtensionWrapper;
    long long _underlyingSandboxAssertionHandle;
}

+ (id)_scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3;
+ (id)uniquedSecurityScopedResources:(id)arg1;
+ (id)_sandboxExtensionClassForAllowedAccess:(long long)arg1;
+ (BOOL)_isValidURLForIssuingSandboxExtension:(id)arg1;
+ (id)readwriteSandboxExtensionClassString;
+ (id)readonlySandboxExtensionClassString;
+ (BOOL)supportsSecureCoding;
+ (id)scopedResourceWithURL:(id)arg1 allowedAccess:(long long)arg2;
+ (id)scopedResourceWithFileURL:(id)arg1 allowedAccess:(long long)arg2;
+ (id)scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3;
+ (id)scopedResourceWithAbsolutePath:(id)arg1 allowedAccess:(long long)arg2;
@property(nonatomic) long long underlyingSandboxAssertionHandle; // @synthesize underlyingSandboxAssertionHandle=_underlyingSandboxAssertionHandle;
@property(nonatomic) BOOL hasActiveAccessAssertion; // @synthesize hasActiveAccessAssertion=_hasActiveAccessAssertion;
@property(retain, nonatomic) FPSandboxingURLWrapper *sandboxExtensionWrapper; // @synthesize sandboxExtensionWrapper=_sandboxExtensionWrapper;
@property(nonatomic) long long allowedAccess; // @synthesize allowedAccess=_allowedAccess;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)_isEqualAccessToSecurityScopedResource:(id)arg1;
- (void)stopAccessing;
- (void)startAccessing;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL sourceIsManaged;
- (id)initWithAbsoluteURL:(id)arg1 sandboxExtensionWrapper:(id)arg2 allowedAccess:(long long)arg3;

@end
