//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/SCNImageSource.h>

@class SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitSource : SCNImageSource
{
    SKScene *_scene;
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (void)dealloc;
- (BOOL)isOpaque;
- (id)textureSource;

@end
