//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSColorList, NSColorPickerSpectrumScrollerView;

@protocol NSColorPickerSpectrumScrollerViewDataSource <NSObject>
- (NSColorList *)colorListForSpectrumView:(NSColorPickerSpectrumScrollerView *)arg1;
- (long long)pageCountForSpectrumView:(NSColorPickerSpectrumScrollerView *)arg1;
- (long long)currentPageForSpectrumView:(NSColorPickerSpectrumScrollerView *)arg1;
@end
