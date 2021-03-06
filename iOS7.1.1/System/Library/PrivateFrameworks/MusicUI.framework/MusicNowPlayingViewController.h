/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <MusicUI/MusicNowPlayingPlaybackControlsViewDelegate.h>
#import <MusicUI/MPPlaybackControlsDelegate.h>
#import <MusicUI/MPURatingControlDelegate.h>
#import <MediaPlayer/MPTransportControlsTarget.h>
#import <MusicUI/RUStationActionsViewControllerDelegate.h>
#import <MediaPlayerUI/RUTrackActionsDelegate.h>
#import <RadioUI/RUTrackDownloadViewDelegate.h>
#import <StoreKit/SKStoreProductViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIModalItemDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIView, UIViewController, UINavigationItem, MPAVItem, MusicLyricsView, UINavigationBar, MusicNowPlayingPlaybackControlsView, SKStoreProductViewController, RUPurchaseAlbumView, MPURatingControl, UIActionSheet, UIPopoverController, RUStationActionsViewController, UITapGestureRecognizer, MusicNowPlayingTitlesView, RUTrackActionsModalItem, RUTrackActionsViewController, RUTrackDownloadView;

@interface MusicNowPlayingViewController : UIViewController <MusicNowPlayingPlaybackControlsViewDelegate, MPPlaybackControlsDelegate, MPURatingControlDelegate, MPTransportControlsTarget, RUStationActionsViewControllerDelegate, RUTrackActionsDelegate, RUTrackDownloadViewDelegate, SKStoreProductViewControllerDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, UIModalItemDelegate, UIPopoverControllerDelegate> {

	bool _canMarqueeText;
	UIView* _contentView;
	UIViewController* _contentViewController;
	UINavigationItem* _effectiveNavigationItem;
	bool _hasProperApplicationStateForWantingVideoLayer;
	bool _hasVisibilityForWantingVideoLayer;
	UIView* _infoButtonContainerView;
	bool _isDetailScrubbing;
	bool _isShowingRatings;
	MPAVItem* _item;
	MusicLyricsView* _lyricsView;
	UINavigationBar* _padFakeNavigationBar;
	MusicNowPlayingPlaybackControlsView* _playbackControlsView;
	UIViewController* _lastPresentedViewController;
	UINavigationItem* _previousNavigationItem;
	SKStoreProductViewController* _productViewController;
	RUPurchaseAlbumView* _purchaseAlbumView;
	MPURatingControl* _ratingControl;
	UIActionSheet* _repeatActionSheet;
	UIPopoverController* _stationActionsPopoverController;
	RUStationActionsViewController* _stationActionsViewController;
	UIView* _stationActionsPresentationView;
	bool _supportsCoverFlow;
	UITapGestureRecognizer* _tapGestureRecognizer;
	MusicNowPlayingTitlesView* _titlesView;
	RUTrackActionsModalItem* _trackActionsModalItem;
	UIPopoverController* _trackActionsPopoverController;
	RUTrackActionsViewController* _trackActionsViewController;
	RUTrackDownloadView* _trackDownloadView;
	bool _visuallyEngagedAds;
	bool _wantsVideoLayer;

}
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
-(void)crossedTimeMakerWithEvent:(id)arg1 ;
-(bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(unsigned long long)repeatTypeForPlaybackControls:(id)arg1 ;
-(void)controlsOverlayDetailSliderTrackingDidEnd:(id)arg1 ;
-(unsigned long long)shuffleTypeForPlaybackControls:(id)arg1 ;
-(bool)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2 ;
-(bool)playbackControlsDidTapGeniusButton:(id)arg1 ;
-(void)controlsOverlayDidClickPlaybackSpeedButton:(id)arg1 ;
-(bool)playbackControls:(id)arg1 changedRepeatType:(unsigned long long)arg2 ;
-(bool)playbackControls:(id)arg1 changedShuffleType:(unsigned long long)arg2 ;
-(void)controlsOverlayDetailSliderTrackingDidBegin:(id)arg1 ;
-(void)controlsOverlay:(id)arg1 detailSliderTrackingDidChangeScrubSpeed:(long long)arg2 ;
-(unsigned long long)controlsOverlay:(id)arg1 playbackSpeedForItem:(id)arg2 ;
-(void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void).cxx_destruct;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)modalItem:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)_tapAction:(id)arg1 ;
-(void)ratingDidChangeForRatingControl:(id)arg1 ;
-(bool)MPH_supportsCoverFlow;
-(void)_playbackContentsDidChangeNotification:(id)arg1 ;
-(void)_statusBarHeightChangedNotification:(id)arg1 ;
-(void)stationActionsViewController:(id)arg1 willBeginAction:(long long)arg2 ;
-(void)stationActionsViewController:(id)arg1 didFinishAction:(long long)arg2 withObject:(id)arg3 error:(id)arg4 ;
-(void)_itemAlbumStoreIDDidChangeNotification:(id)arg1 ;
-(void)_itemArtworkDidChangeNotification:(id)arg1 ;
-(void)_itemIsExplicitDidChangeNotification:(id)arg1 ;
-(void)_itemTitlesDidChangeNotification:(id)arg1 ;
-(void)_itemAlbumBuyButtonInfoDidChangeNotification:(id)arg1 ;
-(void)_removeAdViewNotification:(id)arg1 ;
-(void)_radioPurchaseAllowedDidChangeNotification:(id)arg1 ;
-(void)_cleanupForDeallocationContentView:(id)arg1 contentViewController:(id)arg2 ;
-(void)_popIfNecessary;
-(void)_updateMarqueeStatusAllowingCurrentMarqueeToFinish:(bool)arg1 ;
-(void)_updateWantsVideoLayer;
-(void)_layoutForOrientation:(long long)arg1 ;
-(void)_updateForCurrentItemAnimated:(bool)arg1 ;
-(void)_updateControlVisibilityForOrientation:(long long)arg1 animated:(bool)arg2 ;
-(bool)_displayingActionSheet;
-(void)_setShowingRatings:(bool)arg1 animated:(bool)arg2 ;
-(void)_startGeniusPlaylistFromCurrentItem;
-(void)_applyAttributesForItem:(id)arg1 toTrackActioningObject:(id)arg2 ;
-(void)_scaleAndSetModalItemArtworkImageToCurrentArtworkImage;
-(void)_infoButtonAction:(id)arg1 ;
-(void)_addStationFromItem:(id)arg1 usingArtist:(bool)arg2 ;
-(void)_prepareToAddStation;
-(void)_completeAdditionOfStation:(id)arg1 fromItem:(id)arg2 usingArtist:(bool)arg3 canShowAlert:(bool)arg4 ;
-(void)_handleTrackAction:(long long)arg1 withItem:(id)arg2 ;
-(bool)_itemSupportsRatings:(id)arg1 ;
-(void)_updateContentView:(id)arg1 forItem:(id)arg2 ;
-(CGSize)_contentViewSizeForItem:(id)arg1 orientation:(long long)arg2 ;
-(void)_flipsideAction:(id)arg1 ;
-(bool)_shouldShowTransitionFromItem:(id)arg1 toItem:(id)arg2 isForwards:(bool*)arg3 ;
-(id)_createContentViewForItem:(id)arg1 contentViewController:(id*)arg2 ;
-(void)_purchaseAlbumButtonAction:(id)arg1 ;
-(void)_setWantsVideoLayer:(bool)arg1 forItem:(id)arg2 ;
-(void)playbackControls:(id)arg1 didTapRadioNewStationFromItem:(id)arg2 usingArtist:(bool)arg3 ;
-(void)playbackControlsDidTapInfoButton:(id)arg1 ;
-(void)trackActioningObject:(id)arg1 didSelectAction:(long long)arg2 atIndex:(long long)arg3 ;
-(void)trackDownloadView:(id)arg1 stateDidChangeToState:(long long)arg2 ;
-(void)trackDownloadViewWillTransition:(id)arg1 ;
-(bool)music_supportsMiniPlayer;
-(void)_updateTitles;
-(void)_updateNavigationItemAnimated:(bool)arg1 ;
@end

