/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MTLibrary, NSArray, NSPredicate;

@interface MTLibraryQuery : NSObject {

	char _active;
	MTLibrary* _library;
	NSArray* _podcastResults;
	NSArray* _episodeResults;
	NSPredicate* _podcastPredicate;
	NSPredicate* _episodePredicate;
	NSArray* _podcastSortDescriptors;
	NSArray* _episodeSortDescriptors;
	/*^block*/id _action;

}

@property (nonatomic,retain) MTLibrary * library;                           //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NSArray * podcastResults;                      //@synthesize podcastResults=_podcastResults - In the implementation block
@property (nonatomic,retain) NSArray * episodeResults;                      //@synthesize episodeResults=_episodeResults - In the implementation block
@property (nonatomic,retain) NSPredicate * podcastPredicate;                //@synthesize podcastPredicate=_podcastPredicate - In the implementation block
@property (nonatomic,retain) NSPredicate * episodePredicate;                //@synthesize episodePredicate=_episodePredicate - In the implementation block
@property (nonatomic,retain) NSArray * podcastSortDescriptors;              //@synthesize podcastSortDescriptors=_podcastSortDescriptors - In the implementation block
@property (nonatomic,retain) NSArray * episodeSortDescriptors;              //@synthesize episodeSortDescriptors=_episodeSortDescriptors - In the implementation block
@property (nonatomic,copy) id action;                                       //@synthesize action=_action - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                   //@synthesize active=_active - In the implementation block
+(id)queryWithLibrary:(id)arg1 ;
-(NSArray *)podcastResults;
-(NSArray *)episodeResults;
-(void)setPodcastResults:(NSArray *)arg1 ;
-(void)setEpisodeResults:(NSArray *)arg1 ;
-(void)setPodcastPredicate:(NSPredicate *)arg1 ;
-(void)setEpisodePredicate:(NSPredicate *)arg1 ;
-(void)runQuery;
-(void)runQueryInContext:(id)arg1 ;
-(void)runQueryWithPodcastPredicate:(id)arg1 episodePredicate:(id)arg2 ;
-(NSPredicate *)podcastPredicate;
-(NSPredicate *)episodePredicate;
-(NSArray *)podcastSortDescriptors;
-(void)setPodcastSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)episodeSortDescriptors;
-(void)setEpisodeSortDescriptors:(NSArray *)arg1 ;
-(id)init;
-(char)isActive;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)setActive:(char)arg1 ;
-(MTLibrary *)library;
-(void)setLibrary:(MTLibrary *)arg1 ;
@end
