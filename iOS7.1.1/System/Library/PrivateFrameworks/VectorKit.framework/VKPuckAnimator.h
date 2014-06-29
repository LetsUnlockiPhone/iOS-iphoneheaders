/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKPuckAnimatorTarget, VKPuckAnimatorDelegate;
@class VKAnimation, VKRunningCurve, VKPuckAnimatorLocationProjector, VKAttributedRouteMatch;

@interface VKPuckAnimator : NSObject {

	<VKPuckAnimatorTarget>* _target;
	VKAnimation* _animation;
	VKRunningCurve* _curve;
	VKPuckAnimatorLocationProjector* _locationProjector;
	double _vehicleHeading;
	<VKPuckAnimatorDelegate>* _delegate;
	long long _pausedCount;
	bool _suspended;
	double _tracePlaybackSpeedMultiplier;
	unsigned long long _behavior;
	VKAttributedRouteMatch* _lastProjectedLocation;

}

@property (nonatomic,retain) <VKPuckAnimatorTarget> * target;                             //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) <VKPuckAnimatorDelegate> * delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double tracePlaybackSpeedMultiplier;                         //@synthesize tracePlaybackSpeedMultiplier=_tracePlaybackSpeedMultiplier - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;                                 //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,retain) VKAttributedRouteMatch * lastProjectedLocation;              //@synthesize lastProjectedLocation=_lastProjectedLocation - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)start;
-(void)resume;
-(void)stop;
-(void)pause;
-(void)_step;
-(void)setTracePlaybackSpeedMultiplier:(double)arg1 ;
-(double)tracePlaybackSpeedMultiplier;
-(void)updateLocation:(id)arg1 routeMatch:(id)arg2 ;
-(void)updateVehicleHeading:(double)arg1 ;
-(id)lastProjectedLocation;
-(void)setLastProjectedLocation:(id)arg1 ;
-(unsigned long long)behavior;
-(void)setBehavior:(unsigned long long)arg1 ;
@end
