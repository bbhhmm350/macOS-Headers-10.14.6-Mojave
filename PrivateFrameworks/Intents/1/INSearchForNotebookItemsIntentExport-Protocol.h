//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INSpeakableString, NSString;

@protocol INSearchForNotebookItemsIntentExport <NSObject, JSExport>
@property(copy) NSString *notebookItemIdentifier;
@property long long dateSearchType;
@property(copy) INDateComponentsRange *dateTime;
@property long long locationSearchType;
@property(copy) CLPlacemark *location;
@property long long status;
@property long long itemType;
@property(copy) NSString *content;
@property(copy) INSpeakableString *title;
- (id)init;
@end

