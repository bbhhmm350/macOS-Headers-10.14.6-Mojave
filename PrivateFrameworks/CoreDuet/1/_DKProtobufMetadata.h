//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKProtobufConverting-Protocol.h>

@class NSDictionary, NSString;

@interface _DKProtobufMetadata : NSObject <_DKProtobufConverting>
{
    NSDictionary *_dictionary;
}

+ (id)createFromData:(id)arg1;
+ (id)fromPBCodable:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)asData;
- (id)initWithDictionary:(id)arg1;
- (id)toPBCodable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

