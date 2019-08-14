//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSSceneDefinition, FBSSceneParameters, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;
@protocol FBSceneHost;

@protocol FBSceneClient <NSObject>
- (void)host:(id <FBSceneHost>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)host:(id <FBSceneHost>)arg1 didInvalidateWithTransitionContext:(FBSSceneTransitionContext *)arg2 completion:(void (^)(BOOL))arg3;
- (void)host:(id <FBSceneHost>)arg1 didUpdateSettings:(FBSSceneSettings *)arg2 withDiff:(FBSSceneSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4 completion:(void (^)(BOOL))arg5;
- (void)host:(id <FBSceneHost>)arg1 configureWithDefinition:(FBSSceneDefinition *)arg2 parameters:(FBSSceneParameters *)arg3;
@end
