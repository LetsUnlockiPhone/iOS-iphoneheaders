/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:43:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorCrossPolynomial : CIFilter {

	CIImage* inputImage;
	CIVector* inputCoefficients;
	CIVector* inputRedCoefficients;
	CIVector* inputGreenCoefficients;
	CIVector* inputBlueCoefficients;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRedCoefficients; 
@property (nonatomic,retain) CIVector * inputGreenCoefficients; 
@property (nonatomic,retain) CIVector * inputBlueCoefficients; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(char)_isIdentity;
-(id)_kernel;
-(void)setInputBlueCoefficients:(CIVector *)arg1 ;
-(void)setInputGreenCoefficients:(CIVector *)arg1 ;
-(void)setInputRedCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputRedCoefficients;
-(CIVector *)inputGreenCoefficients;
-(CIVector *)inputBlueCoefficients;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end

