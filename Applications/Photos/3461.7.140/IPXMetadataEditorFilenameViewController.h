//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorViewController-Protocol.h"

@class NSString, NSTextField, NSView;

@interface IPXMetadataEditorFilenameViewController : IPXViewController <IPXMetadataEditorViewController>
{
    NSTextField *_filenameTextField;
}

@property(nonatomic) __weak NSTextField *filenameTextField; // @synthesize filenameTextField=_filenameTextField;
- (void).cxx_destruct;
- (void)selectedVersions:(id)arg1;
- (id)propertiesForTable:(id)arg1;
- (id)tableClasses;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSView *initialFirstResponder;
@property(readonly) Class superclass;

@end
