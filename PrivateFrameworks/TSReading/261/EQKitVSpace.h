//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/EQKitBox.h>

@interface EQKitVSpace : EQKitBox
{
    double mHeight;
    double mDepth;
}

@property(readonly, nonatomic) double depth; // @synthesize depth=mDepth;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
- (BOOL)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
@property(readonly, nonatomic) double layoutDepth;
@property(readonly, nonatomic) double layoutHeight;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHeight:(double)arg1 depth:(double)arg2;

@end
