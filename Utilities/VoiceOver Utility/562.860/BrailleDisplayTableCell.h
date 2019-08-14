//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCell.h>

@class NSDictionary;

@interface BrailleDisplayTableCell : NSCell
{
    NSDictionary *_nameAttributes;
    NSDictionary *_selectedNameAttributes;
    NSDictionary *_stateAttributes;
    NSDictionary *_selectedStatusAttributes;
}

- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)attributedStringValue;
- (id)stringValue;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_createAttributes;
- (id)initTextCell:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
