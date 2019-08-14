//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITextFieldBackgroundView : UIView
{
    BOOL _active;
    BOOL _enabled;
    float _progress;
    UIColor *_fillColor;
}

@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (void)setProgress:(float)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateImages;

@end
