//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSMutableArray, NSTextField;

@interface GPUHistoryView : NSView
{
    NSMutableArray *_loadHistory;
    NSColor *_gpuLoadColor;
    NSColor *_backgroundColor;
    NSTextField *_labelTextField;
}

@property(retain) NSTextField *labelTextField; // @synthesize labelTextField=_labelTextField;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) NSColor *gpuLoadColor; // @synthesize gpuLoadColor=_gpuLoadColor;
@property(retain) NSMutableArray *loadHistory; // @synthesize loadHistory=_loadHistory;
- (void).cxx_destruct;
- (void)addLoadMetric:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setLabelString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
