/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:46:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MusicUI/MPURatingControlDelegate.h>

@class MPMediaItem, MPAVItem, UIView, MusicFlipsideAlbumDetailHeaderView, UISegmentedControl, NSString;

@interface MusicFlipsideTracksViewController : UIViewController <MPURatingControlDelegate> {

	MPMediaItem* _currentMediaItem;
	MPAVItem* _currentAVItem;
	UIView* _container;
	MusicFlipsideAlbumDetailHeaderView* _trackInfoView;
	UISegmentedControl* _segmentedControl;
	char _showingRating;
	char _hasPlaylist;

}

@property (assign,nonatomic) char hasPlaylist;                      //@synthesize hasPlaylist=_hasPlaylist - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)ratingDidChangeForRatingControl:(id)arg1 ;
-(char)hasPlaylist;
-(void)_performDone:(id)arg1 ;
-(void)_performRating:(id)arg1 ;
-(void)_updateMediaItem;
-(void)_setShowingRating:(char)arg1 ;
-(void)_selectedSegmentDidChange:(id)arg1 ;
-(void)setHasPlaylist:(char)arg1 ;
-(char)shouldShowActionCellConfiguration:(Class)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
@end

