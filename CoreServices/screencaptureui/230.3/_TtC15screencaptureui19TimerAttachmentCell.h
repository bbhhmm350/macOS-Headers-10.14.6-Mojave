//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTextAttachmentCell-Protocol.h"

@class NSTextAttachment;

@interface _TtC15screencaptureui19TimerAttachmentCell : NSObject <NSTextAttachmentCell>
{
    // Error parsing type: , name: attachment
    // Error parsing type: , name: _imageCell
    // Error parsing type: , name: image
}

- (void).cxx_destruct;
- (id)init;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(long long)arg4;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(long long)arg4 untilMouseUp:(BOOL)arg5;
- (BOOL)wantsToTrackMouseForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(long long)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(long long)arg3 layoutManager:(id)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(long long)arg3;
- (struct CGPoint)cellBaselineOffset;
- (struct CGSize)cellSize;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (BOOL)wantsToTrackMouse;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property(nonatomic, retain) NSTextAttachment *attachment; // @synthesize attachment;

@end
