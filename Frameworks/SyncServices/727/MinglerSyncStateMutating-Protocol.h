//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class ISDFileReference, NSNumber, NSString;

@protocol MinglerSyncStateMutating
- (bycopy NSString *)clientId;
- (bycopy NSString *)formatterBundleClassName;
- (bycopy ISDFileReference *)formatterBundle;
- (oneway void)setLastSyncGeneration:(bycopy NSNumber *)arg1 forEntityNamed:(NSString *)arg2;
- (oneway void)setShouldRefilter:(bycopy NSNumber *)arg1 forEntityNamed:(NSString *)arg2;
- (oneway void)setSyncMode:(bycopy NSNumber *)arg1 forEntityNamed:(NSString *)arg2;
@end
