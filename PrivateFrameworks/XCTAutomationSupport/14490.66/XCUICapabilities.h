//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCUICapabilities-Protocol.h>

@class NSDictionary, NSString;
@protocol XCUICapabilities;

@interface XCUICapabilities : NSObject <XCUICapabilities>
{
}

@property(readonly) id <XCUICapabilities> bridgedProcessCapabilities;
@property(readonly) BOOL automationSessionSupportsAnimationsIdleNotifications;
@property(readonly) BOOL automationSessionSupportsMainRunLoopIdleNotifications;
@property(readonly) BOOL automationSessionSupportsAttributeFetching;
@property(readonly) NSDictionary *truncatedValueSnapshotParameter;
@property(readonly) NSString *truncatedValueAttribute;
@property(readonly) BOOL supportsTruncatedValue;
@property(readonly) long long automationSessionSupport;
- (BOOL)_supportsFeature:(id)arg1 requiresMacOS:(long long)arg2 macOSBuildNumber:(long long)arg3 iOS:(long long)arg4 iOSBuildNumber:(long long)arg5 tvOS:(long long)arg6 tvOSBuildNumber:(long long)arg7 watchOS:(long long)arg8 watchOSBuildNumber:(long long)arg9;
- (BOOL)_supportsFeature:(id)arg1 requiresMacOS:(long long)arg2 iOS:(long long)arg3 tvOS:(long long)arg4 watchOS:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
