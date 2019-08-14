//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactCardWidgetProviderDelegate-Protocol.h>

@class CNUIUserActionListDataSource, NSString;
@protocol CNSchedulerProvider;

@interface CNContactCardViewControllerWidgetProviderDelegate : NSObject <CNContactCardWidgetProviderDelegate>
{
    CNUIUserActionListDataSource *_userActionListDataSource;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNUIUserActionListDataSource *userActionListDataSource; // @synthesize userActionListDataSource=_userActionListDataSource;
- (void).cxx_destruct;
- (void)widgetProvider:(id)arg1 willCreateActionsViewController:(id)arg2;
- (id)initWithActionListDataSource:(id)arg1 schedulerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
