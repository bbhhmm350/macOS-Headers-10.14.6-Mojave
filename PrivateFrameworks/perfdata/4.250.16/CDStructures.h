//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct pooled_mean {
    struct sum _field1;
    struct sum _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct running_mean {
    double _field1;
    double _field2;
    unsigned long long _field3;
};

struct sum {
    double _field1;
    double _field2;
};
