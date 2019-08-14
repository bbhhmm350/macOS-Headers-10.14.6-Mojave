//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CTGlyphStorageInterface : NSObject
{
    long long _glyphCount;
    unsigned short *_glyphs;
    struct CGSize *_advances;
    unsigned int *_props;
    long long *_stringIndexes;
    long long *_absorbedCounts;
    struct CGPoint *_origins;
}

- (void)disposeGlyphStack;
- (void)popGlyph:(long long)arg1;
- (void)pushGlyph:(long long)arg1;
- (void)initGlyphStack:(long long)arg1;
- (void)insertGlyphs:(CDStruct_912cb5d2)arg1;
- (void)moveGlyphsTo:(long long)arg1 from:(CDStruct_912cb5d2)arg2;
- (void)swapGlyph:(long long)arg1 withIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 forIndex:(long long)arg2;
- (void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 forIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2;
- (void)getCustomAdvance:(struct CGSize *)arg1 forIndex:(long long)arg2;
- (struct __CTGlyphStorage *)createCopy:(CDStruct_912cb5d2)arg1;

@end
