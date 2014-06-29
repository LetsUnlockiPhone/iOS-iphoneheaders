/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWRunWorkoutProxy.h>

@class NSTimer, NSString, NSDictionary;

@interface SWRemoteRunWorkoutProxyClient : SWRunWorkoutProxy {

	NSTimer* _updateTimer;
	NSString* _goalType;
	NSString* _presetGoal;
	float _goal;
	NSString* _sensorSearchState;
	NSString* _workoutState;
	NSDictionary* _workoutData;
	bool _hasEverStarted;
	bool _hasPowerSong;
	NSString* _powerSongName;
	bool _shouldControlMusic;
	long long _musicSelection;
	NSString* _currentSongName;
	NSString* _currentAlbumName;
	NSString* _currentArtistName;

}
-(id)workoutData;
-(void)activateWorkout;
-(void)pauseWorkout;
-(void)playPowerSong;
-(bool)shouldControlMusic;
-(void)selectNextSong;
-(void)selectPreviousSong;
-(void)playOnDemandPrompt;
-(void)endWorkout;
-(id)goalType;
-(float)goal;
-(id)powerSongName;
-(void)prepareToActivateWorkout;
-(bool)hasPowerSong;
-(id)workoutState;
-(bool)hasEverStarted;
-(id)presetGoal;
-(void)goToNowPlaying;
-(void)pauseMusic;
-(void)playMusic;
-(void)_sensorSearchStateChanged:(id)arg1 ;
-(void)_workoutStateChanged:(id)arg1 ;
-(void)_nowPlayingChanged:(id)arg1 ;
-(long long)musicSelection;
-(id)currentSongName;
-(id)currentAlbumName;
-(id)currentArtistName;
-(id)sensorSearchState;
-(void)_handlePropertyUpdateNotification:(id)arg1 ;
-(void)_checkinWithServer;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)dealloc;
-(id)init;
@end
