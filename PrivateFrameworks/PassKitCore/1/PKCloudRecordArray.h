//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface PKCloudRecordArray : NSObject <NSSecureCoding>
{
    NSMutableArray *_cloudRecords;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addValuesFromCloudRecordArray:(id)arg1;
- (id)allRecordNames;
- (id)allItems;
@property(readonly, nonatomic) NSArray *cloudRecords;
- (void)addCloudRecord:(id)arg1;
- (id)_descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2;
- (id)description;
- (id)descriptionWithItem:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)filteredCloudRecordArrayWithPredicate:(id)arg1;
- (id)init;

@end
