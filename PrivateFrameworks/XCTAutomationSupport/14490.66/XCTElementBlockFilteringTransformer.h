//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTElementSetTransformer-Protocol.h>

@class NSString;

@interface XCTElementBlockFilteringTransformer : NSObject <XCTElementSetTransformer>
{
    BOOL stopsOnFirstMatch;
    NSString *transformationDescription;
    CDUnknownBlockType _filter;
}

@property(readonly, copy) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property BOOL stopsOnFirstMatch; // @synthesize stopsOnFirstMatch;
@property(copy) NSString *transformationDescription; // @synthesize transformationDescription;
- (void).cxx_destruct;
- (id)iteratorForInput:(id)arg1;
- (id)requiredKeyPathsOrError:(id *)arg1;
@property(readonly) BOOL supportsAttributeKeyPathAnalysis;
@property(readonly) BOOL supportsRemoteEvaluation;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;
- (id)initWithBlockFilter:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

