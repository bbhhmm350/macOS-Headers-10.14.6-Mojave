//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpotlight/CSSearchQuery.h>

@class CSSearchConnection, NSString;

@interface CSPrivateSearchQuery : CSSearchQuery
{
    NSString *_indexPath;
    NSString *_resolvedIndexPath;
    CSSearchConnection *_savedConnection;
}

@property(retain, nonatomic) CSSearchConnection *savedConnection; // @synthesize savedConnection=_savedConnection;
@property(retain, nonatomic) NSString *resolvedIndexPath; // @synthesize resolvedIndexPath=_resolvedIndexPath;
@property(retain, nonatomic) NSString *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)start;
- (id)connection;
- (id)initWithPath:(id)arg1 queryString:(id)arg2 context:(id)arg3 attributes:(id)arg4;
- (id)initWithPath:(id)arg1 queryString:(id)arg2 context:(id)arg3;
- (id)initWithPath:(id)arg1 queryString:(id)arg2 attributers:(id)arg3;

@end
