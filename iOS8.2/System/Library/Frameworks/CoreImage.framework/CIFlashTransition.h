/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, CIColor, NSNumber;

@interface CIFlashTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIVector* inputCenter;
	CIVector* inputExtent;
	CIColor* inputColor;
	NSNumber* inputTime;
	NSNumber* inputMaxStriationRadius;
	NSNumber* inputStriationStrength;
	NSNumber* inputStriationContrast;
	NSNumber* inputFadeThreshold;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputMaxStriationRadius; 
@property (nonatomic,retain) NSNumber * inputStriationStrength; 
@property (nonatomic,retain) NSNumber * inputStriationContrast; 
@property (nonatomic,retain) NSNumber * inputFadeThreshold; 
+(id)customAttributes;
-(void)setInputExtent:(CIVector *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(id)_geomKernel;
-(id)_colorKernel;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIVector *)inputCenter;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputTime;
-(void)setInputMaxStriationRadius:(NSNumber *)arg1 ;
-(void)setInputStriationStrength:(NSNumber *)arg1 ;
-(void)setInputStriationContrast:(NSNumber *)arg1 ;
-(void)setInputFadeThreshold:(NSNumber *)arg1 ;
-(NSNumber *)inputMaxStriationRadius;
-(NSNumber *)inputStriationStrength;
-(NSNumber *)inputStriationContrast;
-(NSNumber *)inputFadeThreshold;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputTime:(NSNumber *)arg1 ;
-(id)outputImage;
@end

