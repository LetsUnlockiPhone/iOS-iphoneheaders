/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol YTFavoritesControllerDelegate;
@class NSMutableArray, YTAuthenticatedAccountPost, YTAccountFeedRequest, NSURL;

@interface YTFavoritesController : NSObject {

	NSMutableArray* _pendingFavoritesShortIDs;
	NSMutableArray* _mergedFavorites;
	YTAuthenticatedAccountPost* _accountPost;
	YTAccountFeedRequest* _accountFeedRequest;
	bool _usingAccountFavorites;
	bool _shouldOfferMergeOfLocalBookmarks;
	NSURL* _batchURL;
	NSMutableArray* _bookmarkVideos;
	NSMutableArray* _bookmarkShortIDs;
	<YTFavoritesControllerDelegate>* _mergeBookmarksDelegate;

}
+(id)sharedFavoritesController;
-(void)dealloc;
-(bool)usingAccountFavorites;
-(id)bookmarkedShortIDs;
-(void)bookmarksSearchRequestInterrupted;
-(id)bookmarkedVideos;
-(void)searchRequestReturnedVideos:(id)arg1 ;
-(void)setBatchURL:(id)arg1 ;
-(void)YTAuthenticatedAccountPost:(id)arg1 didFinishWithType:(int)arg2 error:(id)arg3 ;
-(void)_processNextPendingFavoritesBatch;
-(void)saveBookmarksIfNeeded;
-(void)_saveBookmarks;
-(void)_loadBookmarks;
-(void)setLocalBookmarksMergeOffered:(bool)arg1 ;
-(void)_bookmarksDidChangeNotifyObservers:(bool)arg1 ;
-(void)addLocalBookmarkForVideo:(id)arg1 ;
-(void)setUsingAccountFavorites:(bool)arg1 ;
-(bool)shouldOfferMergeOfLocalBookmarks;
-(void)mergeLocalBookmarksToAccountFavoritesWithDelegate:(id)arg1 ;
-(void)addFavoriteForVideo:(id)arg1 ;
-(void)removeFavoriteForVideo:(id)arg1 ;
-(id)batchURL;
-(void)accountFeedRequest:(id)arg1 receivedVideos:(id)arg2 ;
-(void)accountFeedRequest:(id)arg1 didFailWithError:(id)arg2 ;
@end

