//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PlacesKit/NSObject-Protocol.h>

@class NSOrderedSet;
@protocol PXPlacesMapLayoutItem;

@protocol PXPlacesMapLayoutItem <NSObject>
@property(readonly, nonatomic) NSOrderedSet *geotaggables;
@property struct CLLocationCoordinate2D coordinate;
- (BOOL)isEqualToLayoutItem:(id <PXPlacesMapLayoutItem>)arg1;
@end

