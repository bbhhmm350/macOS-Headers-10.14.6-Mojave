//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SidebarCellView.h"

#import "NSTextFieldDelegate-Protocol.h"

@class NSString, RemindersAccount;

@interface AccountCellView : SidebarCellView <NSTextFieldDelegate>
{
    RemindersAccount *_account;
}

@property(retain) RemindersAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2 account:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
