/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShadowsRenderer.h>

@class TSCH3DFBOResource, NSArray;

@interface TSCH3DSimpleBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer> {

	TSCH3DFBOResource* mShadowsFBOResource;
	TSCH3DFBOResource* mBlurFBOResource;
	tvec2<int> mShadowsSize;
	NSArray* mBlurParametersArray;

}
-(id)initWithBlurParametersArray:(id)arg1 ;
-(float)blurSlackForQuality:(float)arg1 ;
-(void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(/*^block*/ id)arg3 ;
-(id)shadowsFBOForContext:(id)arg1 ;
-(void)unprotectShadowInSession:(id)arg1 ;
-(void)blurParametersFromQuality:(float)arg1 shadowSize:(long long*)arg2 numPasses:(long long*)arg3 kernelScale:(float*)arg4 ;
-(void)dealloc;
-(void)invalidate;
-(id).cxx_construct;
@end

