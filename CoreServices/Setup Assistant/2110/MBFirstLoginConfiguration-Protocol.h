//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSString;

@protocol MBFirstLoginConfiguration
- (void)completeSetupWithHandler:(void (^)(BOOL, NSError *))arg1 notifyingProgress:(void (^)(float, NSString *))arg2;
- (BOOL)isDiskIOBound;
- (double)maximumTimeToLive;
- (double)estimatedCompletionTime;
- (NSString *)pluginDisplayName;
- (NSString *)pluginIdentifier;

@optional
- (BOOL)mustRunFirst;
- (BOOL)canRunBeforeLogin;
- (NSArray *)pluginDependencies;
@end
