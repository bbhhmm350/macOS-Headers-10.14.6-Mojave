//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXView.h>

@class IPXCUTextField, NSButton, NSMutableArray, NSProgressIndicator, NSString;

@interface IPXContentUnavailableView : UXView
{
    BOOL _showProgress;
    NSString *_title;
    NSString *_message;
    NSString *_buttonTitle;
    NSButton *_actionButton;
    CDUnknownBlockType _buttonAction;
    NSProgressIndicator *_progressIndicator;
    unsigned long long _progressIndicatorStyle;
    unsigned long long _vibrantOptions;
    UXView *_containerView;
    IPXCUTextField *_titleLabel;
    IPXCUTextField *_messageLabel;
    NSMutableArray *_containerViewContraints;
}

@property(retain, nonatomic) NSMutableArray *containerViewContraints; // @synthesize containerViewContraints=_containerViewContraints;
@property(retain, nonatomic) IPXCUTextField *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) IPXCUTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UXView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long vibrantOptions; // @synthesize vibrantOptions=_vibrantOptions;
@property(nonatomic) unsigned long long progressIndicatorStyle; // @synthesize progressIndicatorStyle=_progressIndicatorStyle;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) BOOL showProgress; // @synthesize showProgress=_showProgress;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layout;
- (void)_updateProgressLayout;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 progressIndicatorStyle:(unsigned long long)arg3;
- (void)_updateTextField:(id)arg1 withAttributedText:(id)arg2;
- (id)_textFieldWithFontSize:(double)arg1;
- (void)_actionButtonPressed:(id)arg1;
- (id)_buttonTitleAttributes;
- (id)_tintColor;
- (id)_vibrantBaseColor;
- (BOOL)_hasVibrantButton;
- (BOOL)_hasVibrantText;

@end
