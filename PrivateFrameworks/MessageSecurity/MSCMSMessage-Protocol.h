//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MessageSecurity/MSMessage-Protocol.h>

@class MSOID, NSData;
@protocol MSCMSMessage;

@protocol MSCMSMessage <MSMessage>
@property(retain) MSOID *contentType;
@property(retain) id <MSCMSMessage> embeddedContent;
@property(retain, nonatomic) NSData *dataContent;
@property(readonly) MSOID *type;
@end

