/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:02:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/JaliscoArtworkDownload.h>

@class NSNumber;

@interface JaliscoItemArtworkDownload : JaliscoArtworkDownload {

	char _needsToSaveArtworkCacheID;
	NSNumber* _albumID;
	NSNumber* _albumArtistID;
	NSNumber* _composerID;

}

@property (nonatomic,retain) NSNumber * albumID;                          //@synthesize albumID=_albumID - In the implementation block
@property (nonatomic,retain) NSNumber * albumArtistID;                    //@synthesize albumArtistID=_albumArtistID - In the implementation block
@property (nonatomic,retain) NSNumber * composerID;                       //@synthesize composerID=_composerID - In the implementation block
@property (assign,nonatomic) char needsToSaveArtworkCacheID;              //@synthesize needsToSaveArtworkCacheID=_needsToSaveArtworkCacheID - In the implementation block
-(char)needsToSaveArtworkCacheID;
-(void)saveTrackArtworkCacheID;
-(void)saveCollectionRepresentativeIDs;
-(void)setAlbumArtistID:(NSNumber *)arg1 ;
-(void)setComposerID:(NSNumber *)arg1 ;
-(void)setNeedsToSaveArtworkCacheID:(char)arg1 ;
-(NSNumber *)albumArtistID;
-(NSNumber *)composerID;
-(void)setAlbumID:(NSNumber *)arg1 ;
-(NSNumber *)albumID;
@end
