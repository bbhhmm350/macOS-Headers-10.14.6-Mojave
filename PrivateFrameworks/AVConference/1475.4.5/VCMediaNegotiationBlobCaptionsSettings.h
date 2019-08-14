//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable <NSCopying>
{
    unsigned int _senderLanguages;
    BOOL _canDisplayCaptions;
    struct {
        unsigned int senderLanguages:1;
        unsigned int canDisplayCaptions:1;
    } _has;
}

@property(nonatomic) unsigned int senderLanguages; // @synthesize senderLanguages=_senderLanguages;
@property(nonatomic) BOOL canDisplayCaptions; // @synthesize canDisplayCaptions=_canDisplayCaptions;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSenderLanguages;
@property(nonatomic) BOOL hasCanDisplayCaptions;

@end
