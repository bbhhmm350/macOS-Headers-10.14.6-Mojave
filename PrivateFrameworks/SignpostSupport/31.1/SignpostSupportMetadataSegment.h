//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SignpostSupportMessageArgument;

@interface SignpostSupportMetadataSegment : NSObject
{
    NSString *_typeNamespace;
    NSString *_type;
    NSArray *_placeholderTokens;
    NSString *_stringPrefix;
    SignpostSupportMessageArgument *_argument;
}

@property(readonly, nonatomic) SignpostSupportMessageArgument *argument; // @synthesize argument=_argument;
@property(readonly, nonatomic) NSString *stringPrefix; // @synthesize stringPrefix=_stringPrefix;
@property(readonly, nonatomic) NSArray *placeholderTokens; // @synthesize placeholderTokens=_placeholderTokens;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *typeNamespace; // @synthesize typeNamespace=_typeNamespace;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithArgumentObject:(id)arg1 typeNamespace:(id)arg2 type:(id)arg3 tokens:(id)arg4 stringPrefix:(id)arg5;
- (id)initWithDictionary:(id)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2 didRedactOut:(char *)arg3;

@end
