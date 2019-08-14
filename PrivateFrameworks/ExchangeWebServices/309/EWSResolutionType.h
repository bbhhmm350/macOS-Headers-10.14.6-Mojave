//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSResponseMessageType.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSContactItemType, EWSEmailAddressType, NSString;

@interface EWSResolutionType : EWSResponseMessageType <XSDefinitionProvider>
{
    EWSEmailAddressType *_Mailbox;
    EWSContactItemType *_Contact;
}

+ (id)definition;
@property(retain, nonatomic) EWSContactItemType *Contact; // @synthesize Contact=_Contact;
@property(retain, nonatomic) EWSEmailAddressType *Mailbox; // @synthesize Mailbox=_Mailbox;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
