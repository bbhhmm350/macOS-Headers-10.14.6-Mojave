//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface NSRulerLabelCell : NSTextFieldCell
{
    NSNumberFormatter *_auxiliaryFormatter;
}

- (void)dealloc;
- (void)_setAuxiliaryFormatter:(id)arg1;
- (id)_auxiliaryFormatter;
- (long long)_typesetterBehavior;

@end
