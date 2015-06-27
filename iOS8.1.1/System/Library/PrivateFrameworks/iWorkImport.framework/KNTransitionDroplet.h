/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameAnimator.h>

@class TSDGLShader, TSDGLDataBuffer, NSString;

@interface KNTransitionDroplet : KNAnimationEffect <KNFrameAnimator> {

	TSDGLShader* mQuadShader;
	TSDGLDataBuffer* mQuadDataBuffer;
	TSDGLShader* mDropletShader;
	TSDGLDataBuffer* mDropletDataBuffer;
	CGRect _frameRect;
	CGRect _drawableFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(id)defaultAttributes;
+(id)animationName;
-(void)p_setupShaders;
-(void)p_teardown;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)p_setupDataBuffersWithFrameRect:(CGRect)arg1 ;
-(void)dealloc;
@end
