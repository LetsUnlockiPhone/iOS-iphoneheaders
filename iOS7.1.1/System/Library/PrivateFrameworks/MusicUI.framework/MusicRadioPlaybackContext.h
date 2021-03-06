/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicPlaybackContext.h>

@class MPAVItem, RadioStation, NSArray;

@interface MusicRadioPlaybackContext : MusicPlaybackContext {

	MPAVItem* _prefixItem;
	RadioStation* _station;
	NSArray* _tracks;

}

@property (nonatomic,retain) MPAVItem * prefixItem;                 //@synthesize prefixItem=_prefixItem - In the implementation block
@property (nonatomic,readonly) RadioStation * station;              //@synthesize station=_station - In the implementation block
@property (nonatomic,copy) NSArray * tracks;                        //@synthesize tracks=_tracks - In the implementation block
+(Class)queueFeederClass;
-(id)station;
-(id)prefixItem;
-(id)initWithStation:(id)arg1 ;
-(void)setTracks:(id)arg1 ;
-(void).cxx_destruct;
-(void)setPrefixItem:(id)arg1 ;
-(bool)hasStreamingTrack;
-(id)tracks;
@end

