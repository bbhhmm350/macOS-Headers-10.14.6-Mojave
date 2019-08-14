//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@interface NSScrubberLayoutAttributes : NSObject <NSCopying>
{
    long long _itemIndex;
    struct CGRect _frame;
    double _alpha;
    unsigned int _escapes:1;
    unsigned int _reservedLayoutAttributeFlags:31;
}

+ (id)layoutAttributesForItemAtIndex:(long long)arg1;
@property double alpha; // @synthesize alpha=_alpha;
@property struct CGRect frame; // @synthesize frame=_frame;
@property long long itemIndex; // @synthesize itemIndex=_itemIndex;
- (id)_layoutAttributesByBlendingFraction:(double)arg1 ofAttributes:(id)arg2;
- (void)setEscapesFromScrollView:(BOOL)arg1;
- (BOOL)escapesFromScrollView;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
