//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNMeContactComparisonStrategy-Protocol.h>

@class NSString;

@interface CNUIMeContactComparisonStrategyIdentifier : NSObject <CNMeContactComparisonStrategy>
{
    NSString *_meContactIdentifierFound;
}

@property(retain, nonatomic) NSString *meContactIdentifierFound; // @synthesize meContactIdentifierFound=_meContactIdentifierFound;
- (void).cxx_destruct;
- (id)meContactIdentifiers;
- (BOOL)isMeContact:(id)arg1;
- (void)meContactChangedInStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
