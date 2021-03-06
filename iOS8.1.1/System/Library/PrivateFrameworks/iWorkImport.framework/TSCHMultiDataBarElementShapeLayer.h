/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CAShapeLayer.h>
#import <iWorkImport/TSCHMultiDataElementShapeLayer.h>
#import <iWorkImport/TSCHMultiDataAnimatingPathLayerProtocol.h>

@interface TSCHMultiDataBarElementShapeLayer : CAShapeLayer <TSCHMultiDataElementShapeLayer, TSCHMultiDataAnimatingPathLayerProtocol> {

	BOOL mAboveIntercept;
	CGPathRef mPresentationPath;

}

@property (assign,nonatomic) CGPathRef presentationPath; 
-(id)chartRep;
-(void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2 ;
-(void)updateElementFrame:(CGRect)arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3 ;
-(BOOL)aboveIntercept;
-(id)currentValueLayer;
-(void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(double)arg3 ;
-(CGPathRef)presentationPath;
-(void)p_addAnimationsForUpdatingPath:(CGPathRef)arg1 toAnimationInfo:(id)arg2 ;
-(void)setPresentationPath:(CGPathRef)arg1 ;
-(void)dealloc;
-(void)setPath:(CGPathRef)arg1 ;
-(id)initWithLayer:(id)arg1 ;
@end

