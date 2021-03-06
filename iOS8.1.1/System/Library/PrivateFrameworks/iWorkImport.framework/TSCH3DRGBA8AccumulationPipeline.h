/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRGBA8FramebufferAccumulationSubPipeline.h>
#import <iWorkImport/TSCH3DFramebufferAccumulator.h>

@interface TSCH3DRGBA8AccumulationPipeline : TSCH3DRGBA8FramebufferAccumulationSubPipeline <TSCH3DFramebufferAccumulator> {

	long long mCurrentPass;

}
-(BOOL)prepareFramebuffer;
-(void)setupShaderEffects;
-(AccumulationData)progressiveAccumulationWithPerentage:(float)arg1 ;
-(AccumulationData)mixedAccumulation;
-(void)reset;
@end

