//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval;

@interface GEOPOIEventHours : NSObject <NSSecureCoding>
{
    NSDateInterval *_dateInterval;
    NSArray *_hours;
}

+ (id)eventHoursForDateTimeRanges:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateTimeRange:(id)arg1;
- (id)initWithDateInterval:(id)arg1;
- (id)init;

@end
