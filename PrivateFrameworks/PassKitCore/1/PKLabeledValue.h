//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKLabeledValue : NSObject <NSSecureCoding>
{
    NSString *_label;
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (id)init;

@end

