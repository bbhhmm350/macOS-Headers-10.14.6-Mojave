//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface localizedInfo : NSObject
{
    NSDictionary *locDict;
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)_LWlocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)_LWlocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundle:(id)arg4;
- (id)localizationDictForTable:(id)arg1 inBundle:(id)arg2;
- (id)nibPathforResource:(id)arg1;
- (id)preferredLocalizationsForBundle:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inBundle:(id)arg3;
- (BOOL)loadNibFileOfName:(id)arg1 owner:(id)arg2;
- (id)init;

@end
