//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ECBezelIconList, ECEvent;

@protocol ECBezelIconList <NSObject>
- (_Bool)bezelIconList:(ECBezelIconList *)arg1 itemDroppedAtIndex:(unsigned long long)arg2 forDrag:(struct OpaqueCoreDrag *)arg3;
- (_Bool)bezelIconList:(ECBezelIconList *)arg1 itemSelectedAtIndex:(unsigned long long)arg2 forDrag:(struct OpaqueCoreDrag *)arg3;
- (void)bezelIconList:(ECBezelIconList *)arg1 itemSelectedAtIndex:(unsigned long long)arg2;
- (void)bezelIconList:(ECBezelIconList *)arg1 handleKeyboardEvent:(ECEvent *)arg2;
- (void)bezelIconListCancel:(ECBezelIconList *)arg1;
- (void)bezelIconList:(ECBezelIconList *)arg1 performActionAtIndex:(unsigned long long)arg2;
@end
