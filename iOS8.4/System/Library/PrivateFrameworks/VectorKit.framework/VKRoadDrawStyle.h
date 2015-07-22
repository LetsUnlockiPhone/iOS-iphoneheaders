/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRenderStyle.h>

@interface VKRoadDrawStyle : VKRenderStyle {

	VKProfileSparseRamp<float>* width;
	VKProfileSparseRamp<float>* strokeWidth;
	VKProfileSparseRamp<float>* labelHeight;
	VKProfileSparseRamp<float>* widthDropoff;
	VKProfileSparseRamp<_VGLColor>* fillColor;
	VKProfileSparseRamp<_VGLColor>* strokeColor;
	VKProfileSparseRamp<bool>* simpleLine;
	VKProfileSparseRamp<int>* zIndices;
	VKProfileSparseRamp<int>* fillZIndices;
	VKProfileSparseRamp<bool>* strokeColorInterpolate;
	VKProfileSparseRamp<bool>* fillColorInterpolate;
	unsigned char railroadPattern;
	VKProfileSparseRamp<_VGLColor>* alternateFillColor;
	VKProfileSparseRamp<float>* patternScaler;
	VKProfileSparseRamp<float>* patternScalerQuantizationFactor;
	VKProfileSparseRamp<bool>* renderEndCaps;

}
+(int)renderStyleID;
-(unsigned char)railroadPattern;
-(BOOL)visibleAtZoom:(float)arg1 ;
@end
