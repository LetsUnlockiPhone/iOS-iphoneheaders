/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <storebookkeeperd/SBKUniversalPlaybackPositionMediaItem.h>

@class ML3Track;

@interface SBDPlaybackPositionML3TrackMediaItem : NSObject <SBKUniversalPlaybackPositionMediaItem> {

	ML3Track* _track;
	long long _persistentID;

}

@property (readonly) long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (readonly) ML3Track * track;                    //@synthesize track=_track - In the implementation block
-(id)track;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)description;
-(long long)persistentID;
-(id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2 ;
-(void).cxx_destruct;
@end

