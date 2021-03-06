/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigXPCCoding.h>

@class NSDictionary, NSArray, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding> {

	NSDictionary* _formatDictionary;
	BOOL _isMultiStreamFormat;
	opaqueCMFormatDescriptionRef _formatDescription;

}

@property (readonly) unsigned mediaType; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (getter=isExperimental,readonly) BOOL experimental; 
@property (getter=isDefaultActiveFormat,readonly) BOOL defaultActiveFormat; 
@property (readonly) int videoFormatIndex; 
@property (readonly) unsigned videoFormat; 
@property (readonly) SCD_Struct_BW28 videoDimensions; 
@property (readonly) SCD_Struct_BW28 sensorDimensions; 
@property (readonly) float videoMinSupportedFrameRate; 
@property (readonly) float videoMaxSupportedFrameRate; 
@property (readonly) float videoDefaultMinFrameRate; 
@property (readonly) float videoDefaultMaxFrameRate; 
@property (readonly) float videoFieldOfView; 
@property (getter=isVideoBinned,readonly) BOOL videoBinned; 
@property (readonly) int videoStabilizationTypeOverrideForStandard; 
@property (getter=isVideoZoomSupported,readonly) BOOL videoZoomSupported; 
@property (readonly) float videoMaxZoomFactor; 
@property (readonly) float videoZoomFactorUpscaleThreshold; 
@property (getter=isVideoZoomDynamicSensorCropSupported,readonly) BOOL videoZoomDynamicSensorCropSupported; 
@property (getter=isVideoLowLightBinningSwitchSupported,readonly) BOOL videoLowLightBinningSwitchSupported; 
@property (readonly) int videoRawBitDepth; 
@property (readonly) int temporalNoiseReductionMode; 
@property (readonly) BOOL ispChromaNoiseReduction; 
@property (readonly) float minISO; 
@property (readonly) float maxISO; 
@property (readonly) SCD_Struct_BW2 minExposureDuration; 
@property (readonly) SCD_Struct_BW2 maxExposureDuration; 
@property (readonly) float aeMaxGain; 
@property (readonly) int maxIntegrationTimeOverride; 
@property (readonly) int autoFocusSystem; 
@property (getter=isMultiStreamFormat,readonly) BOOL multiStreamFormat; 
@property (readonly) BOOL hasFrontEndScalerCompanionIndex; 
@property (readonly) int frontEndScalerCompanionIndex; 
@property (readonly) SCD_Struct_BW28 sensorCropDimensions; 
@property (readonly) SCD_Struct_BW28 sourceCropAspectRatio; 
@property (readonly) BOOL hasSensorHDRCompanionIndex; 
@property (readonly) int sensorHDRCompanionIndex; 
@property (readonly) BOOL prefersSensorHDREnabled; 
@property (readonly) BOOL capturesStillsFromVideoStream; 
@property (getter=isPhotoFormat,readonly) BOOL photoFormat; 
@property (getter=isHighResPhotoFormat,readonly) BOOL highResPhotoFormat; 
@property (readonly) BOOL needsPreviewDPCC; 
@property (getter=isStillImageStabilizationSupported,readonly) BOOL stillImageStabilizationSupported; 
@property (getter=isHDRSupported,readonly) BOOL hdrSupported; 
@property (getter=isHighResStillImageSupported,readonly) BOOL highResStillImageSupported; 
@property (readonly) SCD_Struct_BW28 highResStillImageDimensions; 
@property (getter=isHighProfileH264Supported,readonly) BOOL highProfileH264Supported; 
@property (readonly) NSArray * AVCaptureSessionPresets; 
@property (readonly) float videoScaleFactor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(BOOL)isVideoStabilizationModeSupported:(int)arg1 ;
-(BOOL)isPhotoFormat;
-(BOOL)isHDRSupported;
-(BOOL)isDefaultActiveFormat;
-(NSArray *)AVCaptureSessionPresets;
-(SCD_Struct_BW2)minExposureDuration;
-(SCD_Struct_BW2)maxExposureDuration;
-(float)minISO;
-(float)maxISO;
-(float)videoMaxZoomFactor;
-(SCD_Struct_BW28)sensorDimensions;
-(BOOL)isStillImageStabilizationSupported;
-(float)videoFieldOfView;
-(BOOL)isVideoBinned;
-(float)videoZoomFactorUpscaleThreshold;
-(BOOL)isExperimental;
-(BOOL)isHighResPhotoFormat;
-(int)autoFocusSystem;
-(float)videoMinSupportedFrameRate;
-(float)videoMaxSupportedFrameRate;
-(BOOL)hasSensorHDRCompanionIndex;
-(SCD_Struct_BW28)highResStillImageDimensions;
-(BOOL)isHighResStillImageSupported;
-(BOOL)prefersSensorHDREnabled;
-(BOOL)isVideoLowLightBinningSwitchSupported;
-(BOOL)isVideoZoomDynamicSensorCropSupported;
-(int)videoRawBitDepth;
-(BOOL)isHighProfileH264Supported;
-(BOOL)needsPreviewDPCC;
-(int)videoFormatIndex;
-(float)videoDefaultMaxFrameRate;
-(float)videoDefaultMinFrameRate;
-(SCD_Struct_BW28)videoDimensions;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned)videoFormat;
-(BOOL)isMultiStreamFormat;
-(BOOL)isVideoZoomSupported;
-(int)temporalNoiseReductionMode;
-(BOOL)ispChromaNoiseReduction;
-(float)aeMaxGain;
-(int)maxIntegrationTimeOverride;
-(BOOL)hasFrontEndScalerCompanionIndex;
-(int)frontEndScalerCompanionIndex;
-(BOOL)capturesStillsFromVideoStream;
-(int)sensorHDRCompanionIndex;
-(SCD_Struct_BW28)sensorCropDimensions;
-(SCD_Struct_BW28)sourceCropAspectRatio;
-(int)videoStabilizationTypeOverrideForStandard;
-(SCD_Struct_BW28)_outputDimensions;
-(id)copyWithNewVideoPixelFormat:(unsigned)arg1 ;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
-(SCD_Struct_BW28)_maxUseableSensorDimensions;
-(SCD_Struct_BW28)_visibleSensorDimensionsIncludingCinematic:(BOOL)arg1 ;
-(float)videoScaleFactor;
-(unsigned)mediaType;
@end

