/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/wifid
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/CLLocationManagerDelegate.h>

@class CLLocationManager, NSThread, NSPort;

@interface WiFiManagerCoreLocationWrapper : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* locationManager;
	/*function pointer*/ void* callback;
	void* context;
	NSThread* workerThread;
	NSThread* masterThread;
	NSPort* nsPort;
	CLLocationManager* _locationManager;
	/*function pointer*/ void* _callback;
	void* _context;
	NSThread* _workerThread;
	NSThread* _masterThread;
	NSPort* _nsPort;

}

@property (retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (retain) NSThread * workerThread;                          //@synthesize workerThread=_workerThread - In the implementation block
@property (retain) NSThread * masterThread;                          //@synthesize masterThread=_masterThread - In the implementation block
@property (retain) NSPort * nsPort;                                  //@synthesize nsPort=_nsPort - In the implementation block
@property (assign) /*function pointer*/ void* callback;              //@synthesize callback=_callback - In the implementation block
@property (assign) void* context;                                    //@synthesize context=_context - In the implementation block
-(void)setMasterThread:(id)arg1 ;
-(id)masterThread;
-(void)workerThreadMainFunction;
-(void)setWorkerThread:(id)arg1 ;
-(id)workerThread;
-(void)startlocationManagerUpdates;
-(void)getlocationManagerCachedLocation;
-(void)stoplocationManagerUpdates;
-(void)setLocationManagerAccuracy:(id)arg1 ;
-(void)setLocationManagerDistance:(id)arg1 ;
-(void)prepareWorkerThreadShutdown;
-(void)setNsPort:(id)arg1 ;
-(id)nsPort;
-(void)relayCLLocationEvent:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateToLocations:(id)arg2 ;
-(/*function pointer*/ void*)callback;
-(void)setCallback:(/*function pointer*/ void*)arg1 ;
-(void)dealloc;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)locationManager;
-(void)setLocationManager:(id)arg1 ;
-(void)createLocationManager;
-(void)initWithCallback:(/*function pointer*/ void*)arg1 callbackContext:(void*)arg2 ;
@end
