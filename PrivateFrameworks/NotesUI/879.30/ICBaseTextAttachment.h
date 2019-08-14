//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextAttachment.h>

#import <NotesUI/TTAttachment-Protocol.h>

@class ICAttachment, NSString;

@interface ICBaseTextAttachment : NSTextAttachment <TTAttachment>
{
    ICAttachment *_attachment;
}

@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (id)attachmentInContext:(id)arg1;
- (id)attachmentUTI;
- (id)attachmentIdentifier;
- (BOOL)isEqualToModelComparable:(id)arg1;
- (id)printableTextContent;
- (id)attachmentAttributesForAttributedString;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange)arg2 forPlainText:(BOOL)arg3 forStandardizedText:(BOOL)arg4;
- (double)viewCornerRadius;
- (BOOL)usesTextAttachmentView;
- (BOOL)allowsTextAttachmentView;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (BOOL)canDragWithoutSelecting;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
