//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEvaluable-Protocol.h"

@class GGraph;

@interface EEvaluable : NSObject <NEvaluable>
{
    GGraph *mGraph;
    id mValue;
}

+ (id)evaluableWithValue:(id)arg1 ofGraph:(id)arg2;
- (struct _NComplex)value;
- (void)dealloc;
- (id)initWithValue:(id)arg1 graph:(id)arg2;

@end
