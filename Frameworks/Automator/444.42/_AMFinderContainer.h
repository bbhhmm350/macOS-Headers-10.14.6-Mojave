//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/_AMFinderItem.h>

@class SBObject;

@interface _AMFinderContainer : _AMFinderItem
{
}

@property(readonly, copy) SBObject *containerWindow;
@property BOOL completelyExpanded;
@property BOOL expanded;
@property(readonly) BOOL expandable;
@property(readonly, copy) SBObject *entireContents;
- (id)packages;
- (id)clippings;
- (id)internetLocationFiles;
- (id)documentFiles;
- (id)applicationFiles;
- (id)aliasFiles;
- (id)files;
- (id)folders;
- (id)containers;
- (id)items;

@end
