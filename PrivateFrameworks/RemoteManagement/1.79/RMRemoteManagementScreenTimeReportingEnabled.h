//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <RemoteManagement/NSCopying-Protocol.h>

@interface RMRemoteManagementScreenTimeReportingEnabled : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    BOOL _enabled;
    CDStruct_93f1cf87 _has;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasEnabled;
@property(nonatomic) BOOL hasTimestamp;

@end

