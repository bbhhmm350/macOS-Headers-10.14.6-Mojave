//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUImage-Protocol.h>

@protocol NUDevice, NUImageStorage, NUSurfaceStorage;

@protocol NUMutableImage <NUImage>
- (BOOL)copyBufferStorage:(id <NUImageStorage>)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;
- (BOOL)copySurfaceStorage:(id <NUSurfaceStorage>)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id <NUDevice>)arg4;
@end
