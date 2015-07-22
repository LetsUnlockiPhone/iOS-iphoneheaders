/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, MTPodcastPlaylistSettings, NSOrderedSet;

@interface MTPlaylist : NSManagedObject

@property (assign,nonatomic) int containerOrder; 
@property (assign,nonatomic) long long downloadedCount; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) double generatedDate; 
@property (assign,nonatomic) char hidden; 
@property (assign,nonatomic) long long mediaLibraryId; 
@property (assign,nonatomic) long long parentMediaLibraryId; 
@property (nonatomic,retain) NSString * playerCurrentEpisodeUuid; 
@property (assign,nonatomic) long long sortOrder; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) long long unplayedCount; 
@property (assign,nonatomic) double updatedDate; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * addedEpisodes; 
@property (nonatomic,retain) MTPodcastPlaylistSettings * defaultSettings; 
@property (nonatomic,retain) NSSet * deletedEpisodes; 
@property (nonatomic,retain) NSOrderedSet * episodes; 
@property (nonatomic,retain) NSOrderedSet * podcasts; 
@property (nonatomic,retain) NSOrderedSet * settings; 
+(id)insertNewPlaylistInManagedObjectContext:(id)arg1 ;
+(id)predicateForForFlag:(int)arg1 isTrue:(char)arg2 ;
+(id)topLevelPlaylistsPredicate;
+(void)fixPlaylistSortOrderInCtx:(id)arg1 ;
+(id)insertNewPlaylistInManagedObjectContext:(id)arg1 uuid:(id)arg2 defaultSettings:(id)arg3 ;
+(id)stringForContainerOrder:(int)arg1 short:(char)arg2 ;
+(id)containerOrderOptionArray:(char)arg1 ;
+(id)containerOrderOptionValues;
+(int)getITunesPlaylistsCount;
+(id)sortDescriptors;
-(char)updateUnplayedCount;
-(void)recalculateEpisodeCounts;
-(void)setEpisodes:(NSOrderedSet *)arg1 ;
-(void)setHasBeenSynced:(char)arg1 ;
-(char)hasBeenSynced;
-(void)setIsItunesPlaylist:(char)arg1 ;
-(void)setIsItunesSmartPlaylist:(char)arg1 ;
-(void)setIsFolder:(char)arg1 ;
-(char)includesAllPodcasts;
-(NSOrderedSet *)podcasts;
-(void)setPodcasts:(NSOrderedSet *)arg1 ;
-(void)setIncludesAllPodcasts:(char)arg1 ;
-(char)isItunesPlaylist;
-(id)nextEpisode;
-(void)setUngroupedList:(char)arg1 ;
-(void)removeEpisode:(id)arg1 inBulkTransaction:(char)arg2 ;
-(char)isItunesSmartPlaylist;
-(char)isUngroupedList;
-(void)removePodcast:(id)arg1 ;
-(void)removePodcastEpisodes:(id)arg1 ;
-(void)removeEpisodes:(id)arg1 ;
-(void)removeEpisode:(id)arg1 ;
-(id)imageWithSize:(CGSize)arg1 forEpisode:(id)arg2 ;
-(int)getFolderSubPlaylistsCount;
-(char)isEditable;
-(void)setIsBuiltIn:(char)arg1 ;
-(char)isBuiltIn;
-(void)setNeedsUpdate:(char)arg1 ;
-(double)totalDuration;
-(void)forceUpdate;
-(char)isAutomatic;
-(void)setAutomatic:(char)arg1 ;
-(char)isFolder;
-(char)needsUpdate;
@end
