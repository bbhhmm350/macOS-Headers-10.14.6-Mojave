//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSOutlineViewDataSource-Protocol.h"

@class CalUICalendarListViewModel, NSString;
@protocol CalUICalendarListViewDropDelegate;

@interface CalUICalendarListViewDataSource : NSObject <NSOutlineViewDataSource>
{
    id <CalUICalendarListViewDropDelegate> _dropDelegate;
    CalUICalendarListViewModel *_viewModel;
}

@property(retain) CalUICalendarListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property __weak id <CalUICalendarListViewDropDelegate> dropDelegate; // @synthesize dropDelegate=_dropDelegate;
- (void).cxx_destruct;
- (void)_importFiles:(id)arg1 toCalendar:(id)arg2;
- (id)_sortEventCalendarsFromSource:(id)arg1;
- (BOOL)_newFirstCalendarCanBeDefaultSchedulingCalendar:(id)arg1 proposedItemUID:(id)arg2 proposedItemCalendar:(id)arg3 index:(long long)arg4;
- (BOOL)_dropSource:(id)arg1 isSameAsDestinationSource:(id)arg2;
- (BOOL)_doesSource:(id)arg1 containCalendar:(id)arg2;
- (id)_getCalendarFromItem:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (id)outlineView:(id)arg1 pasteboardWriterForItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)init;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
