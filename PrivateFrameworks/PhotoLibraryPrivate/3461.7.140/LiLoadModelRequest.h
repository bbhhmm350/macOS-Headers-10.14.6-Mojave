//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRequest.h>

#import <PhotoLibraryPrivate/LiSqliteBufferReaderRequest-Protocol.h>

@class LiKeyPath, NSArray, NSString;

@interface LiLoadModelRequest : LiRequest <LiSqliteBufferReaderRequest>
{
    BOOL _ordered;
    CDUnknownBlockType _bufferReaderHandler;
    unsigned long long _tableId;
    long long _modelId;
    long long _optimisticLock;
    NSArray *_inValueArray;
    LiKeyPath *_inValueKeyPath;
    NSArray *_properties;
}

+ (unsigned char)encodingObjectType;
+ (BOOL)requiresLibrary;
@property(readonly) NSArray *properties; // @synthesize properties=_properties;
@property(readonly) LiKeyPath *inValueKeyPath; // @synthesize inValueKeyPath=_inValueKeyPath;
@property(readonly) NSArray *inValueArray; // @synthesize inValueArray=_inValueArray;
@property(readonly) BOOL ordered; // @synthesize ordered=_ordered;
@property(readonly) long long optimisticLock; // @synthesize optimisticLock=_optimisticLock;
@property(readonly) long long modelId; // @synthesize modelId=_modelId;
@property(readonly, nonatomic) unsigned long long tableId; // @synthesize tableId=_tableId;
@property(copy, nonatomic) CDUnknownBlockType bufferReaderHandler; // @synthesize bufferReaderHandler=_bufferReaderHandler;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (BOOL)isValid:(id *)arg1;
- (void)setLoadOnOptimisticLockChangeWithOptimisticLock:(long long)arg1;
- (BOOL)loadOnOptimisticLockChange;
- (id)initWithProperties:(id)arg1 inValueArray:(id)arg2 inValueKeyPath:(id)arg3 ordered:(BOOL)arg4 tableId:(long long)arg5;
- (id)initWithProperties:(id)arg1 modelId:(long long)arg2 tableId:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
