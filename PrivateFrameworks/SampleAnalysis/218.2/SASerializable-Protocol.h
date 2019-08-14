//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SampleAnalysis/NSObject-Protocol.h>

@class NSString;

@protocol SASerializable <NSObject>
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)arg1 bufferLength:(unsigned long long)arg2;
+ (NSString *)classDictionaryKey;
- (void)populateReferencesUsingBuffer:(const void *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (BOOL)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
@end
