//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, RDDatabase, RDPhotoModelClient;

@interface RDPersonContactMigrator : NSObject
{
    RDDatabase *_database;
    RDPhotoModelClient *_photoModel;
    NSDictionary *_contactInfo;
    NSDictionary *_personsByContactIdentifier;
}

@property(retain, nonatomic) NSDictionary *personsByContactIdentifier; // @synthesize personsByContactIdentifier=_personsByContactIdentifier;
@property(retain, nonatomic) NSDictionary *contactInfo; // @synthesize contactInfo=_contactInfo;
- (void).cxx_destruct;
- (BOOL)updatePersonContactInfoWithError:(id *)arg1;
- (void)collectContactInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPersonsByContactIdentifier:(id)arg1 database:(id)arg2;

@end
