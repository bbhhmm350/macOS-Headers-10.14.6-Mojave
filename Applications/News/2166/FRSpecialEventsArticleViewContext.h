//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface FRSpecialEventsArticleViewContext : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_position;
    NSNumber *_count;
    NSString *_moduleExposureID;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *moduleExposureID; // @synthesize moduleExposureID=_moduleExposureID;
@property(readonly, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(readonly, nonatomic) NSNumber *position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPosition:(id)arg1 count:(id)arg2 moduleExposureID:(id)arg3 type:(long long)arg4;
- (id)initWithTopOfFeedHeadlineContext:(id)arg1;

@end
