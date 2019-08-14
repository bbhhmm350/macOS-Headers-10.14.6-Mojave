//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DDLocation, DDProduction;

@interface DDLRItem : NSObject
{
    DDProduction *_production;
    int _pos;
    long long _dotedProductionIndex;
    int _weight;
}

@property int weight; // @synthesize weight=_weight;
@property long long dotedProductionIndex; // @synthesize dotedProductionIndex=_dotedProductionIndex;
@property int pos; // @synthesize pos=_pos;
@property(retain) DDProduction *production; // @synthesize production=_production;
- (id)description;
@property(readonly) long long productionIndex;
@property(readonly) DDLocation *location;
- (id)initWithDotedProduction:(struct __DDDotedProduction *)arg1;
- (void)dealloc;

@end
