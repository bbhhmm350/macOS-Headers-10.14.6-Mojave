//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSStackView, NSView, _TtC12ControlStrip24ControlStripBackdropView;

@interface _TtC12ControlStrip16ControlStripFull : NSViewController
{
    // Error parsing type: , name: closeView
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: backdropView
    // Error parsing type: , name: buttonStack
    // Error parsing type: , name: configuration
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dismiss:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, retain) NSStackView *buttonStack; // @synthesize buttonStack;
@property(nonatomic, retain) _TtC12ControlStrip24ControlStripBackdropView *backdropView; // @synthesize backdropView;
@property(nonatomic, retain) NSButton *closeButton; // @synthesize closeButton;
@property(nonatomic, retain) NSView *closeView; // @synthesize closeView;

@end
