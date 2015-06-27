/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRenderStyle.h>

@interface VKPuckDrawStyle : VKRenderStyle

@property (nonatomic,readonly) float circleBrightness; 
@property (nonatomic,readonly) float arrowBrightness; 
@property (nonatomic,readonly) Matrix<float arrowColor; 
@property (nonatomic,readonly) Matrix<float arrowColorStale; 
@property (nonatomic,readonly) float size; 
@property (nonatomic,readonly) float offset; 
@property (nonatomic,readonly) BOOL hasCircleBrightness; 
@property (nonatomic,readonly) BOOL hasArrowBrightness; 
@property (nonatomic,readonly) BOOL hasArrowColor; 
@property (nonatomic,readonly) BOOL hasArrowColorStale; 
@property (nonatomic,readonly) BOOL hasSize; 
@property (nonatomic,readonly) BOOL hasOffset; 
+(int)renderStyleID;
-(float)size;
-(float)offset;
-(Matrix<float)arrowColor;
-(BOOL)hasArrowColor;
-(BOOL)hasCircleBrightness;
-(float)circleBrightness;
-(BOOL)hasArrowColorStale;
-(Matrix<float)arrowColorStale;
-(BOOL)hasArrowBrightness;
-(float)arrowBrightness;
-(BOOL)hasSize;
-(BOOL)hasOffset;
@end
