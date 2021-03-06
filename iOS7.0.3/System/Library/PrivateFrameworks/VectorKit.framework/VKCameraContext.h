/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKPuckAnimatorLocationProjector;

@interface VKCameraContext : NSObject {

	SCD_Struct_VK61 _pointOfReference;
	double _heading;
	SCD_Struct_VK61 _pointOfFocus;
	int _style;
	int _focusStyle;
	SCD_Struct_VK61 _courseTargetLocation;
	int _courseSource;
	double _lastCameraFocusCourse;
	BOOL _animated;
	BOOL _applied;
	vector<GEOLocationCoordinate2D, vk_allocator<GEOLocationCoordinate2D> >* _pois;
	VKPuckAnimatorLocationProjector* _locationProjector;
	double _verticalGroundspanScale;

}

@property (nonatomic,readonly) SCD_Struct_VK61 pointOfReference;                //@synthesize pointOfReference=_pointOfReference - In the implementation block
@property (nonatomic,readonly) double heading;                                  //@synthesize heading=_heading - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VK61 pointOfFocus;                    //@synthesize pointOfFocus=_pointOfFocus - In the implementation block
@property (assign,nonatomic) int style;                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int focusStyle;                                    //@synthesize focusStyle=_focusStyle - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK61 courseTargetLocation;              //@synthesize courseTargetLocation=_courseTargetLocation - In the implementation block
@property (assign,nonatomic) int courseSource;                                  //@synthesize courseSource=_courseSource - In the implementation block
@property (nonatomic,readonly) BOOL animated;                                   //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) BOOL applied;                                      //@synthesize applied=_applied - In the implementation block
@property (nonatomic,readonly) double verticalGroundspanScale;                  //@synthesize verticalGroundspanScale=_verticalGroundspanScale - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(BOOL)animated;
-(id).cxx_construct;
-(void)setApplied:(BOOL)arg1 ;
-(SCD_Struct_VK61)pointOfReference;
-(int)focusStyle;
-(double)verticalGroundspanScale;
-(SCD_Struct_VK61)pointOfFocus;
-(void)enumeratePointsOfInterestUsingBlock:(/*^block*/ id)arg1 ;
-(BOOL)applied;
-(void)_setPointOfReference:(SCD_Struct_VK61)arg1 heading:(double)arg2 routeMatch:(id)arg3 onRoute:(BOOL)arg4 ;
-(void)updateForLocation:(id)arg1 routeMatch:(id)arg2 isRouteMatch:(BOOL)arg3 speedMultiplier:(double)arg4 onRoute:(BOOL)arg5 animated:(BOOL)arg6 ;
-(void)clearPointsOfInterest;
-(void)addPointOfInterest:(SCD_Struct_VK61)arg1 ;
-(void)setFocusStyle:(int)arg1 ;
-(SCD_Struct_VK61)courseTargetLocation;
-(void)setCourseTargetLocation:(SCD_Struct_VK61)arg1 ;
-(int)courseSource;
-(void)setCourseSource:(int)arg1 ;
-(void).cxx_destruct;
-(double)heading;
@end

