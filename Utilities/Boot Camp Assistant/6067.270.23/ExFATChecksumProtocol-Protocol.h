//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString;

@protocol ExFATChecksumProtocol
- (void)deleteNVRAM:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)writeNVRAM:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)getNVRAMInt:(NSString *)arg1 withReply:(void (^)(int))arg2;
- (void)getNVRAMString:(NSString *)arg1 withReply:(void (^)(NSString *))arg2;
- (void)getNewBootSectorChecksum:(NSString *)arg1 bytesPerSector:(unsigned int)arg2 withReply:(void (^)(unsigned int))arg3;
@end
