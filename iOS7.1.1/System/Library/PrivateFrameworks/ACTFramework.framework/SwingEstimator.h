/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CMMotionManager, NSMutableArray, NSOperationQueue;

@interface SwingEstimator : NSObject {

	CMMotionManager* motionManager;
	bool estimate;
	bool collectDebugData;
	bool showDebugData;
	NSMutableArray* debugData;
	unsigned long long startTime;
	unsigned long long stopTime;
	int numberOfSamples;
	int numberOfValidSamplesAngularVelocity;
	int numberOfValidSamplesLinearAcceleration;
	float LOmega;
	float ROmega;
	float LA;
	float RA;
	void* outputRefCon;
	/*function pointer*/ void* outputCallback;
	NSOperationQueue* operationQueue;

}

@property (assign) bool estimate; 
@property (assign) int numberOfSamples; 
@property (assign) int numberOfValidSamplesAngularVelocity; 
@property (assign) int numberOfValidSamplesLinearAcceleration; 
@property (assign) float LOmega; 
@property (assign) float ROmega; 
@property (assign) float LA; 
@property (assign) float RA; 
@property (readonly) NSOperationQueue * operationQueue; 
-(id)operationQueue;
-(void)dealloc;
-(void)initSensors;
-(void)estimateSwingMotion;
-(void)stopMotionManager;
-(bool)isSignalTooWeak:(float)arg1 withRespectTo:(float)arg2 withMargin:(float)arg3 ;
-(bool)isSignalTooNoisy:(float)arg1 withMean:(float)arg2 andWithStandardDeviation:(float)arg3 withMargin:(float)arg4 ;
-(float)updateEvidenceAngularVelocity:(float)arg1 withOmegaX:(float)arg2 withOmegaY:(float)arg3 withOmegaZ:(float)arg4 checkIfSampleIsGood:(bool*)arg5 ;
-(float)updateEvidenceLinearAcceleration:(float)arg1 withAX:(float)arg2 withAY:(float)arg3 withAZ:(float)arg4 checkIfSampleIsGood:(bool*)arg5 ;
-(id)createCSVfromDebugData;
-(id)initWithCallback:(/*function pointer*/ void*)arg1 userData:(void*)arg2 ;
-(bool)estimate;
-(void)setEstimate:(bool)arg1 ;
-(int)numberOfValidSamplesAngularVelocity;
-(void)setNumberOfValidSamplesAngularVelocity:(int)arg1 ;
-(int)numberOfValidSamplesLinearAcceleration;
-(void)setNumberOfValidSamplesLinearAcceleration:(int)arg1 ;
-(int)numberOfSamples;
-(void)setNumberOfSamples:(int)arg1 ;
-(float)LOmega;
-(void)setLOmega:(float)arg1 ;
-(float)ROmega;
-(void)setROmega:(float)arg1 ;
-(float)LA;
-(void)setLA:(float)arg1 ;
-(float)RA;
-(void)setRA:(float)arg1 ;
@end
