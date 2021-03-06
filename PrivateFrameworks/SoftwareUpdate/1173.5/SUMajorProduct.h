//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdate/NSSecureCoding-Protocol.h>

@class NSData, NSImage, NSString;

@interface SUMajorProduct : NSObject <NSSecureCoding>
{
    NSString *_displayTitle;
    NSString *_displayVersion;
    NSString *_moreInfoLinkString;
    NSData *_iconData;
    NSString *_majorOSBundleIdentifier;
    NSString *_majorOSBundleVersion;
    NSString *_majorOSBundleShortVersion;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSString *majorOSBundleShortVersion; // @synthesize majorOSBundleShortVersion=_majorOSBundleShortVersion;
@property(readonly) NSString *majorOSBundleVersion; // @synthesize majorOSBundleVersion=_majorOSBundleVersion;
@property(readonly) NSString *majorOSBundleIdentifier; // @synthesize majorOSBundleIdentifier=_majorOSBundleIdentifier;
@property(readonly) NSData *iconData; // @synthesize iconData=_iconData;
@property(readonly) NSString *moreInfoLinkString; // @synthesize moreInfoLinkString=_moreInfoLinkString;
@property(readonly) NSString *displayVersion; // @synthesize displayVersion=_displayVersion;
@property(readonly) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
- (id)installerApplicationBundleURLOnDisk;
@property(readonly) NSImage *iconImage;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 withProductVersion:(id)arg2 withMoreInfoLink:(id)arg3 withIcon:(id)arg4 withMajorOSBundleIdentifier:(id)arg5 withMajorOSBundleVersion:(id)arg6 withMajorOSBundleShortVersion:(id)arg7;

@end

