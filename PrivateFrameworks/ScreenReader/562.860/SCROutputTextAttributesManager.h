//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock;

__attribute__((visibility("hidden")))
@interface SCROutputTextAttributesManager : NSObject
{
    NSLock *_previousAttributesLock;
    NSDictionary *_previousAttributes;
}

+ (id)defaultManager;
- (id)_attributesWithResolvedFontTraitsFromAttributes:(id)arg1;
- (id)_deltaTextAttributesWithAttributes:(id)arg1 previousAttributes:(id)arg2;
- (id)_stringDescribingAttributes:(id)arg1 isSpeechComponent:(BOOL)arg2;
- (id)_attributesOfOffsetMappedString:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)stringRepresentingTextAttributes:(id)arg1;
- (id)previousAttributesForTargetComponent:(id)arg1;
- (void)setPreviousAttributes:(id)arg1 targetComponent:(id)arg2;
- (id)_annotationElementDescriptionForElement:(id)arg1;
- (id)_actionForComponent:(id)arg1 category:(id)arg2 message:(long long)arg3 string:(id)arg4 variants:(id)arg5;
- (id)_annotationDescriptionWithLabel:(id)arg1 elementDescription:(id)arg2 position:(long long)arg3 context:(id)arg4;
- (id)createActionsByExpandingTextAttributesInAction:(id)arg1 targetComponent:(id)arg2;
- (void)dealloc;
- (id)init;

@end
