//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASRng : NSObject
{
    struct {
        unsigned long long s[2];
    } _state;
}

- (float)nextFloat;
- (unsigned long long)next;
- (id)initWithSeed:(unsigned long long)arg1;
- (id)init;

@end
