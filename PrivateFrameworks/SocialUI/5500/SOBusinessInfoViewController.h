//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSTextField;

@interface SOBusinessInfoViewController : NSViewController
{
    NSTextField *_descriptionTextField;
    NSButton *_aboutButton;
}

@property(retain, nonatomic) NSButton *aboutButton; // @synthesize aboutButton=_aboutButton;
@property(retain, nonatomic) NSTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
- (void).cxx_destruct;
- (void)_displayAboutAlert;
- (void)clickedAboutButton:(id)arg1;
- (void)setDescriptionTextFieldString:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end
