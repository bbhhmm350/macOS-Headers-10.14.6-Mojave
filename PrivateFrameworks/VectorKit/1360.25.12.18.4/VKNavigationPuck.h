//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKTrackableAnnotationPresentation-Protocol.h>

@class NSString, VKTimedAnimation;
@protocol VKAnnotation;

@interface VKNavigationPuck : NSObject <VKTrackableAnnotationPresentation>
{
    id <VKAnnotation> _annotation;
    BOOL _tracking;
    BOOL _animatingToCoordinate;
    BOOL _stale;
    VKTimedAnimation *_puckStyleAnimation;
    struct AnimationRunner *_animationRunner;
    struct NavigationPuck *_navigationPuck;
}

@property(nonatomic) BOOL animatingToCoordinate; // @synthesize animatingToCoordinate=_animatingToCoordinate;
@property(nonatomic) BOOL stale; // @synthesize stale=_stale;
@property(retain, nonatomic) id <VKAnnotation> annotation; // @synthesize annotation=_annotation;
- (struct NavigationPuck *)puck;
@property(nonatomic) BOOL enabled;
@property(nonatomic) BOOL tracking; // @synthesize tracking=_tracking;
@property(nonatomic) CDStruct_c3b9c2ee presentationCoordinate;
@property(nonatomic) float scale;
@property(nonatomic) BOOL showCourse;
@property(nonatomic) double presentationCourse;
@property(nonatomic) int mode;
- (void)runAnimation:(id)arg1;
- (void)destroyAnimationRunner;
- (void)dealloc;
- (id)initWithAnimationRunner:(struct AnimationRunner *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
