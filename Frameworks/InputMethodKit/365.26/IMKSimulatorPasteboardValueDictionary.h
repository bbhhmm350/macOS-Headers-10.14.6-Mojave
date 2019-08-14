//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSPasteboard;

@interface IMKSimulatorPasteboardValueDictionary : NSObject
{
    unsigned long long _changeCount;
    NSMutableDictionary *_dictionary;
    NSPasteboard *_pasteboard;
}

@property(retain, nonatomic) NSPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(nonatomic) unsigned long long changeCount; // @synthesize changeCount=_changeCount;
- (void)clearContentsOfPasteboard;
- (id)valueForKey:(id)arg1;
- (void)populateDictionaryInMemory;
- (void)dealloc;
- (id)initWithPasteboardName:(id)arg1 defaultValues:(id)arg2;

@end
