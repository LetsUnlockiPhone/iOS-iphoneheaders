/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:02:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <iap2d/iap2d-Structs.h>
@class NSObject, iAP2Connection, NSMutableDictionary, NSString, NSDate, NSDictionary, NSData;

@interface iAP2NowPlaying : NSObject {

	BOOL _enableNowPlayingInfoUpdate;
	NSObject*<OS_dispatch_queue> _nowPlayingInfoUpdateQ;
	iAP2Connection* _connection;
	NSMutableDictionary* _nowPlayingInfo;
	NSMutableDictionary* _oldNowPlayingInfoSent;
	NSString* _nowPlayingAppIdentifier;
	NSString* _nowPlayingAppName;
	NSString* _nowPlayingAppBundleID;
	unsigned char _nowPlayingAppChanged;
	unsigned char _nowPlayingAppIsIPod;
	CFArrayRef _currentSupportedCommands;
	unsigned char _nowPlayingAppIsIPodRadio;
	unsigned char _nowPlayingAppIsIPodIsValid;
	unsigned char _nowPlayingAppIsPlaying;
	NSDate* _nowPlayingAppIsPlayingTimestamp;
	NSDictionary* _nowPlayingInfoInterestDict;
	iAP2FileTransfer_st* _nowPlayingInfoArtworkBuff;
	NSObject*<OS_dispatch_queue> _nowPlayingInfoArtworkBuffQ;
	iAP2FileTransfer_st* _nowPlayingInfoPBQueueListBuff;
	NSObject*<OS_dispatch_queue> _nowPlayingInfoPBQueueListQ;
	NSData* _nowPlayingInfoPBQueueListData;
	unsigned _nowPlayingInfoPBQueueListNeedUpdate;
	unsigned _nowPlayingInfoPBQueueListUpdated;
	NSObject*<OS_dispatch_source> _nowPlayingInfoUpdateTimerSource;
	unsigned long long _lastItemUID;
	NSData* _lastItemArtworkObj;
	unsigned char _lastItemArtworkHash[20];
	unsigned char _lastItemArtworkHashValid;
	unsigned char _isInitialUpdate;
	int _nowPlayingUpdatesPendingSend;

}

@property (nonatomic,readonly) iAP2Connection * connection;                                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> nowPlayingInfoUpdateQ;              //@synthesize nowPlayingInfoUpdateQ=_nowPlayingInfoUpdateQ - In the implementation block
@property (copy,readonly) NSDictionary * nowPlayingInfo;                                        //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) iAP2FileTransfer_st* nowPlayingInfoArtworkBuff;                  //@synthesize nowPlayingInfoArtworkBuff=_nowPlayingInfoArtworkBuff - In the implementation block
@property (nonatomic,readonly) iAP2FileTransfer_st* nowPlayingInfoOBQueueListBuff;              //@synthesize nowPlayingInfoPBQueueListBuff=_nowPlayingInfoPBQueueListBuff - In the implementation block
+(unsigned char)_calcArtworkHash:(id)arg1 output:(unsigned char)arg2 ;
+(id)_MRRepeatToiAPRepeat:(id)arg1 ;
+(id)_MRShuffleToiAPShuffle:(id)arg1 ;
+(void)_printNowPlayingInfo:(id)arg1 forName:(id)arg2 withiAP2NowPlayingObject:(id)arg3 ;
-(void)shuttingDown;
-(void)startSendingNowPlayingInfomationUpdates:(id)arg1 ;
-(void)stopSendingNowPlayingInfomationUpdates;
-(void)setNowPlayingInfomation:(id)arg1 ;
-(char)_isCommandActive:(unsigned)arg1 ;
-(char)_isCommandSupported:(unsigned)arg1 ;
-(unsigned char)_isPBQueueListAvailable;
-(id)_getNowPlayingPBQueueList;
-(unsigned char)_isSetElapsedTimeAvailable;
-(unsigned char)_nowPlayingAppIsIPodApp;
-(unsigned char)_nowPlayingIsStreaming;
-(void)_updateNowPlayingU64Property:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4 ;
-(void)_updateNowPlayingStringProperty:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4 ;
-(void)_updateNowPlayingDoubleProperty:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4 ;
-(void)_updateNowPlayingU16Property:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4 ;
-(id)_handleNowPlayingArtworkForInfoType:(id)arg1 ;
-(void)_updateNowPlayingU8Property:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4 ;
-(void)_updateNowPlayingU32Property:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4 ;
-(id)_handleNowPlayingPBQueueList;
-(id)_setupNowPlayingInfomationMediaItemUpdateWithSentList:(id)arg1 ;
-(id)_setupNowPlayingInfomationPlaybackInfoUpdate:(BOOL*)arg1 withSentList:(id)arg2 ;
-(void)_startNowPlayingArtworkTransfer;
-(void)_startNowPlayingPBQueueTransfer;
-(void)decrementNowPlayingUpdatesPendingSend;
-(void)sendNowPlayingInfomationUpdate;
-(void)_sendNowPlayingInfomationUpdateHelper;
-(void)_handleNowPlayingInfo:(CFDictionaryRef)arg1 ;
-(void)_supportedCommandsDidChangeNotification;
-(void)_handleNowPlayingAppIsPlayingDidChange:(unsigned char)arg1 ;
-(void)_handleNowPlayingAppChange;
-(void)_nowPlayingInfoChanged:(id)arg1 ;
-(void)_nowPlayingAppIsPlayingChanged:(id)arg1 ;
-(void)_playbackQueueDidChangeNotification:(id)arg1 ;
-(void)_supportedCommandsDidChange:(CFArrayRef)arg1 ;
-(void)_setElapsedTime:(unsigned)arg1 ;
-(void)_setTrackIndex:(unsigned)arg1 ;
-(MRMediaRemoteCommandInfoRef)_findCommandRefForCommand:(unsigned)arg1 ;
-(void)_updateNowPlayingDataProperty:(id)arg1 forType:(id)arg2 forParam:(id)arg3 forDict:(id)arg4 ;
-(unsigned char)_nowPlayingAppIsVideosApp;
-(void)_setNowPlayingApp:(id)arg1 ;
-(void)handleArtworkDataSent:(iAP2FileTransfer_st*)arg1 ;
-(void)handlePBQueueListDataSent:(iAP2FileTransfer_st*)arg1 ;
-(NSObject*<OS_dispatch_queue>)nowPlayingInfoUpdateQ;
-(iAP2FileTransfer_st*)nowPlayingInfoArtworkBuff;
-(iAP2FileTransfer_st*)nowPlayingInfoOBQueueListBuff;
-(NSDictionary *)nowPlayingInfo;
-(void)dealloc;
-(id)description;
-(void)_cleanup;
-(iAP2Connection *)connection;
-(id)initWithConnection:(id)arg1 ;
@end

