//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EIntegrationView.h"

@class EQCaption;

@interface E1DIntegrationView : EIntegrationView
{
    EQCaption *mCaption;
    id mMin;
    id mMax;
}

- (unsigned long long)dimension;
- (id)maxAtIndex:(unsigned long long)arg1;
- (id)minAtIndex:(unsigned long long)arg1;
- (id)integrationCaptionAtIndex:(unsigned long long)arg1;

@end
