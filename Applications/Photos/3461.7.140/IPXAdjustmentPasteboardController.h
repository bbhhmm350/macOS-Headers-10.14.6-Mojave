//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPasteboard;

@interface IPXAdjustmentPasteboardController : NSObject
{
    NSPasteboard *_pasteboard;
}

+ (BOOL)pasteableAdjustmentsInRenderDescription:(id)arg1;
+ (id)unpasteableAdjustmentIdentifiers;
- (void).cxx_destruct;
- (id)copiedAdjustmentStackWithError:(id *)arg1;
- (BOOL)copyRenderDescription:(id)arg1 error:(id *)arg2;
- (void)clearContents;
- (BOOL)hasContents;
- (void)dealloc;
- (id)init;

@end
