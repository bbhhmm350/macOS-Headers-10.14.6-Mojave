//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOTileKeyMap : NSObject
{
    long long _type;
    void *_map;
}

- (unsigned long long)count;
- (void)removeObjectForKey:(const struct _GEOTileKey *)arg1;
- (void)setObject:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (id)objectForKey:(const struct _GEOTileKey *)arg1;
- (id)contentsDescription;
- (void)reserveCapacity:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithMapType:(long long)arg1;
- (id)init;

@end
