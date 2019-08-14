//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@protocol NSInputServiceProvider
- (void)activeConversationChanged:(id)arg1 toNewConversation:(long long)arg2;
- (void)activeConversationWillChange:(id)arg1 fromOldConversation:(long long)arg2;
- (void)inputClientDisabled:(id)arg1;
- (void)inputClientEnabled:(id)arg1;
- (void)inputClientResignActive:(id)arg1;
- (void)inputClientBecomeActive:(id)arg1;
- (BOOL)wantsToDelayTextChangeNotifications;
- (BOOL)wantsToHandleMouseEvents;
- (BOOL)wantsToInterpretAllKeystrokes;
- (BOOL)canBeDisabled;
- (void)terminate:(id)arg1;
- (void)markedTextSelectionChanged:(struct _NSRange)arg1 client:(id)arg2;
- (void)markedTextAbandoned:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1 client:(id)arg2;
- (void)insertText:(id)arg1 client:(id)arg2;
@end
