//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

#import <AppKit/NSColorPickerSpectrumScrollerViewDataSource-Protocol.h>
#import <AppKit/NSColorPickerSpectrumScrollerViewDelegate-Protocol.h>

@class NSColorPickerPageableNameList, NSColorPickerSpectrumScrollerView, NSString;

__attribute__((visibility("hidden")))
@interface NSColorPickerPageableNameListScrollView : NSScrollView <NSColorPickerSpectrumScrollerViewDelegate, NSColorPickerSpectrumScrollerViewDataSource>
{
    NSColorPickerPageableNameList *picker;
    NSColorPickerSpectrumScrollerView *spectrumView;
    long long _partMouseDown;
}

- (long long)_arrowPlacement;
- (long long)_partMouseDown;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (long long)partHit:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)colorListForSpectrumView:(id)arg1;
- (long long)pageCountForSpectrumView:(id)arg1;
- (long long)currentPageForSpectrumView:(id)arg1;
- (void)pageClicked:(long long)arg1 inSpectrumView:(id)arg2;
- (void)pageUp:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_windowChangedKeyState;
- (void)reflectScrolledClipView:(id)arg1;
- (void)updateWithFocusRingForWindowKeyChange;
- (BOOL)isFirstAndKey;
- (void)refreshScrollers;
- (id)colorList;
- (unsigned long long)pageCount;
- (BOOL)isPaged;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)currentPage;
- (void)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
