//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NVMultilineCheckboxButton;

__attribute__((visibility("hidden")))
@interface NVMultilineCheckboxLabel : NSTextField
{
    NVMultilineCheckboxButton *_checkbox;
}

@property(retain, nonatomic) NVMultilineCheckboxButton *checkbox; // @synthesize checkbox=_checkbox;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setStringValue:(id)arg1;

@end
