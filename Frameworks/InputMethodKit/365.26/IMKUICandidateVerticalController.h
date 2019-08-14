//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InputMethodKit/IMKUIWindowBasedCandidateController.h>

@interface IMKUICandidateVerticalController : IMKUIWindowBasedCandidateController
{
}

- (BOOL)isExpanded;
- (struct CGSize)extraSize;
- (id)topVisibleCandidates;
- (void)arrangeCanvasElements;
- (BOOL)isSortable;
- (void)updateSelectionKeys;
- (void)updateCanvasAfterSizeChange;
- (id)layoutConstraintsForData:(id)arg1;
- (double)maxHeight;
- (struct CGRect)recommendedWindowFrameWithFrame:(struct CGRect)arg1;
- (struct CGSize)customSize;
@property(readonly, nonatomic) double minimumSelectionViewWidth;
- (double)numberOfRows;

@end
