//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface ABACAccountType : NSObject <NSSecureCoding>
{
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)accountTypeMap;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)addressBookAccountType;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
