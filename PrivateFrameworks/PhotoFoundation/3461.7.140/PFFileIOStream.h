//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFFileIStream.h>

#import <PhotoFoundation/PFOStream-Protocol.h>

@class NSString;

@interface PFFileIOStream : PFFileIStream <PFOStream>
{
}

- (BOOL)truncateLength:(long long)arg1;
- (BOOL)writeStream:(id)arg1 blockSize:(unsigned long long)arg2;
- (BOOL)writeStream:(id)arg1;
- (BOOL)writeStream:(const char *)arg1 length:(unsigned long long)arg2 written:(unsigned long long *)arg3;
- (BOOL)reserveLength:(long long)arg1;
- (BOOL)openStream;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
