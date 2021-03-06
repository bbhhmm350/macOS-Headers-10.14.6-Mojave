//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, RDAlbum, RDDatabase;

@interface IPXSharedStream : NSObject
{
    RDAlbum *_album;
    BOOL _isOwned;
    BOOL _canContribute;
    BOOL _isFamilySharedAlbum;
    BOOL _isDirty;
    NSString *_streamUuid;
    unsigned long long _modelId;
    NSString *_ownerTitle;
    RDDatabase *_database;
}

@property BOOL isDirty; // @synthesize isDirty=_isDirty;
@property(retain) RDDatabase *database; // @synthesize database=_database;
@property BOOL isFamilySharedAlbum; // @synthesize isFamilySharedAlbum=_isFamilySharedAlbum;
@property BOOL canContribute; // @synthesize canContribute=_canContribute;
@property BOOL isOwned; // @synthesize isOwned=_isOwned;
@property(retain) NSString *ownerTitle; // @synthesize ownerTitle=_ownerTitle;
@property unsigned long long modelId; // @synthesize modelId=_modelId;
@property(retain) NSString *streamUuid; // @synthesize streamUuid=_streamUuid;
- (void).cxx_destruct;
- (id)posterImageWithSize:(struct CGSize)arg1;
@property(readonly) NSDate *lastInterestingChangeDate;
@property(readonly) RDAlbum *album;
- (id)readonlyAlbum;
- (id)initWithAlbum:(id)arg1;

@end

