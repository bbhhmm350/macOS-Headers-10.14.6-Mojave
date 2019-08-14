//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordIdentifier, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CKDAssetID : NSObject <NSCopying>
{
    CKDPRecordIdentifier *_recordID;
    NSData *_fileSignature;
    NSData *_referenceSignature;
    NSNumber *_size;
}

@property(readonly, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(readonly, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(readonly, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(readonly, nonatomic) CKDPRecordIdentifier *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRecordID:(id)arg1 fileSignature:(id)arg2 referenceSignature:(id)arg3 size:(id)arg4;

@end
