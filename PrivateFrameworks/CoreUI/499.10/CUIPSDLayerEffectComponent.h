//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUIPSDLayerEffectComponent : NSObject
{
    BOOL _visible;
    NSString *_name;
}

@property(retain) NSString *name; // @synthesize name=_name;
@property BOOL visible; // @synthesize visible=_visible;
- (void)dealloc;
- (unsigned int)effectType;
- (id)_colorFromShapeEffectValue:(CDUnion_577fdfa6)arg1;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;

@end
