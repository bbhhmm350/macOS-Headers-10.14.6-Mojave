//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSCoding-Protocol.h>

@class NSDictionary, NSString;

@interface MSASEnqueuedCommand : NSObject <NSCoding>
{
    NSString *_command;
    NSDictionary *_variantParam;
    NSDictionary *_invariantParam;
}

+ (id)commandwithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;
+ (id)command;
@property(retain, nonatomic) NSDictionary *invariantParam; // @synthesize invariantParam=_invariantParam;
@property(retain, nonatomic) NSDictionary *variantParam; // @synthesize variantParam=_variantParam;
@property(copy, nonatomic) NSString *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)canBeGroupedWithCommand:(id)arg1;
- (id)initWithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;
- (id)init;

@end
