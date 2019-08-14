//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PLNetworkEnergyModel : NSObject
{
    unsigned char _linkType;
    unsigned int _updateCount;
    double _powerlevel1Duration;
    double _powerlevel2Duration;
    double _powerlevel3Duration;
    double _overallBytes;
    double _overallDuration;
    NSString *_taskUUID;
    NSArray *_linkCost;
    NSArray *_linkDuration;
    NSArray *_linkLevel1Parameters;
}

@property(retain) NSArray *linkLevel1Parameters; // @synthesize linkLevel1Parameters=_linkLevel1Parameters;
@property(retain) NSArray *linkDuration; // @synthesize linkDuration=_linkDuration;
@property(retain) NSArray *linkCost; // @synthesize linkCost=_linkCost;
@property(retain) NSString *taskUUID; // @synthesize taskUUID=_taskUUID;
@property unsigned int updateCount; // @synthesize updateCount=_updateCount;
@property double overallDuration; // @synthesize overallDuration=_overallDuration;
@property double overallBytes; // @synthesize overallBytes=_overallBytes;
@property unsigned char linkType; // @synthesize linkType=_linkType;
@property double powerlevel3Duration; // @synthesize powerlevel3Duration=_powerlevel3Duration;
@property double powerlevel2Duration; // @synthesize powerlevel2Duration=_powerlevel2Duration;
@property double powerlevel1Duration; // @synthesize powerlevel1Duration=_powerlevel1Duration;
- (void).cxx_destruct;
- (void)reportEnergyToPowerlogWithClientID:(short)arg1;
- (void)updateAllLevelTimesWithLevel1Time:(double)arg1 withUpdateDuration:(double)arg2;
- (double)computeLevel1TimeWithBytes:(double)arg1;
- (double)getEnergy;
- (void)updateWithBytes:(double)arg1 withDuration:(double)arg2;
- (id)description;
- (id)initWithLinkType:(unsigned char)arg1 withTaskUUID:(id)arg2;
- (id)initWithLinkType:(unsigned char)arg1;

@end
