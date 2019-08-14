//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate;

@interface ICPServiceExceptionalCondition : NSObject <NSSecureCoding>
{
    NSDate *_startDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)typeIdentifier;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (BOOL)shouldBePersisted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)typeIdentifier;
- (BOOL)affectsServiceWithIdentifier:(id)arg1;
- (id)init;

@end
