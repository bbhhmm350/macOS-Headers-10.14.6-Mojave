//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBABugFormPickerViewController, FBABugFormStub;

@protocol FBABugFormPickerDelegate <NSObject>
- (void)bugFormPickerDidCommitSelection:(FBABugFormPickerViewController *)arg1;
- (void)bugFormPicker:(FBABugFormPickerViewController *)arg1 didSelectBugForm:(FBABugFormStub *)arg2;
@end
