//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSInstaller/OSIInstallElement.h>

@class OSIPersonalizedManifests;

@interface OSIInstallPersonalizedManifestsElement : OSIInstallElement
{
    OSIPersonalizedManifests *_personalizedManifests;
}

@property(retain) OSIPersonalizedManifests *personalizedManifests; // @synthesize personalizedManifests=_personalizedManifests;
- (void).cxx_destruct;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;
- (id)initWithOptions:(id)arg1 personalizedManifests:(id)arg2;

@end
