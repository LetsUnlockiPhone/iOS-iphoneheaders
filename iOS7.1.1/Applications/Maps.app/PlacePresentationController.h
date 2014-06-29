/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/PlaceViewControllerDelegate.h>

@protocol PlacePresentationControllerDelegate;
@class PlaceViewController, UIViewController, UIPopoverController, SearchResult;

@interface PlacePresentationController : NSObject <PlaceViewControllerDelegate> {

	<PlacePresentationControllerDelegate>* _presentationDelegate;
	PlaceViewController* _placeViewController;
	UIViewController* _presentingViewController;
	UIPopoverController* _calloutPopoverController;
	SearchResult* _searchResult;

}

@property (assign,nonatomic,__weak) <PlacePresentationControllerDelegate> * presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,retain) PlaceViewController * placeViewController;                                        //@synthesize placeViewController=_placeViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                               //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIPopoverController * calloutPopoverController;                                   //@synthesize calloutPopoverController=_calloutPopoverController - In the implementation block
@property (nonatomic,copy) SearchResult * searchResult;                                                        //@synthesize searchResult=_searchResult - In the implementation block
-(void)setSearchResult:(id)arg1 ;
-(id)placeViewController;
-(id)calloutPopoverController;
-(void)updatePlaceWithSearchResult:(id)arg1 ;
-(void)setCalloutPopoverController:(id)arg1 ;
-(void)presentPlaceWithSearchResult:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setupPlaceViewController:(id)arg1 ;
-(id)_placeViewControllerWithSearchResult:(id)arg1 ;
-(void)setPlaceViewController:(id)arg1 ;
-(void)placeViewControllerAnimationFinished:(id)arg1 ;
-(void)placeViewController:(id)arg1 didSelectDirectionsToAddressWithIdentifier:(int)arg2 ;
-(void)placeViewController:(id)arg1 didSelectDirectionsFromAddressWithIdentifier:(int)arg2 ;
-(void)placeViewController:(id)arg1 didSelectTransitDirectionsToAddressWithIdentifier:(int)arg2 ;
-(void)placeViewController:(id)arg1 didSelectAddToBookmarksWithAddressIdentifier:(int)arg2 title:(id)arg3 ;
-(void)placeViewController:(id)arg1 didSelectActivityOfType:(id)arg2 completed:(BOOL)arg3 ;
-(void)placeViewControllerDidSelectRemovePin:(id)arg1 ;
-(void)placeViewControllerDidSelectReportAProblem:(id)arg1 ;
-(void)placeViewController:(id)arg1 didSelectHomePage:(id)arg2 ;
-(void)placeViewController:(id)arg1 didSelectPhoneNumber:(id)arg2 ;
-(void)placeViewControllerDidSelectDisplayedAddress:(id)arg1 ;
-(void)placeViewController:(id)arg1 didBecomeContact:(id)arg2 ;
-(void)placeViewControllerDidDismiss:(id)arg1 ;
-(void)placeViewControllerDidSelectInfo:(id)arg1 ;
-(void)placeViewControllerDidSelectPhotos:(id)arg1 ;
-(void)placeViewControllerDidSelectReviews:(id)arg1 ;
-(void)placeViewControllerDidLaunchYelp:(id)arg1 ;
-(void)dismissPresentedPlaceAnimated:(BOOL)arg1 ;
-(id)presentationDelegate;
-(void)setPresentationDelegate:(id)arg1 ;
-(void)dealloc;
-(id)presentingViewController;
-(void)setPresentingViewController:(id)arg1 ;
-(void).cxx_destruct;
-(id)searchResult;
@end
