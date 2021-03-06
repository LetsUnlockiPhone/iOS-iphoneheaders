/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <VoiceMemos/VoiceMemos-Structs.h>
@class AVQueue, NSMutableArray, NSTimer, NSObject, AVItem;

@interface RCAVPreviewController : NSObject {

	bool _resetVoiceMemoSettingsEnabledValue;
	bool _voiceMemoSettingEnabledNeedsReset;
	AVQueue* _avQueue;
	double _currentTimeTarget;
	NSMutableArray* _weakObservers;
	NSTimer* _updateTimer;
	NSObject<OS_dispatch_source>* _monitorUnderlyingAssetSource;
	bool _voiceMemoSettingsEnabled;
	bool _preparingToPlay;
	double _currentTimeDelegateUpdateRate;
	AVItem* _avItem;
	SCD_Struct_RC0 _playableTimeRange;

}

@property (assign,nonatomic) bool voiceMemoSettingsEnabled;                                //@synthesize voiceMemoSettingsEnabled=_voiceMemoSettingsEnabled - In the implementation block
@property (assign,nonatomic) double currentTimeDelegateUpdateRate;                         //@synthesize currentTimeDelegateUpdateRate=_currentTimeDelegateUpdateRate - In the implementation block
@property (setter=setAVItem:,nonatomic,retain) AVItem * avItem;                            //@synthesize avItem=_avItem - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC0 playableTimeRange;                             //@synthesize playableTimeRange=_playableTimeRange - In the implementation block
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) float rate; 
@property (getter=isPlaying,nonatomic,readonly) bool playing; 
@property (getter=isPreparingToPlay,nonatomic,readonly) bool preparingToPlay;              //@synthesize preparingToPlay=_preparingToPlay - In the implementation block
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(bool)isPlaying;
-(void)setAVItem:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void).cxx_destruct;
-(void)stop;
-(void)pause;
-(void)addObserver:(id)arg1 ;
-(id)avItem;
-(void)_updateTimerFired:(id)arg1 ;
-(float)rate;
-(void)_controllerConnectionInvalidatedNotification:(id)arg1 ;
-(void)_controllerPlaybackRateDidChangeNotification:(id)arg1 ;
-(void)_controllerPlaybackTimeDidJumpNotification:(id)arg1 ;
-(void)_itemPlaybackFailedNotification:(id)arg1 ;
-(void)_removeTimerForced:(bool)arg1 ;
-(void)_stopMonitoringUnderylingAssetPath;
-(void)_handleUnderlyingAssetDisappeared;
-(bool)_monitorUnderlyingAssetPath:(id)arg1 assetDisappearedBlock:(/*^block*/ id)arg2 ;
-(void)reloadItem;
-(void)setVoiceMemoSettingsEnabled:(bool)arg1 ;
-(void)_prepareQueueWithPlaybackTimeRange:(SCD_Struct_RC0)arg1 ;
-(void)playOrRestart;
-(id)_avControllerMakeActive;
-(SCD_Struct_RC0)_assetPlaybackTimeRange;
-(bool)voiceMemoSettingsEnabled;
-(void)_handleDidStopPlaybackWithError:(id)arg1 ;
-(void)_addTimerForced:(bool)arg1 ;
-(id)_avControllerIfActive;
-(void)_performWithObserversBlock:(/*^block*/ id)arg1 ;
-(void)_postDelegateUpdate;
-(void)setPlayableTimeRange:(SCD_Struct_RC0)arg1 ;
-(void)playWithTimeRange:(SCD_Struct_RC0)arg1 startTime:(double)arg2 ;
-(void)setPreparingToPlay:(bool)arg1 notifyObservers:(bool)arg2 ;
-(double)currentTimeDelegateUpdateRate;
-(void)setCurrentTimeDelegateUpdateRate:(double)arg1 ;
-(SCD_Struct_RC0)playableTimeRange;
-(bool)isPreparingToPlay;
@end

