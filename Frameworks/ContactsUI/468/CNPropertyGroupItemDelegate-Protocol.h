//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactViewCache, CNPropertyGroupItem;

@protocol CNPropertyGroupItemDelegate <NSObject>

@optional
- (CNContactViewCache *)contactViewCache;
- (void)propertyItem:(CNPropertyGroupItem *)arg1 willChangeValue:(id)arg2;
@end
