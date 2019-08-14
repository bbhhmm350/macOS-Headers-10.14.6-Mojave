//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class NSAttributedString, NSMutableDictionary, TTMergeableStringVersionedDocument;

@protocol ICNoteUI <NSObject>

@optional
- (NSAttributedString *)uiAttributedString;
- (void)createMissingAttachmentsInTextStorage;
- (void)didMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
- (void)willMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
- (void)noteDidReplaceDocument;
- (void)noteDidSaveAndClearDecryptedData;
- (void)noteWillTurnIntoFault;
- (BOOL)shouldReleaseTextStorageWhenTurningIntoFault;
@end
