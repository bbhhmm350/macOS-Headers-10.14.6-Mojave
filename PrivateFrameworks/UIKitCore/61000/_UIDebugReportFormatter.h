//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugReportFormatter : NSObject
{
    unsigned long long _indentLevel;
    NSString *_indentString;
    unsigned long long _extraBodyIndentLevel;
}

+ (id)defaultFormatter;
@property(nonatomic) unsigned long long extraBodyIndentLevel; // @synthesize extraBodyIndentLevel=_extraBodyIndentLevel;
@property(copy, nonatomic) NSString *indentString; // @synthesize indentString=_indentString;
@property(nonatomic) unsigned long long indentLevel; // @synthesize indentLevel=_indentLevel;
- (void).cxx_destruct;
- (id)stringFromReportComponents:(id)arg1;
- (id)init;

@end
