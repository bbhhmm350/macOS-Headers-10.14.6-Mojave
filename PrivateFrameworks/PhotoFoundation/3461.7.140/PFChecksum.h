//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/NSCopying-Protocol.h>

@interface PFChecksum : NSObject <NSCopying>
{
    struct PFChecksumBytes _bytes;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToBytes:(struct PFChecksumBytes)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)string;
- (struct PFChecksumBytes)checksumBytes;
- (id)initWithChecksumAsData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithBytes:(struct PFChecksumBytes)arg1;

@end
