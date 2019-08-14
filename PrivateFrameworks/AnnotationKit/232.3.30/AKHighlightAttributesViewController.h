//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AKController, NSArray, NSMutableDictionary;

@interface AKHighlightAttributesViewController : NSViewController
{
    CDUnknownBlockType _actionBlock;
    AKController *_controller;
    NSArray *_itemTags;
    NSMutableDictionary *_partIndexesToTags;
}

@property(retain) NSMutableDictionary *partIndexesToTags; // @synthesize partIndexesToTags=_partIndexesToTags;
@property(retain) NSArray *itemTags; // @synthesize itemTags=_itemTags;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(copy) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)_labelViewAction:(id)arg1;
- (void)loadView;
- (id)initWithController:(id)arg1 items:(id)arg2;

@end
