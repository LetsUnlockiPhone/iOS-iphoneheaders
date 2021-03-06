/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <SpringBoard/SPSearchAgentDelegate.h>
#import <SpringBoard/SBSearchGestureObserver.h>
#import <UIKit/UISearchBarDelegate.h>
#import <SpringBoard/SBSearchResultsActionManagerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <SpringBoard/SBUIActiveOrientationObserver.h>
#import <SpringBoard/SBReachabilityObserver.h>
#import <SpringBoard/SBSearchHeaderDelegate.h>

@class UINavigationController, UIViewController, SBSearchFirstTimeViewController, UITableView, SBSearchHeader, SBSearchResultsBackdropView, SBSearchResultsActionManager, UIWindow, UILabel, UITapGestureRecognizer, UIPanGestureRecognizer, UIGestureRecognizer, NSString;

@interface SBSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPSearchAgentDelegate, SBSearchGestureObserver, UISearchBarDelegate, SBSearchResultsActionManagerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, SBUIActiveOrientationObserver, SBReachabilityObserver, SBSearchHeaderDelegate> {

	UINavigationController* _navigationController;
	UIViewController* _mainViewController;
	SBSearchFirstTimeViewController* _firstTimeViewController;
	UITableView* _tableView;
	SBSearchHeader* _searchHeader;
	SBSearchResultsBackdropView* _tableBackdrop;
	SBSearchResultsActionManager* _actionManager;
	UIWindow* _presentingWindow;
	int _presentingWindowOrientation;
	UILabel* _noResultsLabel;
	UITapGestureRecognizer* _tapRecognizer;
	UIPanGestureRecognizer* _panRecognizer;
	void* _addressBook;
	float _lastContentOffsetY;
	char _scrollDown;
	int _visibility;
	float _headerHeight;
	char _hasShownBackgroundSinceLastClear;
	int _firstTimeViewShowCount;
	char _canShowFirstTimeView;
	double _triggerTimestamp;
	CGPoint _preReachabilityTableViewOrigin;
	CGPoint _reachabilityTableViewOrigin;
	char _showingForReachability;
	UIGestureRecognizer* _cancelRecognizer;
	/*^block*/id _fadeOutCompletionBlock;

}

@property (getter=isFadingOut,nonatomic,readonly) char fadingOut; 
@property (getter=isVisible,nonatomic,readonly) char visible; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)handleReachabilityModeDeactivated;
-(id)_actionManager;
-(void)actionManager:(id)arg1 dismissAnimated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)actionManager:(id)arg1 dismissViewController:(id)arg2 completion:(/*^block*/id)arg3 animated:(char)arg4 ;
-(UIEdgeInsets)actionManagerDetailsViewEdgeInsets:(id)arg1 ;
-(void)actionManager:(id)arg1 presentViewController:(id)arg2 completion:(/*^block*/id)arg3 modally:(char)arg4 ;
-(void)searchGesture:(id)arg1 changedPercentComplete:(float)arg2 ;
-(void)_lockScreenUIWillLock:(id)arg1 ;
-(void)_performReachabilityTransactionForActivate:(char)arg1 immediately:(char)arg2 ;
-(void)handleCancelReachabilityGesture:(id)arg1 ;
-(void)_handlePanRecognizer:(id)arg1 ;
-(void)_handleTapRecognizer:(id)arg1 ;
-(void)_updateCellClipping:(id)arg1 ;
-(void)_updateTableContents;
-(UIEdgeInsets)searchBorderMarginsForSearchField:(char)arg1 cancelMargins:(UIEdgeInsets*)arg2 ;
-(void)_sendAbandonmentFeedback;
-(char)_hasNoQuery;
-(char)_hasResults;
-(char)_showFirstTimeView;
-(void)_setFirstTimeViewVisible:(char)arg1 ;
-(char)_hasNoResultsForQuery;
-(void)_sendFeedback:(id)arg1 ;
-(void)_updateHeaderHeightIfNeeded;
-(void)_fadeForLaunchWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleDismissGesture;
-(char)isFadingOut;
-(void)_deselectTableViewCell;
-(void)attributionButtonTapped:(id)arg1 ;
-(char)_showingKeyboard;
-(void)_updateClipping;
-(void)_rotatePresentingWindowIfNecessaryTo:(int)arg1 withDuration:(double)arg2 ;
-(void)dismissAnimated:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_animateForReachabilityActivatedWithHandler:(/*^block*/id)arg1 ;
-(void)_animateForReachabilityDeactivatedWithHandler:(/*^block*/id)arg1 ;
-(void)cancelButtonPressed;
-(void)searchGesture:(id)arg1 completedShowing:(char)arg2 ;
-(void)_setShowingKeyboard:(char)arg1 ;
-(void)_fadeOutAndHideKeyboardAnimated:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(char)isVisible;
-(void)dismiss;
-(void)_searchFieldEditingChanged;
-(void)_searchFieldReturnPressed;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)handleReachabilityModeActivated;
-(void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)searchAgentUpdatedResults:(id)arg1 ;
-(void)searchAgentClearedResults:(id)arg1 ;
@end

