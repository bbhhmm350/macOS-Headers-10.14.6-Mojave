//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDLTSUAssertionHandler : NSObject
{
}

+ (int)_atomicIncrementAssertCount;
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(BOOL)arg4 description:(const char *)arg5;
+ (void)simulateCrashWithMessage:(id)arg1;
+ (id)packedBacktraceStringWithReturnAddresses:(id)arg1;
+ (id)packedBacktraceString;
+ (void)_logBacktraceWithCallStackSymbols:(id)arg1;
+ (void)logFullBacktrace;
+ (id)p_performBlockIgnoringAssertions:(CDUnknownBlockType)arg1 onlyFatal:(BOOL)arg2;
+ (id)performBlockIgnoringFatalAssertions:(CDUnknownBlockType)arg1;
+ (id)performBlockIgnoringAssertions:(CDUnknownBlockType)arg1;
+ (void)initialize;

@end
