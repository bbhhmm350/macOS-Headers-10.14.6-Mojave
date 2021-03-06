//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CXCallDirectoryStoreExtension : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    long long _primaryKey;
    long long _priority;
    long long _state;
    NSDate *_stateLastModified;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *stateLastModified; // @synthesize stateLastModified=_stateLastModified;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long primaryKey; // @synthesize primaryKey=_primaryKey;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

