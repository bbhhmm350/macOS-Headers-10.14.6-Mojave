//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSConcreteMapTable;

__attribute__((visibility("hidden")))
@interface NSConcreteMapTableValueEnumerator : NSEnumerator
{
    NSConcreteMapTable *mapTable;
    unsigned long long counter;
}

+ (id)enumeratorWithMapTable:(id)arg1;
- (void)dealloc;
- (id)nextObject;

@end
