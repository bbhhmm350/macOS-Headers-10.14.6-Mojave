//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface CollapsibleLicense : NSObject
{
    BOOL expanded;
    NSAttributedString *summaryText;
    NSAttributedString *fullText;
    NSString *expandOrContractLabel;
    NSString *licenseName;
    NSAttributedString *currentLicenseText;
    NSString *_licenseType;
}

+ (id)keyPathsForValuesAffectingExpandOrContractLabel;
+ (id)keyPathsForValuesAffectingCurrentLicenseText;
@property(retain) NSString *licenseType; // @synthesize licenseType=_licenseType;
@property(retain) NSString *licenseName; // @synthesize licenseName;
@property(retain) NSAttributedString *fullText; // @synthesize fullText;
@property(retain) NSAttributedString *summaryText; // @synthesize summaryText;
@property BOOL expanded; // @synthesize expanded;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)toggleExpanded:(id)arg1;
@property(readonly) NSString *expandOrContractLabel; // @synthesize expandOrContractLabel;
@property(readonly) NSAttributedString *currentLicenseText; // @synthesize currentLicenseText;

@end
