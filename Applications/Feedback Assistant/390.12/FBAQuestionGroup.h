//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAManagedFeedbackObject.h"

@class FBABugForm, NSArray, NSNumber, NSOrderedSet, NSString;

@interface FBAQuestionGroup : FBAManagedFeedbackObject
{
}

+ (id)entityName;
- (BOOL)containsFileAttachmentQuestion;
- (id)questionWithRole:(id)arg1;
@property(retain) NSArray *questions;
- (id)description;
- (void)setPropertiesFromJSONObject:(id)arg1;

// Remaining properties
@property(retain) FBABugForm *bugForm; // @dynamic bugForm;
@property(retain, nonatomic) NSOrderedSet *primitiveQuestions; // @dynamic primitiveQuestions;
@property(retain) NSNumber *sortOrder; // @dynamic sortOrder;
@property(retain) NSString *textAsHTML; // @dynamic textAsHTML;
@property(retain) NSString *title; // @dynamic title;

@end
