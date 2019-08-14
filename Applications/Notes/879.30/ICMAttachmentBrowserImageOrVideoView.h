//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AVPlayerView, ICMAttachmentImageAndVideoCollectionItem, NSImage, NSImageView;

@interface ICMAttachmentBrowserImageOrVideoView : NSView
{
    ICMAttachmentImageAndVideoCollectionItem *_item;
    NSImageView *_imageView;
    AVPlayerView *_playerView;
}

@property(retain, nonatomic) AVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak ICMAttachmentImageAndVideoCollectionItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)makePlayerViewFirstResponderIfNecessary;
- (void)viewDidMoveToWindow;
- (void)playStopped;
- (void)itemDidFinishPlaying:(id)arg1;
- (void)startPlaying:(id)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSImage *image; // @dynamic image;
- (void)mouseDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
