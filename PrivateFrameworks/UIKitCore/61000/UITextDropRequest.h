//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextDropRequest-Protocol.h>

@class NSString, UITextDropProposal, UITextPosition;
@protocol UIDropSession;

__attribute__((visibility("hidden")))
@interface UITextDropRequest : NSObject <UITextDropRequest>
{
    BOOL _sameView;
    id <UIDropSession> _dropSession;
    UITextPosition *_dropPosition;
    UITextDropProposal *_suggestedProposal;
}

@property(nonatomic, getter=isSameView) BOOL sameView; // @synthesize sameView=_sameView;
@property(retain, nonatomic) UITextDropProposal *suggestedProposal; // @synthesize suggestedProposal=_suggestedProposal;
@property(readonly, nonatomic) UITextPosition *dropPosition; // @synthesize dropPosition=_dropPosition;
@property(readonly, nonatomic) id <UIDropSession> dropSession; // @synthesize dropSession=_dropSession;
- (void).cxx_destruct;
- (id)initWithPosition:(id)arg1 inSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
