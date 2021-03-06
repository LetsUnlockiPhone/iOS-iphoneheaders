/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:11:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/CLLocationManagerDelegate.h>

@protocol CLLocationManagerDelegate;
@class NSTimer, CLLocationManager, NSDate, NSString;

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate> {

	NSTimer* _automaticLocationUpdateTimer;
	NSTimer* _accuracyFallbackTimer;
	int _authorizationStatus;
	char _authorizationStatusSet;
	double _oldestAcceptedTime;
	double _lastLocationUpdateTime;
	double _nextPlannedUpdate;
	char _activelyTrackingLocation;
	char _locationTrackingIsReady;
	CLLocationManager* _locationManager;
	NSDate* _lastLocationTimeStamp;
	float _lastLocationAccuracy;
	id<CLLocationManagerDelegate> _delegate;
	SCD_Struct_We3 _lastLocationCoord;

}

@property (nonatomic,retain) CLLocationManager * locationManager;                 //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,copy) NSDate * lastLocationTimeStamp;                        //@synthesize lastLocationTimeStamp=_lastLocationTimeStamp - In the implementation block
@property (assign,nonatomic) float lastLocationAccuracy;                          //@synthesize lastLocationAccuracy=_lastLocationAccuracy - In the implementation block
@property (assign,nonatomic) SCD_Struct_We3 lastLocationCoord;                    //@synthesize lastLocationCoord=_lastLocationCoord - In the implementation block
@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char locationTrackingIsReady;                        //@synthesize locationTrackingIsReady=_locationTrackingIsReady - In the implementation block
@property (assign,nonatomic) char activelyTrackingLocation;                       //@synthesize activelyTrackingLocation=_activelyTrackingLocation - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                             //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWeatherLocationManager;
+(void)clearSharedLocationManager;
-(void)dealloc;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(id<CLLocationManagerDelegate>)delegate;
-(id)location;
-(int)authorizationStatus;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)_cleanupAccuracyFallbackTimer;
-(void)_cleanupLocationTimer;
-(void)_clearLastLocUpdateTime;
-(void)setLocationTrackingActive:(char)arg1 ;
-(void)_setAuthorizationStatus:(int)arg1 ;
-(void)setLocationTrackingReady:(char)arg1 activelyTracking:(char)arg2 watchKitExtension:(char)arg3 ;
-(void)updateLocation:(id)arg1 ;
-(void)_setUpLocationTimerWithInterval:(float)arg1 ;
-(int)forceLoadingAuthorizationStatus;
-(float)lastLocationAccuracy;
-(void)setLastLocationTimeStamp:(NSDate *)arg1 ;
-(void)setLastLocationAccuracy:(float)arg1 ;
-(NSDate *)lastLocationTimeStamp;
-(void)_updateLocation:(id)arg1 ;
-(void)setLastLocationCoord:(SCD_Struct_We3)arg1 ;
-(void)forceLocationUpdate;
-(void)askForLocationManagerAuthorization;
-(char)loadAndPrepareLocationTrackingState:(char)arg1 ;
-(void)rescheduleTimerWithFastInterval:(char)arg1 ;
-(void)clearLocalWeatherUpdateState;
-(char)localWeatherAuthorized;
-(void)adjustDefaultSelectionForWeatherLocationUpdate:(char)arg1 ;
-(char)isLocalStaleOrOutOfDate;
-(double)_nextPlannedUpdate;
-(double)_lastLocationUpdateTime;
-(SCD_Struct_We3)lastLocationCoord;
-(char)locationTrackingIsReady;
-(void)setLocationTrackingIsReady:(char)arg1 ;
-(char)activelyTrackingLocation;
-(void)setActivelyTrackingLocation:(char)arg1 ;
-(void)setAuthorizationStatus:(int)arg1 ;
@end

