//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTFCompactRoadSpeeds : PBCodable <NSCopying>
{
    CDStruct_5df41632 _geoIds;
    int _color;
    float _confidence;
    unsigned int _decayTimeWindowInMinutes;
    float _endOffset;
    NSData *_openlr;
    NSMutableArray *_predictedSpeeds;
    unsigned int _speedKph;
    float _startOffset;
    BOOL _hidden;
    CDStruct_c254c6af _has;
}

+ (Class)predictedSpeedType;
@property(retain, nonatomic) NSData *openlr; // @synthesize openlr=_openlr;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) unsigned int decayTimeWindowInMinutes; // @synthesize decayTimeWindowInMinutes=_decayTimeWindowInMinutes;
@property(nonatomic) unsigned int speedKph; // @synthesize speedKph=_speedKph;
@property(retain, nonatomic) NSMutableArray *predictedSpeeds; // @synthesize predictedSpeeds=_predictedSpeeds;
@property(nonatomic) float endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) float startOffset; // @synthesize startOffset=_startOffset;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasOpenlr;
@property(nonatomic) BOOL hasConfidence;
@property(nonatomic) BOOL hasDecayTimeWindowInMinutes;
@property(nonatomic) BOOL hasSpeedKph;
- (int)StringAsColor:(id)arg1;
- (id)colorAsString:(int)arg1;
@property(nonatomic) BOOL hasColor;
@property(nonatomic) int color; // @synthesize color=_color;
- (id)predictedSpeedAtIndex:(unsigned long long)arg1;
- (unsigned long long)predictedSpeedsCount;
- (void)addPredictedSpeed:(id)arg1;
- (void)clearPredictedSpeeds;
@property(nonatomic) BOOL hasHidden;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL hasEndOffset;
@property(nonatomic) BOOL hasStartOffset;
- (void)setGeoIds:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)geoIdsAtIndex:(unsigned long long)arg1;
- (void)addGeoIds:(long long)arg1;
- (void)clearGeoIds;
@property(readonly, nonatomic) long long *geoIds;
@property(readonly, nonatomic) unsigned long long geoIdsCount;
- (void)dealloc;

@end
