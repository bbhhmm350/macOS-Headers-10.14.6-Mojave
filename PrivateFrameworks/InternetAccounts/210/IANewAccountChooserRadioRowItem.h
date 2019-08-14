//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IAAListPlugin, NSButton, NSImage, NSImageView, NSString, NSTextField, NSView;
@protocol IANewAccountChooserRadioRowItemDelegateProtocol;

@interface IANewAccountChooserRadioRowItem : NSObject
{
    NSImageView *_imageView;
    NSButton *_radioButton;
    NSTextField *_textField;
    id _delegate;
    NSImage *_image;
    NSString *_text;
    NSString *_title;
    IAAListPlugin *_plugin;
    NSView *_view;
}

+ (id)itemWithTitle:(id)arg1 text:(id)arg2;
+ (id)itemWithTitle:(id)arg1 image:(id)arg2;
@property(retain) id <IANewAccountChooserRadioRowItemDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain) IAAListPlugin *plugin; // @synthesize plugin=_plugin;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *text; // @synthesize text=_text;
@property(retain) NSTextField *textField; // @synthesize textField=_textField;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
@property(retain) NSButton *radioButton; // @synthesize radioButton=_radioButton;
- (void).cxx_destruct;
- (void)radioButton:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)syncUI;
- (id)init;

@end
