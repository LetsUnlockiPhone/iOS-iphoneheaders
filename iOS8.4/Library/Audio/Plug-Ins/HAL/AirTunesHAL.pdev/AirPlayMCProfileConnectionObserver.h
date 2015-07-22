/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Library/Audio/Plug-Ins/HAL/AirTunesHAL.pdev/AirTunesHAL
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTunesHAL/AirTunesHAL-Structs.h>
#import <AirTunesHAL/MCProfileConnectionObserver.h>

@class NSString;

@interface AirPlayMCProfileConnectionObserver : NSObject <MCProfileConnectionObserver> {

	AirPlayClient* _client;
	BOOL _isStarkVehicleUIAllowedBySettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleCarPlayRestrictionChange;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)initWithClient:(AirPlayClient*)arg1 ;
@end
