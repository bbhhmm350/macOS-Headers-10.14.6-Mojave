//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface STYSentryDiagnosticsHelper : NSObject
{
}

+ (id)sentryAttributesForURL:(id)arg1;
+ (BOOL)setSentryAttributesToURL:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
+ (BOOL)compressFileAtURL:(id)arg1 outputURL:(id)arg2 error:(id *)arg3;
+ (BOOL)_close:(int)arg1 error:(id *)arg2;
+ (int)_openOutputFile:(id)arg1 error:(id *)arg2;
+ (BOOL)saveTailspin:(id)arg1 reason:(id)arg2 includeSignposts:(BOOL)arg3 includeLogs:(BOOL)arg4 startTime:(unsigned long long)arg5 endTime:(unsigned long long)arg6 symbolicate:(BOOL)arg7 error:(id *)arg8;
+ (BOOL)tailspinEnabled:(BOOL)arg1;

@end

