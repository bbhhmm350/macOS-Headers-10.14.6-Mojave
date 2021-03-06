//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarAgentLink/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface ABRemoteRecord : NSObject <NSSecureCoding>
{
    NSString *_abAccountIdentifier;
    NSDate *_builtDate;
    NSDate *_creationDate;
    NSArray *_customProperties;
    BOOL _isPartialObject;
    NSDate *_modificationDate;
    NSURL *_persistentStoreURL;
    long long _personFlags;
    id _publicRecord;
    NSString *_uniqueId;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain) id publicRecord; // @synthesize publicRecord=_publicRecord;
@property long long personFlags; // @synthesize personFlags=_personFlags;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property BOOL isPartialObject; // @synthesize isPartialObject=_isPartialObject;
@property(retain) NSArray *customProperties; // @synthesize customProperties=_customProperties;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSDate *builtDate; // @synthesize builtDate=_builtDate;
@property(copy) NSString *abAccountIdentifier; // @synthesize abAccountIdentifier=_abAccountIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

