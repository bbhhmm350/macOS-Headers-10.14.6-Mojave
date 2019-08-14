//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBValidationObject-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface FBValidationFace : NSObject <FBValidationObject, NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSArray *_rules;
    NSNumber *_pass;
    NSNumber *_warn;
    NSNumber *_error;
}

+ (BOOL)supportsSecureCoding;
+ (id)_facesWithArray:(id)arg1;
@property(copy) NSNumber *error; // @synthesize error=_error;
@property(copy) NSNumber *warn; // @synthesize warn=_warn;
@property(copy) NSNumber *pass; // @synthesize pass=_pass;
@property(retain) NSArray *rules; // @synthesize rules=_rules;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)description;
- (BOOL)matchesSearchTerms:(id)arg1;
- (id)filteredFaceWithSearchTerms:(id)arg1;
- (id)filteredFaceWithSeverity:(long long)arg1;
- (id)initWithName:(id)arg1 andRules:(id)arg2;
- (long long)compare:(id)arg1;
- (id)statusImage;
- (id)helpText;
- (id)children;
- (long long)numberOfChildren;
- (id)image;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 andFaceDict:(id)arg2;

@end
