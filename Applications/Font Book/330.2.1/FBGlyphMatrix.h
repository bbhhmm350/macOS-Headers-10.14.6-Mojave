//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSMatrix.h>

#import "NSDraggingSource-Protocol.h"
#import "NSPasteboardItemDataProvider-Protocol.h"

@class NSNumber, NSString;

@interface FBGlyphMatrix : NSMatrix <NSDraggingSource, NSPasteboardItemDataProvider>
{
}

- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (void)mouseDragged:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseDown:(id)arg1;
@property(readonly, copy) NSNumber *selectedGlyphID;
- (BOOL)drawsCellBackground;
- (BOOL)drawsBackground;
- (Class)cellClass;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2 cellClass:(Class)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
