//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTDataConnectionAvailabilityStatus : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _available;
    int _csiError;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int csiError; // @synthesize csiError=_csiError;
@property(nonatomic) BOOL available; // @synthesize available=_available;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
