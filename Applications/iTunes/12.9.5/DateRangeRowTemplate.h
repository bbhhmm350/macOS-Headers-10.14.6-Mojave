//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSDatePicker, NSPopUpButton;

@interface DateRangeRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_keyPathPopup;
    NSPopUpButton *_inTheRangePopup;
    NSDatePicker *_rangeStartPicker;
    NSPopUpButton *_toPopup;
    NSDatePicker *_rangeEndPicker;
}

@property(readonly) NSDatePicker *rangeEndPicker; // @synthesize rangeEndPicker=_rangeEndPicker;
@property(readonly) NSPopUpButton *toPopup; // @synthesize toPopup=_toPopup;
@property(readonly) NSDatePicker *rangeStartPicker; // @synthesize rangeStartPicker=_rangeStartPicker;
@property(readonly) NSPopUpButton *inTheRangePopup; // @synthesize inTheRangePopup=_inTheRangePopup;
@property(readonly) NSPopUpButton *keyPathPopup; // @synthesize keyPathPopup=_keyPathPopup;
- (void)dealloc;
- (id)predicateWithSubpredicates:(id)arg1;
- (id)displayableSubpredicatesOfPredicate:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (void)loadViewsIfNecessary;

@end
