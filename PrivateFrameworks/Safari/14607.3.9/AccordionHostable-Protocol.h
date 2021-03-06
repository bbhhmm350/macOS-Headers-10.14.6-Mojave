//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class AccordionHostViewController;
@protocol AccordionHostableExpansionRequestHandler;

@protocol AccordionHostable <NSObject>

@optional
@property(nonatomic) __weak id <AccordionHostableExpansionRequestHandler> expansionRequestHandler;
- (void)accordionHost:(AccordionHostViewController *)arg1 viewWasRemoved:(BOOL)arg2;
- (void)accordionHost:(AccordionHostViewController *)arg1 viewWillBeRemoved:(BOOL)arg2;
- (void)accordionHost:(AccordionHostViewController *)arg1 viewWasInserted:(BOOL)arg2 viewDidExpand:(BOOL)arg3;
- (void)accordionHost:(AccordionHostViewController *)arg1 viewWillBeInserted:(BOOL)arg2 viewWillExpand:(BOOL)arg3;
- (void)accordionHost:(AccordionHostViewController *)arg1 viewDidExpand:(BOOL)arg2;
- (void)accordionHost:(AccordionHostViewController *)arg1 viewWillExpand:(BOOL)arg2;
- (void)accordionHost:(AccordionHostViewController *)arg1 viewDidCollapse:(BOOL)arg2;
- (void)accordionHost:(AccordionHostViewController *)arg1 viewWillCollapse:(BOOL)arg2;
- (BOOL)shouldExpandWhenClickedForAccordionHost:(AccordionHostViewController *)arg1;
- (BOOL)shouldInitiallyExpandForAccordionHost:(AccordionHostViewController *)arg1;
- (double)minimumWidthForAccordionHost:(AccordionHostViewController *)arg1;
@end

