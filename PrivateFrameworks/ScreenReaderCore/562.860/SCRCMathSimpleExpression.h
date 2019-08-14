//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathSimpleExpression : SCRCMathExpression
{
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)latexMathModeDescription;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (BOOL)canBeUsedWithBase;
- (BOOL)isFunctionName;
- (id)_functionNames;
- (BOOL)isWordOrAbbreviation;
- (long long)integerValue;
- (BOOL)isInteger;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
