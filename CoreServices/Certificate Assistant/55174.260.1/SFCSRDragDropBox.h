//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSBox.h>

@interface SFCSRDragDropBox : NSBox
{
    BOOL _caHighlighted;
}

- (BOOL)performDragOperation:(id)arg1;
- (void)_doSheet:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)draggingExited:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;

@end
