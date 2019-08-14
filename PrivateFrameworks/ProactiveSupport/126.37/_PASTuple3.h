//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/NSCopying-Protocol.h>

@interface _PASTuple3 : NSObject <NSCopying>
{
    NSObject *_first;
    NSObject *_second;
    NSObject *_third;
}

+ (id)tupleWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3;
@property(readonly, nonatomic) NSObject *third; // @synthesize third=_third;
@property(readonly, nonatomic) NSObject *second; // @synthesize second=_second;
@property(readonly, nonatomic) NSObject *first; // @synthesize first=_first;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToTuple3:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
