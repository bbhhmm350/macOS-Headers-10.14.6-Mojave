//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@class TToolbarController;

@interface TToolbarItem : NSToolbarItem
{
    TToolbarController *_controller;
    _Bool _menuFormRepresentationWasSet;
    struct TNotificationCenterObserver _tbcAboutToTearDownObserver;
    _Bool menuFormRepresentationWasSet;
}

+ (void)insertPopUpButtonImage:(id)arg1 intoMenu:(id)arg2;
@property(nonatomic) _Bool menuFormRepresentationWasSet; // @synthesize menuFormRepresentationWasSet;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)validate;
- (void)aboutToTearDown;
- (id)initWithItemIdentifier:(id)arg1 entry:(const struct ToolbarItemInfo *)arg2 controller:(id)arg3 propertyList:(id)arg4 willBeInsertedIntoToolbar:(_Bool)arg5;
- (Class)buttonClass;
- (void)setMenuFormRepresentation:(id)arg1;

@end
