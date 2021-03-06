/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCHMultiDataChartRep;

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent> {

	TSCHMultiDataChartRep* mRep;
	NSRange mStages;
	double mTotalDuration;
	double mDuration;
	unsigned long long mCurrentStage;

}

@property (nonatomic,readonly) unsigned long long currentStage; 
@property (nonatomic,readonly) double duration; 
+(unsigned long long)numberOfFadingBuildStages;
+(unsigned long long)dataSetIndexForRep:(id)arg1 buildStage:(unsigned long long)arg2 ;
+(id)buildStagesWithRep:(id)arg1 stages:(NSRange)arg2 totalDuration:(double)arg3 ;
-(void)clearParent;
-(id)chartLayout;
-(id)initWithRep:(id)arg1 stages:(NSRange)arg2 totalDuration:(double)arg3 ;
-(void)setupLayoutDataSetIndexForCurrentStage;
-(unsigned long long)dataSetIndexForStage:(unsigned long long)arg1 ;
-(bool)isBackgroundOnlyStage:(unsigned long long)arg1 ;
-(void)setupLayoutDataSetIndexForNextStage;
-(bool)isBackgroundOnly;
-(bool)isLastStageBackgroundOnly;
-(bool)isFadingInLayers;
-(void)advanceStage;
-(bool)hasStage;
-(void)dealloc;
-(double)duration;
-(id).cxx_construct;
-(unsigned long long)currentStage;
@end

