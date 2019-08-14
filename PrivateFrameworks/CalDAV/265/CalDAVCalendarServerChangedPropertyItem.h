//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSString;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem
{
    NSMutableSet *_changedParameters;
    NSString *_nameAttribute;
    NSString *_typeAttribute;
}

@property(retain, nonatomic) NSString *typeAttribute; // @synthesize typeAttribute=_typeAttribute;
@property(retain, nonatomic) NSString *nameAttribute; // @synthesize nameAttribute=_nameAttribute;
@property(retain, nonatomic) NSMutableSet *changedParameters; // @synthesize changedParameters=_changedParameters;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)addChangedParameter:(id)arg1;
- (void)parserFoundAttributes:(id)arg1;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;

@end
