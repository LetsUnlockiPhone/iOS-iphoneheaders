/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIDisintegrateWithMaskTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputMaskImage;
	NSNumber* inputTime;
	NSNumber* inputShadowRadius;
	NSNumber* inputShadowDensity;
	CIVector* inputShadowOffset;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputShadowRadius; 
@property (nonatomic,retain) NSNumber * inputShadowDensity; 
@property (nonatomic,retain) CIVector * inputShadowOffset; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernel;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputTime;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(void)setInputShadowRadius:(NSNumber *)arg1 ;
-(void)setInputShadowDensity:(NSNumber *)arg1 ;
-(void)setInputShadowOffset:(CIVector *)arg1 ;
-(NSNumber *)inputShadowRadius;
-(NSNumber *)inputShadowDensity;
-(CIVector *)inputShadowOffset;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputTime:(NSNumber *)arg1 ;
-(id)outputImage;
@end

