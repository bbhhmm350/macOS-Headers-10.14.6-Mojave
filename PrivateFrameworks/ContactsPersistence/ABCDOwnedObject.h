//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ABCDRecord, NSNumber, NSString;

@interface ABCDOwnedObject : NSManagedObject
{
}

+ (id)insertOwnedObjectWithEntityName:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)cacheKey;
- (void)touch:(id)arg1;
- (void)prepareForDeletion;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

// Remaining properties
@property(retain, nonatomic) NSNumber *isPrimary; // @dynamic isPrimary;
@property(retain, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) NSNumber *orderingIndex; // @dynamic orderingIndex;
@property(retain, nonatomic) ABCDRecord *owner; // @dynamic owner;

@end
