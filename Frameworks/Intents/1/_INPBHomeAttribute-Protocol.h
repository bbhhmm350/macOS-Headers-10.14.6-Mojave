//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBHomeAttributeValue;

@protocol _INPBHomeAttribute <NSObject>
@property(readonly, nonatomic) BOOL hasAttributeValue;
@property(retain, nonatomic) _INPBHomeAttributeValue *attributeValue;
@property(nonatomic) BOOL hasAttributeType;
@property(nonatomic) int attributeType;
- (int)StringAsAttributeType:(NSString *)arg1;
- (NSString *)attributeTypeAsString:(int)arg1;
@end

