//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCSharingModifyShareOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyShareURLOperation : BRCSharingModifyShareOperation
{
    NSString *_appName;
}

- (void).cxx_destruct;
- (void)main;
- (void)_completedWithURL:(id)arg1 error:(id)arg2;
- (id)createActivity;
- (id)initWithShare:(id)arg1 zone:(id)arg2 appName:(id)arg3;
- (BOOL)shouldRetryForError:(id)arg1;

@end
