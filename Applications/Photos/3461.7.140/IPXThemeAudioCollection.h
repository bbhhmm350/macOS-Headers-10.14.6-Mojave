//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXAudioCollection.h"

@class NSArray;

@interface IPXThemeAudioCollection : IPXAudioCollection
{
    NSArray *_audioItems;
}

- (void).cxx_destruct;
- (id)audioItemForPath:(id)arg1;
- (id)displayName;
- (void)audioItemsForIdentifiers:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)accessItemsWithBlock:(CDUnknownBlockType)arg1;
- (id)items;

@end
