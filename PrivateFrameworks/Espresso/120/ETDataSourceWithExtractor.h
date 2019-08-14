//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Espresso/ETDataSource-Protocol.h>

@class ETImageDescriptorExtractor;
@protocol ETDataSource;

__attribute__((visibility("hidden")))
@interface ETDataSourceWithExtractor : NSObject <ETDataSource>
{
    id <ETDataSource> _source;
    ETImageDescriptorExtractor *_extractor;
}

- (void).cxx_destruct;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1 extractor:(id)arg2;

@end
