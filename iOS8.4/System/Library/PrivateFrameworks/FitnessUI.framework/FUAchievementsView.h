/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FUAchievementsViewDelegate;
@class UILabel, UIPageControl, UIScrollView, NSMutableArray, NSArray, NSString;

@interface FUAchievementsView : UIView <UIScrollViewDelegate> {

	UILabel* _achievementTitleLabel;
	UILabel* _achievementDetailLabel;
	UIPageControl* _pageControl;
	UIScrollView* _scrollView;
	NSMutableArray* _achievementViews;
	BOOL _needsSubviewRebuild;
	BOOL _pagingEnabled;
	BOOL _showsAchievementTitles;
	NSArray* _achievements;
	long long _sizeClass;
	id<FUAchievementsViewDelegate> _delegate;
	UIEdgeInsets _scrollViewContentInset;

}

@property (nonatomic,copy) NSArray * achievements;                                        //@synthesize achievements=_achievements - In the implementation block
@property (assign,nonatomic) BOOL pagingEnabled;                                          //@synthesize pagingEnabled=_pagingEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsAchievementTitles;                                 //@synthesize showsAchievementTitles=_showsAchievementTitles - In the implementation block
@property (assign,nonatomic) long long sizeClass;                                         //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollViewContentInset;                         //@synthesize scrollViewContentInset=_scrollViewContentInset - In the implementation block
@property (assign,nonatomic,__weak) id<FUAchievementsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FUAchievementsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<FUAchievementsViewDelegate>)delegate;
-(void)setPagingEnabled:(BOOL)arg1 ;
-(void)_scrollViewTapped:(id)arg1 ;
-(void)_setNeedsSubviewRebuild;
-(id)viewForAchievement:(id)arg1 ;
-(void)_updateCurrentPageDetails;
-(void)_showAchievementTitleLabel;
-(void)_hideAchievementTitleLabel;
-(void)_showPageControl;
-(void)_hidePageControl;
-(void)_rebuildAchievementViews;
-(id)_detailLabelColor;
-(id)_detailLabelFont;
-(long long)sizeClass;
-(void)setSizeClass:(long long)arg1 ;
-(id)_achievementAtScrollViewPoint:(CGPoint)arg1 ;
-(void)_getPageWidth:(double*)arg1 nearestPageIndex:(unsigned long long*)arg2 forScrollViewContentOffsetX:(double)arg3 ;
-(void)_rebuildSubviewsIfNeeded;
-(void)setShowsAchievementTitles:(BOOL)arg1 ;
-(void)setScrollViewContentInset:(UIEdgeInsets)arg1 ;
-(void)scrollToAchievement:(id)arg1 ;
-(id)achievementAtPoint:(CGPoint)arg1 ;
-(BOOL)pagingEnabled;
-(BOOL)showsAchievementTitles;
-(UIEdgeInsets)scrollViewContentInset;
-(NSArray *)achievements;
-(void)setAchievements:(NSArray *)arg1 ;
-(id)_titleLabelFont;
@end

