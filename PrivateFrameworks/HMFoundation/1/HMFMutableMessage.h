//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFMessage.h>

@class HMFActivity, HMFMessageDestination, HMFMessageTransport, NSDictionary, NSString, NSUUID;

@interface HMFMutableMessage : HMFMessage
{
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) __weak HMFMessageTransport *transport; // @dynamic transport;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *headers; // @dynamic headers;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;
@property(retain, nonatomic) HMFActivity *activity; // @dynamic activity;
@property(nonatomic) long long qualityOfService; // @dynamic qualityOfService;
@property(copy, nonatomic) NSString *name; // @dynamic name;

// Remaining properties
@property(retain, nonatomic) HMFMessageDestination *destination; // @dynamic destination;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDictionary *messagePayload; // @dynamic messagePayload;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @dynamic responseHandler;

@end
