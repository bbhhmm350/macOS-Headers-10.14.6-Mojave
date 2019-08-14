//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCGSContext.h>

#import <AppKit/NSPrintGraphicsContextAdvancing-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NSPrintCopyingGraphicsContext : NSCGSContext <NSPrintGraphicsContextAdvancing>
{
    NSDictionary *_attributes;
    BOOL _isCopyingToPDF;
}

- (void)endDocument;
- (void)endPage;
- (void)beginPageWithBounds:(struct CGRect)arg1;
- (void)beginDocumentWithTitle:(id)arg1;
- (BOOL)isDrawingToScreen;
- (id)attributes;
- (void)dealloc;
- (id)initWithContextAttributes:(id)arg1;

@end
