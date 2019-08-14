//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ChatWindowController.h"

@class ChatMiniwindowController;

@interface SingleChatWindowController : ChatWindowController
{
    ChatMiniwindowController *_miniwindowController;
}

+ (id)allSingleChatWindowControllers;
+ (id)singleChatWindowControllerForChat:(id)arg1 forceCreate:(BOOL)arg2;
+ (id)_chatToSingleChatWindowControllerDictionary;
+ (id)_allSingleChatWindowControllers;
@property(retain, nonatomic) ChatMiniwindowController *miniwindowController; // @synthesize miniwindowController=_miniwindowController;
- (void).cxx_destruct;
- (void)find:(id)arg1;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)restoreContentStateWithCoder:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)chatDisplayControllerDidChange;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (void)_completedInitialLoad:(id)arg1;
- (void)_unregisterChat:(id)arg1;
- (void)_registerChat:(id)arg1;
- (void)dealloc;
- (void)windowDidLoad;
- (id)initWithChat:(id)arg1;
- (id)init;
- (void)_commonSingleChatWindowControllerInit;

@end
