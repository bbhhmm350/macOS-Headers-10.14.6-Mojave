//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetTimerAttributeIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBTimer;

@interface _INPBSetTimerAttributeIntent : PBCodable <_INPBSetTimerAttributeIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int toDuration:1;
    } _has;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTimer *_targetTimer;
    double _toDuration;
}

@property(nonatomic) double toDuration; // @synthesize toDuration=_toDuration;
@property(retain, nonatomic) _INPBTimer *targetTimer; // @synthesize targetTimer=_targetTimer;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasToDuration;
@property(readonly, nonatomic) BOOL hasTargetTimer;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
