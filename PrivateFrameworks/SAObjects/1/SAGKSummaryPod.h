//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAGKPodView.h>

@class NSString, SAUIImageResource;

@interface SAGKSummaryPod : SAGKPodView
{
}

+ (id)summaryPodWithDictionary:(id)arg1 context:(id)arg2;
+ (id)summaryPod;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) SAUIImageResource *imageResource;
@property(copy, nonatomic) NSString *caption;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
