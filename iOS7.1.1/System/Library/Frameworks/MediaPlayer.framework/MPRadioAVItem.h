/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAVItem.h>

@class NSArray, RadioTrack, RadioStation, NSString;

@interface MPRadioAVItem : MPAVItem {

	NSArray* _buyOffers;
	RadioTrack* _radioTrack;
	bool _isBanned;
	bool _isLiked;
	bool _isInWishList;
	bool _heartbeatInvalid;
	RadioStation* _station;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationName;

}

@property (assign,nonatomic) bool isBanned;                                                //@synthesize isBanned=_isBanned - In the implementation block
@property (assign,nonatomic) bool isLiked;                                                 //@synthesize isLiked=_isLiked - In the implementation block
@property (assign,nonatomic) bool isInWishList;                                            //@synthesize isInWishList=_isInWishList - In the implementation block
@property (nonatomic,retain) RadioStation * station;                                       //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSString * stationHash;                                     //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) long long stationID;                                        //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationName;                                     //@synthesize stationName=_stationName - In the implementation block
@property (assign,getter=isHeartbeatInvalid,nonatomic) bool heartbeatInvalid;              //@synthesize heartbeatInvalid=_heartbeatInvalid - In the implementation block
-(id)imageCacheRequestWithSize:(CGSize)arg1 time:(double)arg2 usePlaceholderAsFallback:(bool)arg3 ;
-(id)chapterTimeMarkers;
-(id)artworkTimeMarkers;
-(id)urlTimeMarkers;
-(unsigned long long)countForQueueFeeder;
-(id)artist;
-(bool)isValidPlayerSubstituteForItem:(id)arg1 ;
-(bool)isExplicitTrack;
-(bool)isStreamable;
-(id)mainTitle;
-(id)titlesForTime:(double)arg1 ;
-(id)chapterTimeMarkerForTime:(double)arg1 ;
-(id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2 ;
-(id)localizedPositionInPlaylistString;
-(void)reevaluateType;
-(long long)albumStoreID;
-(id)buyOffers;
-(id)copyrightText;
-(long long)storeID;
-(id)mediaItem;
-(id)station;
-(id)initWithRadioTrack:(id)arg1 ;
-(void)_applyLoudnessInfoForVolumeNormalization;
-(id)radioTrack;
-(bool)isRadioItem;
-(id)stationHash;
-(long long)stationID;
-(bool)isBanned;
-(void)setIsBanned:(bool)arg1 ;
-(bool)isLiked;
-(void)setIsLiked:(bool)arg1 ;
-(void)_radioRequestDidFinishNotification:(id)arg1 ;
-(void)_internalIsInWishlistDidChangeNotification:(id)arg1 ;
-(void)_internalIsLikedDidChangeNotification:(id)arg1 ;
-(void)_internalIsBannedDidChangeNotification:(id)arg1 ;
-(bool)isInWishList;
-(void)addDerivedStationForArtist:(bool)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)setIsInWishList:(bool)arg1 ;
-(void)setStation:(id)arg1 ;
-(id)stationName;
-(bool)isHeartbeatInvalid;
-(void)setHeartbeatInvalid:(bool)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(id)title;
-(void).cxx_destruct;
-(unsigned long long)persistentID;
-(id)album;
@end

