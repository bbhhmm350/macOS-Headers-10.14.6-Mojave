//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXMapVersionAnnotation, NSString;
@protocol MKAnnotation;

@protocol IPXMapAnnotationViewDelegate <NSObject>
- (NSString *)accessibilityLabelForAnnotation:(id <MKAnnotation>)arg1;
- (double)globalZPositionForVersionAnnotation:(IPXMapVersionAnnotation *)arg1;
- (struct CGImage *)newThumbnailForVersionAnnotation:(IPXMapVersionAnnotation *)arg1 withShortestEdge:(double)arg2;
@end
