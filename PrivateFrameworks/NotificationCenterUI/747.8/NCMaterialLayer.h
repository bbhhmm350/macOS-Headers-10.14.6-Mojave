//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NCMaterialLayer : CALayer
{
    NSString *_groupName;
    CALayer *_backdropLayer;
    CALayer *_tintLayer;
    unsigned char _materialStyle;
    unsigned long long _material;
}

+ (_Bool)useDarkLook;
+ (void)initialize;
@property(nonatomic) unsigned char materialStyle; // @synthesize materialStyle=_materialStyle;
@property(nonatomic) unsigned long long material; // @synthesize material=_material;
- (void).cxx_destruct;
- (void)_buildVibrantLayerTree:(unsigned long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithMaterial:(unsigned long long)arg1 groupName:(id)arg2 style:(unsigned char)arg3;

@end
