//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol FRSectionHeaderButtonControllerDataProviderType;

@interface FRSectionHeaderButtonController : NSObject
{
    id <FRSectionHeaderButtonControllerDataProviderType> _dataProvider;
    NSMutableDictionary *_optionsCache;
}

@property(copy, nonatomic) NSMutableDictionary *optionsCache; // @synthesize optionsCache=_optionsCache;
@property(retain, nonatomic) id <FRSectionHeaderButtonControllerDataProviderType> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (long long)muteFavoriteOptionForInspectable:(id)arg1;
- (id)initWithDataProvider:(id)arg1;

@end
