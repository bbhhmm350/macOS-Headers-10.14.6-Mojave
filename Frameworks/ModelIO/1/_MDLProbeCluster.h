//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface _MDLProbeCluster : NSObject
{
    NSMutableSet *_probes;
    // Error parsing type: , name: _centroid
}

@property(retain) NSMutableSet *probes; // @synthesize probes=_probes;
// Error parsing type for property centroid:
// Property attributes: T,V_centroid

- (void).cxx_destruct;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCluster:(id)arg1;
- (BOOL)isEmpty;

@end
