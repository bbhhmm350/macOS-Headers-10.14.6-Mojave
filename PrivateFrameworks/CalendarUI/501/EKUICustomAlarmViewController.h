//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <CalendarUI/NSTextFieldDelegate-Protocol.h>

@class EKUIAlarmGadget, EKUICustomAlarmView, IGPopupWindowController, NSString;

@interface EKUICustomAlarmViewController : NSViewController <NSTextFieldDelegate>
{
    IGPopupWindowController *_popup;
    EKUIAlarmGadget *_gadget;
    EKUICustomAlarmView *_alarmView;
}

+ (BOOL)popupForAlarmGadget:(id)arg1;
@property(retain) EKUICustomAlarmView *alarmView; // @synthesize alarmView=_alarmView;
@property(retain) EKUIAlarmGadget *gadget; // @synthesize gadget=_gadget;
@property(retain) IGPopupWindowController *popup; // @synthesize popup=_popup;
- (void).cxx_destruct;
- (void)cancelClicked;
- (void)okClicked;
- (void)loadView;
- (id)initWithGadget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
