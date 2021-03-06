/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:06:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingController.h>

@class AVAudioSession, NSArray, NSString;

@interface _RCMPRoutingController : MPAVRoutingController {

	AVAudioSession* _audioSession;
	char _isCategoryActive;
	char _hasCategoryEverBeenActive;
	char _disableRouteChangeNotificationHandling;
	char _needsOutputRoutesFetch;
	NSArray* _cachedRoutes;
	NSString* _activeInputRouteName;
	NSString* _AVAudioSessionCategory;
	NSString* _AVSystemControllerCategory;

}

@property (nonatomic,readonly) char hasCategoryEverBeenActive; 
@property (nonatomic,readonly) char isRoutingToAirPlayMirrorDestination; 
@property (nonatomic,readonly) char isRoutingToPhoneCall; 
@property (nonatomic,readonly) NSString * activeInputRouteName;                                    //@synthesize activeInputRouteName=_activeInputRouteName - In the implementation block
@property (nonatomic,readonly) char isAudioSessionAppropriateForQueryingOutputRoutes; 
@property (nonatomic,readonly) char isAudioSessionAppropriateForQueryingInputRoutes; 
@property (nonatomic,readonly) char isTemporarilyIgnoringRouteChangeNotifications; 
@property (nonatomic,readonly) NSString * AVAudioSessionCategory;                                  //@synthesize AVAudioSessionCategory=_AVAudioSessionCategory - In the implementation block
@property (nonatomic,readonly) NSString * AVSystemControllerCategory;                              //@synthesize AVSystemControllerCategory=_AVSystemControllerCategory - In the implementation block
-(char)routeOtherThanHandsetAndSpeakerAvailable;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(NSString *)activeInputRouteName;
-(char)isRoutingToPhoneCall;
-(char)isRoutingToAirPlayMirrorDestination;
-(char)hasCategoryEverBeenActive;
-(char)isAudioSessionAppropriateForQueryingOutputRoutes;
-(char)isAudioSessionAppropriateForQueryingInputRoutes;
-(char)isTemporarilyIgnoringRouteChangeNotifications;
-(void)makeAudioSessionCategoryActive:(char)arg1 ;
-(void)_configureAudioCategory;
-(void)audioSessionInterruptionNotification:(id)arg1 ;
-(void)audioSessionRouteChangeNotification:(id)arg1 ;
-(void)routingToAirPlayMirroringDidChangeNotification:(id)arg1 ;
-(char)isCategoryConfiguredForVoiceMemos;
-(void)setIsCategoryActive:(char)arg1 ;
-(char)_determineIfAudioOutputCategoryIsCurrent;
-(NSString *)AVAudioSessionCategory;
-(NSString *)AVSystemControllerCategory;
@end

