/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>

@protocol CKConversationSearcherDelegate;
@class NSMutableArray, UISearchDisplayController, UISearchBar, CKSpotlightQuery;

@interface CKConversationSearcher : NSObject <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate> {

	<CKConversationSearcherDelegate>* _delegate;
	NSMutableArray* _sortedSearchResults;
	UISearchDisplayController* _searchController;
	UISearchBar* _searchBar;
	CKSpotlightQuery* _currentQuery;
	BOOL _shouldDisplayNoResults;
	BOOL _active;
	BOOL _showingSearchResults;

}

@property (nonatomic,readonly) UISearchDisplayController * searchController; 
@property (getter=isActive,nonatomic,readonly) BOOL active;                                          //@synthesize active=_active - In the implementation block
@property (getter=isShowingSearchResults,nonatomic,readonly) BOOL showingSearchResults;              //@synthesize showingSearchResults=_showingSearchResults - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)isActive;
-(id)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)_cancel;
-(BOOL)isShowingSearchResults;
-(id)searchController;
-(id)initWithDelegate:(id)arg1 ;
@end

