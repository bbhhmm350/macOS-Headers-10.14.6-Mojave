//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBLRUCacheEntry : PBCodable <NSCopying>
{
    unsigned long long _lastAccessed;
    NSData *_key;
    NSData *_value;
    struct {
        unsigned int lastAccessed:1;
    } _has;
}

@property(nonatomic) unsigned long long lastAccessed; // @synthesize lastAccessed=_lastAccessed;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLastAccessed;
@property(readonly, nonatomic) BOOL hasValue;
@property(readonly, nonatomic) BOOL hasKey;
- (void)dealloc;

@end
