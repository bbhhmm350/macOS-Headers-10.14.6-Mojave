//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Spotlight/SPMetadataResult.h>

#import <Spotlight/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SPApplicationQueryResult : SPMetadataResult <NSSecureCoding>
{
    NSArray *_displayNameInitials;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSArray *displayNameInitials; // @synthesize displayNameInitials=_displayNameInitials;
- (void).cxx_destruct;
- (BOOL)isFile;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isApplicationQueryResult;
- (id)valueForAttribute:(id)arg1;

@end

