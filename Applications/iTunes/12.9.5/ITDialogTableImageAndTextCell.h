//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSImage, NSImageCell;

@interface ITDialogTableImageAndTextCell : NSTextFieldCell
{
    NSImage *_image;
    NSImageCell *_renderImageCell;
    long long _placementKind;
}

@property(nonatomic) long long placementKind; // @synthesize placementKind=_placementKind;
@property(retain, nonatomic) NSImageCell *renderImageCell; // @synthesize renderImageCell=_renderImageCell;
@property(retain) NSImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)init;

@end

