//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Tile.h"

@interface DOCKSpacerTile : Tile
{
    long long _type;
}

+ (void)updateSpacerUnits;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)typeString;
- (id)copyTilePlist;
- (id)copyInstallDictionary:(int)arg1;
- (struct OpaqueMenuRef *)createMenu:(CDUnknownFunctionPointerType)arg1 options:(unsigned long long)arg2;
- (void)update;
- (void)dealloc;
- (id)init;

@end
