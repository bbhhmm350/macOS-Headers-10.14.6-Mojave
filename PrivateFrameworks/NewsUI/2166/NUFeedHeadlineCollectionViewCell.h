//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, NUViewNode;

@interface NUFeedHeadlineCollectionViewCell : UICollectionViewCell
{
    NUViewNode *_thumbnailImageViewNode;
    NUViewNode *_publisherLogoImageViewNode;
    NUViewNode *_titleLabelNode;
    NUViewNode *_dateLabelNode;
    NSString *_headlineIdentifier;
}

+ (id)titleLabelFont;
+ (id)dateLabelFont;
@property(copy, nonatomic) NSString *headlineIdentifier; // @synthesize headlineIdentifier=_headlineIdentifier;
@property(readonly, nonatomic) NUViewNode *dateLabelNode; // @synthesize dateLabelNode=_dateLabelNode;
@property(readonly, nonatomic) NUViewNode *titleLabelNode; // @synthesize titleLabelNode=_titleLabelNode;
@property(readonly, nonatomic) NUViewNode *publisherLogoImageViewNode; // @synthesize publisherLogoImageViewNode=_publisherLogoImageViewNode;
@property(readonly, nonatomic) NUViewNode *thumbnailImageViewNode; // @synthesize thumbnailImageViewNode=_thumbnailImageViewNode;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
