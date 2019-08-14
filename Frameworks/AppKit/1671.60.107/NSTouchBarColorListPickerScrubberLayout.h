//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrubberLayout.h>

@interface NSTouchBarColorListPickerScrubberLayout : NSScrubberLayout
{
    double _itemHeight;
    double _selectedItemHeight;
    double _highlightedItemHeight;
}

+ (Class)layoutAttributesClass;
@property double highlightedItemHeight; // @synthesize highlightedItemHeight=_highlightedItemHeight;
@property double selectedItemHeight; // @synthesize selectedItemHeight=_selectedItemHeight;
@property double itemHeight; // @synthesize itemHeight=_itemHeight;
- (BOOL)shouldInvalidateLayoutForHighlightChange;
- (BOOL)shouldInvalidateLayoutForSelectionChange;
- (id)layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndex:(long long)arg1;
- (struct CGSize)scrubberContentSize;
- (id)init;

@end
