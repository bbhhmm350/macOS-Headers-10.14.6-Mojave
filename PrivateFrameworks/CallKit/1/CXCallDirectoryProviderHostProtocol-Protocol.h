//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXCallDirectoryLabeledPhoneNumberEntryData, CXCallDirectoryPhoneNumberEntryData;

@protocol CXCallDirectoryProviderHostProtocol <NSObject>
- (oneway void)completeRequestWithReply:(void (^)(void))arg1;
- (oneway void)removeAllIdentificationEntriesWithReply:(void (^)(void))arg1;
- (oneway void)removeIdentificationEntriesWithData:(CXCallDirectoryPhoneNumberEntryData *)arg1 reply:(void (^)(void))arg2;
- (oneway void)addIdentificationEntriesWithData:(CXCallDirectoryLabeledPhoneNumberEntryData *)arg1 reply:(void (^)(void))arg2;
- (oneway void)removeAllBlockingEntriesWithReply:(void (^)(void))arg1;
- (oneway void)removeBlockingEntriesWithData:(CXCallDirectoryPhoneNumberEntryData *)arg1 reply:(void (^)(void))arg2;
- (oneway void)addBlockingEntriesWithData:(CXCallDirectoryPhoneNumberEntryData *)arg1 reply:(void (^)(void))arg2;
- (oneway void)isIncrementalLoadingAllowed:(void (^)(BOOL, NSError *))arg1;
@end

