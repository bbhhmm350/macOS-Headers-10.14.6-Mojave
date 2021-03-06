//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentResponsePayloadSuccess-Protocol.h>

@class NSData, NSString;

@interface _INPBIntentResponsePayloadSuccess : PBCodable <_INPBIntentResponsePayloadSuccess, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int shouldOpenContainingApplication:1;
    } _has;
    BOOL _shouldOpenContainingApplication;
    NSData *_responseMessageData;
    NSString *_responseTypeName;
}

@property(nonatomic) BOOL shouldOpenContainingApplication; // @synthesize shouldOpenContainingApplication=_shouldOpenContainingApplication;
@property(copy, nonatomic) NSString *responseTypeName; // @synthesize responseTypeName=_responseTypeName;
@property(copy, nonatomic) NSData *responseMessageData; // @synthesize responseMessageData=_responseMessageData;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasShouldOpenContainingApplication;
@property(readonly, nonatomic) BOOL hasResponseTypeName;
@property(readonly, nonatomic) BOOL hasResponseMessageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

