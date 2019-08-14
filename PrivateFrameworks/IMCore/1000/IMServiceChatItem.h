//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, IMServiceImpl;

@interface IMServiceChatItem : IMTranscriptChatItem
{
    IMHandle *_handle;
    IMServiceImpl *_service;
}

@property(readonly, nonatomic) IMHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) IMServiceImpl *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
