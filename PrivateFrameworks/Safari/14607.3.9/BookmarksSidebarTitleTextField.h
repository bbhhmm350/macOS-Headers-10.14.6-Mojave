//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class BookmarksSidebarTableCellView;

__attribute__((visibility("hidden")))
@interface BookmarksSidebarTitleTextField : NSTextField
{
    BookmarksSidebarTableCellView *_bookmarksSidebarTableCellView;
}

@property(nonatomic) __weak BookmarksSidebarTableCellView *bookmarksSidebarTableCellView; // @synthesize bookmarksSidebarTableCellView=_bookmarksSidebarTableCellView;
- (void).cxx_destruct;
- (void)bookmarksSidebarTitleTextViewResignFirstResponder;
- (void)bookmarksSidebarTitleTextViewBecameFirstResponder;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)setBezeled:(BOOL)arg1;

@end
