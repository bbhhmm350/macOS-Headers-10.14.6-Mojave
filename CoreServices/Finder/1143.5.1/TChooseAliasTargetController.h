//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TChooseObjectController.h"

@interface TChooseAliasTargetController : TChooseObjectController
{
    struct TFENode _aliasNode;
    struct TFENode _newTargetNode;
}

+ (id)newControllerWithAlias:(const struct TFENode *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)validateNode:(const struct TFENode *)arg1;
- (_Bool)shouldEnableNode:(const struct TFENode *)arg1;
- (const struct TFENode *)newTargetNode;

@end
