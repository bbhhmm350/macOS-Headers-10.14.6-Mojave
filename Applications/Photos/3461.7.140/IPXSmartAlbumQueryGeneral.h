//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXSmartAlbumQueryItem.h"

@class NSPopUpButton, NSSearchField;

@interface IPXSmartAlbumQueryGeneral : IPXSmartAlbumQueryItem
{
    NSSearchField *searchField;
    NSPopUpButton *_qualifierPopup;
}

+ (id)defaultQuery;
+ (id)nibName;
@property __weak NSPopUpButton *qualifierPopup; // @synthesize qualifierPopup=_qualifierPopup;
- (void).cxx_destruct;
- (id)nextKeyViewWithPreviousView:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)a_setSearchType:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setSearchType:(unsigned long long)arg1;
- (unsigned long long)searchType;

@end
