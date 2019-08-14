//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCTime;

@interface FCTimeRange : NSObject
{
    FCTime *_startTime;
    FCTime *_endTime;
}

+ (id)timeRangeWithDictionary:(id)arg1;
+ (id)timeRangeWithStartTime:(id)arg1 endTime:(id)arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)includesTime:(id)arg1;
- (BOOL)wraps;
- (id)endTime;
- (id)startTime;
- (id)plistRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;
- (void)dealloc;

@end
