//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMJSONSerializable-Protocol.h>
#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMLanguage, AXMTaggedText, AXMVisionFeatureAssetMetadata, AXMVisionFeatureColorInfo, AXMVisionFeatureFaceLandmarks, NSArray, NSDictionary, NSNumber, NSString;

@interface AXMVisionFeature : NSObject <AXMJSONSerializable, NSSecureCoding>
{
    unsigned long long _featureType;
    NSArray *_subfeatures;
    NSString *_barcodeType;
    long long _ocrFeatureType;
    AXMLanguage *_detectionLanguage;
    double _creationDate;
    struct CGRect _frame;
    struct CGRect _normalizedFrame;
    NSString *_value;
    NSNumber *_isValueSpeakable;
    AXMTaggedText *_taggedText;
    AXMVisionFeatureColorInfo *_colorInfo;
    AXMVisionFeatureAssetMetadata *_assetMetadata;
    double _blur;
    double _brightness;
    double _confidence;
    struct CGAffineTransform _horizonTransform;
    float _horizonAngle;
    AXMVisionFeatureFaceLandmarks *_faceLandmarks;
    AXMVisionFeatureFaceLandmarks *_faceLandmarks3d;
    NSDictionary *_faceExpressionsAndConfidence;
    long long _likelyExpression;
    unsigned long long _faceId;
    // Error parsing type: {?="columns"[4]}, name: _facePose
    struct CGSize _canvasSize;
}

+ (id)flattenedFeatureList:(id)arg1;
+ (void)_append:(id)arg1 toList:(id)arg2;
+ (id)nameForFaceExpression:(long long)arg1;
+ (id)nameForOCRType:(long long)arg1;
+ (id)nameForFeatureType:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)featureWithAssetMetadata:(id)arg1;
+ (id)featureWithColorInfo:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)featureWithMediaLegibility:(id)arg1;
+ (id)featureWithVisionRequest:(id)arg1 rectangleResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 classificationResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 horizonResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 brightnessValue:(float)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 blurValue:(float)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 humanResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 faceResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 textResult:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)featureWithFutharkFeature:(id)arg1 canvasSize:(struct CGSize)arg2 context:(id)arg3;
+ (id)textLineWithBoundingBox:(struct CGRect)arg1 sequences:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)textRegionWithBoundingBox:(struct CGRect)arg1 lines:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)textDocumentWithBoundingBox:(struct CGRect)arg1 regions:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)featureWithMetadata:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)unitTestingHorizonFeature;
+ (id)unitTestingFaceFeature;
+ (id)unitTestingFeature;
+ (id)unitTestingFeatureWithType:(unsigned long long)arg1 canvasSize:(struct CGSize)arg2 frame:(struct CGRect)arg3 value:(id)arg4 barcodeType:(id)arg5 ocrFeatureType:(long long)arg6 subFeatures:(id)arg7;
- (void).cxx_destruct;
- (double)confidenceForExpression:(long long)arg1;
@property(readonly, nonatomic) long long likelyExpression;
- (id)stringForExpression:(long long)arg1;
- (long long)expressionForString:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToAXMVisionFeature:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)_nameForOCRFeatureType:(long long)arg1;
@property(readonly, nonatomic) BOOL isTrackable;
@property(readonly, nonatomic) BOOL isTextDiacritic;
@property(readonly, nonatomic) BOOL isTextCharacter;
@property(readonly, nonatomic) BOOL isTextSequence;
@property(readonly, nonatomic) BOOL isTextLine;
@property(readonly, nonatomic) BOOL isTextRegion;
@property(readonly, nonatomic) BOOL isTextDocument;
@property(readonly, nonatomic) BOOL isOCR;
@property(readonly, nonatomic) BOOL isRectangle;
@property(readonly, nonatomic) BOOL isAssetMetadata;
@property(readonly, nonatomic) BOOL isMediaLegibility;
@property(readonly, nonatomic) BOOL isHorizon;
@property(readonly, nonatomic) BOOL isBlur;
@property(readonly, nonatomic) BOOL isBrightness;
@property(readonly, nonatomic) BOOL isColor;
@property(readonly, nonatomic) BOOL isModelClassification;
@property(readonly, nonatomic) BOOL isClassification;
@property(readonly, nonatomic) BOOL isHuman;
@property(readonly, nonatomic) BOOL isFace;
@property(readonly, nonatomic) BOOL isBarcode;
- (BOOL)_isTextFeatureValueSpeakable;
@property(readonly, nonatomic) BOOL isValueSpeakable;
- (id)_valueForTextFeature;
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) float horizonAngle;
@property(readonly, nonatomic) struct CGAffineTransform horizonTransform;
// Error parsing type for property facePose:
// Property attributes: T{?=[4]},R,N

@property(readonly, nonatomic) unsigned long long faceId;
@property(readonly, nonatomic) NSDictionary *faceExpressionsAndConfidence;
@property(readonly, nonatomic) AXMVisionFeatureFaceLandmarks *faceLandmarks3d;
@property(readonly, nonatomic) AXMVisionFeatureFaceLandmarks *faceLandmarks;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double blur;
@property(readonly, nonatomic) AXMVisionFeatureAssetMetadata *assetMetadata;
@property(readonly, nonatomic) AXMVisionFeatureColorInfo *colorInfo;
@property(readonly, nonatomic) AXMLanguage *detectionLanguage;
@property(readonly, nonatomic) long long ocrFeatureType;
@property(readonly, nonatomic) NSString *barcodeType;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) struct CGRect normalizedFrame;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) double creationDate;
@property(readonly, nonatomic) NSArray *subfeatures;
@property(readonly, nonatomic) unsigned long long featureType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)_serializeWithCoder:(id)arg1 orDictionary:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
@property(readonly, nonatomic) AXMTaggedText *taggedText;

// Remaining properties
@property(readonly) Class superclass;

@end

