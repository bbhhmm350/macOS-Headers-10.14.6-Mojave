//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StorageManagement/STMOperation.h>

@class NSArray;

@interface SPInfoOptimizeCloudServicesOperation : STMOperation
{
    NSArray *_serviceIdentifiers;
}

@property(copy) NSArray *serviceIdentifiers; // @synthesize serviceIdentifiers=_serviceIdentifiers;
- (void)finishWithError:(id)arg1;
- (void)main;
- (void)dealloc;

@end
