/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/MapsChromeTopBarContent.h>

@protocol SearchBarDelegate;
@class UITextField, PassthruSearchBar, UIButton, UIImage, MainChromeViewController;

@interface SearchBar : UIView <MapsChromeTopBarContent> {

	<SearchBarDelegate>* _delegate;
	UITextField* _searchField;
	PassthruSearchBar* _searchBar;
	UIButton* _directionsButton;
	UIButton* _bookmarksButton;
	UIButton* _cancelButton;
	UIImage* _defaultClearButtonImage;
	UIImage* _defaultClearButtonPressedImage;
	int _suspensionCount;

}

@property (assign,nonatomic) <SearchBarDelegate> * delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * searchField;                                  //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,readonly) PassthruSearchBar * searchBar;                              //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) MainChromeViewController * chromeViewController; 
+(float)defaultHeight;
-(void)_directionsButtonTapped:(id)arg1 ;
-(void)_bookmarksButtonTapped:(id)arg1 ;
-(void)presentDirectionsInPopover;
-(void)orientationWillChangeToInterfaceOrientation:(int)arg1 ;
-(void)orientationDidChangeFromInterfaceOrientation:(int)arg1 ;
-(void)beginSuspendingTapDelegateMessages;
-(void)endSuspendingTapDelegateMessages;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)tintColorDidChange;
-(id)searchBar;
-(id)searchField;
-(void)_cancelButtonTapped:(id)arg1 ;
@end
