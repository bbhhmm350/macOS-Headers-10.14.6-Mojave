//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SATimestamp;

__attribute__((visibility("hidden")))
@interface SAKPerfState : NSObject
{
    unsigned long long _onCore;
    BOOL _mostRecentSampleIsPET;
    struct ktrace_session *_session;
    SATimestamp *_mostRecentSampleTimestamp;
}

+ (id)kperfStateWithSession:(struct ktrace_session *)arg1;
@property BOOL mostRecentSampleIsPET; // @synthesize mostRecentSampleIsPET=_mostRecentSampleIsPET;
@property(retain) SATimestamp *mostRecentSampleTimestamp; // @synthesize mostRecentSampleTimestamp=_mostRecentSampleTimestamp;
@property(readonly) struct ktrace_session *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (BOOL)isNextSampleisOnCoreForCpu:(unsigned int)arg1;
- (void)nextSampleForCpu:(unsigned int)arg1 isOnCore:(BOOL)arg2;
- (id)initWithSession:(struct ktrace_session *)arg1;

@end
