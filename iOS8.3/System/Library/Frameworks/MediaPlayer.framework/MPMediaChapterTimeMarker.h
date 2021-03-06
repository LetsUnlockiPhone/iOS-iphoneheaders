/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:57:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPTimeMarker.h>

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker {

	unsigned _chapterIndex;
	NSArray* _chapters;
	char _hasArtworkAtPlaybackTime;

}

@property (assign,nonatomic) unsigned chapterIndex;                      //@synthesize chapterIndex=_chapterIndex - In the implementation block
@property (nonatomic,retain) NSArray * chapters;                         //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) char hasArtworkAtPlaybackTime;              //@synthesize hasArtworkAtPlaybackTime=_hasArtworkAtPlaybackTime - In the implementation block
-(char)hasArtworkAtPlaybackTime;
-(unsigned)chapterIndex;
-(void)setChapterIndex:(unsigned)arg1 ;
-(void)setHasArtworkAtPlaybackTime:(char)arg1 ;
-(NSArray *)chapters;
-(void)setChapters:(NSArray *)arg1 ;
@end

