//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSCGSSpace : NSObject
{
}

+ (id)spaceWithSpaceID:(unsigned long long)arg1;
+ (id)currentManagedSpaces;
+ (id)allManagedSpaces;
- (void)setMenuBarCompanionWindow:(unsigned int)arg1 offset:(double)arg2;
- (void)finishedResizeForRect:(struct CGRect)arg1 ackImmediately:(BOOL)arg2;

// Remaining properties
@property(readonly) unsigned long long spaceID; // @dynamic spaceID;

@end
