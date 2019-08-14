//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GScalarField, GSpace, GView;

@interface GScalarFieldEnumerator : NSObject
{
    GScalarField *mField;
    GView *mView;
    GSpace *mSpace;
    unsigned long long mDim;
    BOOL mFirst;
    unsigned long long *mNb;
    unsigned long long *mVertex;
    double mSize[3];
    double mFrameResolution[3];
    double mFrameOffset[3];
    double mResolution;
    double mFrameCoord[3];
    double mCartesianCoord[3];
}

+ (id)scalarEnumeratorWithField:(id)arg1;
- (double *)nextFrameCoordValue:(double *)arg1;
- (BOOL)nextValue:(double *)arg1;
- (void)newHyperRow;
- (double)currentValue;
- (void)dealloc;
- (id)initWithField:(id)arg1;

@end
