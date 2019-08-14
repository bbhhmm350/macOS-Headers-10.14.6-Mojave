//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutManager, NSUndoManager;

@interface NSUndoTextOperation : NSObject
{
    struct _NSRange _affectedRange;
    NSUndoManager *_undoManager;
    NSLayoutManager *_layoutManager;
}

@property(nonatomic) struct _NSRange affectedRange; // @synthesize affectedRange=_affectedRange;
@property(nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (BOOL)isSupportingCoalescing;
- (id)firstTextViewForTextStorage:(id)arg1;
- (void)undoRedo:(id)arg1;
- (void)dealloc;
- (id)initWithAffectedRange:(struct _NSRange)arg1 layoutManager:(id)arg2 undoManager:(id)arg3;

@end
