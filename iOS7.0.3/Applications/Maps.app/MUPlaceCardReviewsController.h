/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/InfoCardCheckInWriteReviewCellDelegate.h>
#import <Maps/PlaceViewControllerDataSource.h>

@protocol MUPlaceCardReviewsControllerDelegate;
@class SearchResult, GEORating, YelpDeal, ABMonogrammer, UITableView;

@interface MUPlaceCardReviewsController : NSObject <InfoCardCheckInWriteReviewCellDelegate, PlaceViewControllerDataSource> {

	BOOL _showAttributionButtons;
	BOOL _showCheckInAndWriteReviewButtons;
	BOOL _showMoreReviewsButton;
	SearchResult* _searchResult;
	GEORating* _rating;
	YelpDeal* _deal;
	<MUPlaceCardReviewsControllerDelegate>* _reviewsControllerDelegate;
	ABMonogrammer* _monogrammer;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;                                                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SearchResult * searchResult;                                                     //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) <MUPlaceCardReviewsControllerDelegate> * reviewsControllerDelegate;              //@synthesize reviewsControllerDelegate=_reviewsControllerDelegate - In the implementation block
@property (nonatomic,retain) GEORating * rating;                                                              //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) YelpDeal * deal;                                                                 //@synthesize deal=_deal - In the implementation block
@property (assign,nonatomic) BOOL showAttributionButtons;                                                     //@synthesize showAttributionButtons=_showAttributionButtons - In the implementation block
@property (assign,nonatomic) BOOL showCheckInAndWriteReviewButtons;                                           //@synthesize showCheckInAndWriteReviewButtons=_showCheckInAndWriteReviewButtons - In the implementation block
@property (assign,nonatomic) BOOL showMoreReviewsButton;                                                      //@synthesize showMoreReviewsButton=_showMoreReviewsButton - In the implementation block
@property (nonatomic,retain) ABMonogrammer * monogrammer;                                                     //@synthesize monogrammer=_monogrammer - In the implementation block
-(void)setSearchResult:(id)arg1 ;
-(void)setShowAttributionButtons:(BOOL)arg1 ;
-(BOOL)showAttributionButtons;
-(void)checkInWriteReviewCellDidSelectCheckIn:(id)arg1 ;
-(void)checkInWriteReviewCellDidSelectWriteReview:(id)arg1 ;
-(void)setMonogrammer:(id)arg1 ;
-(id)deal;
-(void)setDeal:(id)arg1 ;
-(void)setShowCheckInAndWriteReviewButtons:(BOOL)arg1 ;
-(void)setShowMoreReviewsButton:(BOOL)arg1 ;
-(id)reviewsControllerDelegate;
-(BOOL)showCheckInAndWriteReviewButtons;
-(BOOL)showMoreReviewsButton;
-(id)monogrammer;
-(void)_showReviewWithInfo:(id)arg1 ;
-(void)_viewAllReviews;
-(void)_showDealWithInfo:(id)arg1 ;
-(void)setReviewsControllerDelegate:(id)arg1 ;
-(void)setRating:(id)arg1 ;
-(id)rating;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(void)setTableView:(id)arg1 ;
-(float)marginForTableView:(id)arg1 ;
-(id)tableView;
-(id)searchResult;
@end

