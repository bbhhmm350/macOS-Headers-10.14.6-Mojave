//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MFScriptingMessage;

@interface MFMessageAddressee : NSObject
{
    NSString *_displayName;
    NSString *_address;
    id <MFScriptingMessage> _message;
    NSString *_type;
}

@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) id <MFScriptingMessage> message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)objectSpecifier;
@property(copy, nonatomic) NSString *address;
@property(copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *formattedAddress;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithDisplayName:(id)arg1 address:(id)arg2 type:(id)arg3 message:(id)arg4;

@end
