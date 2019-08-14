//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class NSTouchBar;

__attribute__((visibility("hidden")))
@interface TextFieldEditor : NSTextView
{
    NSTouchBar *_emptyFunctionBar;
}

- (void).cxx_destruct;
- (id)touchBar;
- (void)disableDFRAccessories;
- (BOOL)canSmoothFontsInLayer;
- (void)doCommandBySelector:(SEL)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)paste:(id)arg1;
- (void)_replaceWhitespaceCharactersAfterPaste;
@property(readonly) BOOL pasteReplacesTabsWithSpaces;
- (id)init;

@end
