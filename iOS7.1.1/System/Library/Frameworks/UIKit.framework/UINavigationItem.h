/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString, UIBarButtonItem, UINavigationBar, UIView, NSArray, UIImageView, NSMutableDictionary;

@interface UINavigationItem : NSObject <NSCoding> {

	NSString* _title;
	NSString* _backButtonTitle;
	UIBarButtonItem* _backBarButtonItem;
	NSString* _prompt;
	long long _tag;
	id _context;
	UINavigationBar* _navigationBar;
	UIView* _defaultTitleView;
	UIView* _titleView;
	UIView* _backButtonView;
	NSArray* _leftBarButtonItems;
	NSArray* _rightBarButtonItems;
	NSArray* _customLeftViews;
	NSArray* _customRightViews;
	bool _hidesBackButton;
	bool _leftItemsSupplementBackButton;
	UIImageView* _frozenTitleView;
	bool _barStyleIndependent;
	double _fontScaleAdjustment;
	NSString* _pendingTitle;
	NSArray* _abbreviatedBackButtonTitles;
	long long _independentBarStyle;
	NSArray* _leftItemSpaceList;
	NSArray* _rightItemSpaceList;
	unsigned long long _leftFlexibleSpaceCount;
	unsigned long long _rightFlexibleSpaceCount;
	NSMutableDictionary* _backgroundImages;
	double __titleViewWidthForAnimations;
	double __idealCustomTitleWidth;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem; 
@property (nonatomic,retain) UIView * titleView;                                                                                   //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,copy) NSString * prompt; 
@property (assign,nonatomic) bool hidesBackButton; 
@property (nonatomic,copy) NSArray * leftBarButtonItems; 
@property (nonatomic,copy) NSArray * rightBarButtonItems; 
@property (assign,nonatomic) bool leftItemsSupplementBackButton; 
@property (nonatomic,retain) UIBarButtonItem * leftBarButtonItem; 
@property (nonatomic,retain) UIBarButtonItem * rightBarButtonItem; 
@property (assign,setter=_setBarStyleIndependent:,getter=_isBarStyleIndependent,nonatomic) bool _barStyleIndependent;              //@synthesize barStyleIndependent=_barStyleIndependent - In the implementation block
@property (assign,setter=_setIndependentBarStyle:,nonatomic) long long _independentBarStyle;                                       //@synthesize independentBarStyle=_independentBarStyle - In the implementation block
@property (assign,setter=_setLeftFlexibleSpaceCount:,nonatomic) unsigned long long _leftFlexibleSpaceCount;                        //@synthesize leftFlexibleSpaceCount=_leftFlexibleSpaceCount - In the implementation block
@property (assign,setter=_setRightFlexibleSpaceCount:,nonatomic) unsigned long long _rightFlexibleSpaceCount;                      //@synthesize rightFlexibleSpaceCount=_rightFlexibleSpaceCount - In the implementation block
@property (setter=_setLeftItemSpaceList:,nonatomic,copy) NSArray * _leftItemSpaceList;                                             //@synthesize leftItemSpaceList=_leftItemSpaceList - In the implementation block
@property (setter=_setRightItemSpaceList:,nonatomic,copy) NSArray * _rightItemSpaceList;                                           //@synthesize rightItemSpaceList=_rightItemSpaceList - In the implementation block
@property (assign,nonatomic) double _titleViewWidthForAnimations;                                                                  //@synthesize _titleViewWidthForAnimations=__titleViewWidthForAnimations - In the implementation block
@property (assign,setter=_setIdealCustomTitleWidth:,nonatomic) double _idealCustomTitleWidth;                                      //@synthesize _idealCustomTitleWidth=__idealCustomTitleWidth - In the implementation block
@property (setter=_setPendingTitle:,nonatomic,copy) NSString * _pendingTitle;                                                      //@synthesize pendingTitle=_pendingTitle - In the implementation block
@property (assign,setter=_setFontScaleAdjustment:,nonatomic) double _fontScaleAdjustment;                                          //@synthesize fontScaleAdjustment=_fontScaleAdjustment - In the implementation block
@property (setter=_setAbbreviatedBackButtonTitles:,nonatomic,copy) NSArray * _abbreviatedBackButtonTitles;                         //@synthesize abbreviatedBackButtonTitles=_abbreviatedBackButtonTitles - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _backgroundImages;                                                            //@synthesize backgroundImages=_backgroundImages - In the implementation block
+(id)defaultFont;
-(void)resetAllValues;
-(void)mergeValuesFromItem:(id)arg1 ;
-(void)fadeOutTitleView;
-(void)fadeInTitleView;
-(void)setTitleView:(id)arg1 animated:(bool)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)navigationBar;
-(bool)hidesBackButton;
-(id)leftBarButtonItems;
-(bool)leftItemsSupplementBackButton;
-(id)_automationID;
-(void)setTag:(long long)arg1 ;
-(id)context;
-(long long)tag;
-(void)_setFontScaleAdjustment:(double)arg1 ;
-(id)existingBackButtonView;
-(id)initWithTitle:(id)arg1 ;
-(void)_removeTitleAndButtonViews;
-(void)_setCustomLeftViews:(id)arg1 ;
-(void)_setCustomRightViews:(id)arg1 ;
-(void)_setLeftBarButtonItems:(id)arg1 ;
-(void)_setRightBarButtonItems:(id)arg1 ;
-(void)_setLeftItemSpaceList:(id)arg1 ;
-(void)_setRightItemSpaceList:(id)arg1 ;
-(id)_defaultTitleView;
-(void)_cleanupFrozenTitleView;
-(void)_setPendingTitle:(id)arg1 ;
-(void)_freezeCurrentTitleView;
-(void)_addDefaultTitleViewToNavigationBarIfNecessary;
-(void)_setTitleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_setTitle:(id)arg1 animated:(bool)arg2 matchBarButtonItemAnimationDuration:(bool)arg3 ;
-(id)backButtonView;
-(void)_setBackButtonTitle:(id)arg1 lineBreakMode:(long long)arg2 ;
-(void)_removeBackButtonView;
-(id)title;
-(id)backButtonTitle;
-(id)rightBarButtonItems;
-(id)titleView;
-(void)_setIdealCustomTitleWidth:(double)arg1 ;
-(id)_customLeftViews;
-(id)_customRightViews;
-(void)setHidesBackButton:(bool)arg1 animated:(bool)arg2 ;
-(void)_setLeftBarButtonItem:(id)arg1 ;
-(void)_setRightBarButtonItem:(id)arg1 ;
-(void)_setCustomRightView:(id)arg1 ;
-(void)_setCustomLeftView:(id)arg1 ;
-(void)updateNavigationBarButtonsAnimated:(bool)arg1 ;
-(id)_leftBarButtonItem;
-(void)setLeftBarButtonItem:(id)arg1 animated:(bool)arg2 ;
-(void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(bool)arg3 ;
-(id)_rightBarButtonItem;
-(void)setRightBarButtonItem:(id)arg1 animated:(bool)arg2 ;
-(bool)_accumulateViewsFromItems:(id)arg1 isLeft:(bool)arg2 refreshViews:(bool)arg3 ;
-(id)_customLeftViewsCreating:(bool)arg1 ;
-(id)_customLeftViewCreating:(bool)arg1 ;
-(id)_customRightViewCreating:(bool)arg1 ;
-(id)_customRightViewsCreating:(bool)arg1 ;
-(void)_setCustomLeftRightView:(id)arg1 left:(bool)arg2 ;
-(id)_customLeftView;
-(void)setCustomLeftView:(id)arg1 animated:(bool)arg2 ;
-(id)_customRightView;
-(void)setCustomRightView:(id)arg1 animated:(bool)arg2 ;
-(void)setLeftBarButtonItems:(id)arg1 animated:(bool)arg2 ;
-(void)setRightBarButtonItems:(id)arg1 animated:(bool)arg2 ;
-(void)_setLeftFlexibleSpaceCount:(unsigned long long)arg1 ;
-(void)_setRightFlexibleSpaceCount:(unsigned long long)arg1 ;
-(void)setTitleView:(id)arg1 ;
-(void)setLeftBarButtonItem:(id)arg1 ;
-(id)leftBarButtonItem;
-(void)setRightBarButtonItem:(id)arg1 ;
-(id)rightBarButtonItem;
-(id)_firstNonSpaceItemInList:(id)arg1 ;
-(void)_setBarStyleIndependent:(bool)arg1 ;
-(id)_backgroundImages;
-(void)_setAbbreviatedBackButtonTitles:(id)arg1 ;
-(void)_setBackButtonPressed:(bool)arg1 ;
-(void)setNavigationBar:(id)arg1 ;
-(void)_setTitle:(id)arg1 animated:(bool)arg2 ;
-(void)setBackButtonTitle:(id)arg1 ;
-(void)setBackBarButtonItem:(id)arg1 ;
-(id)currentBackButtonTitle;
-(id)backBarButtonItem;
-(void)setContext:(id)arg1 ;
-(void)_removeBarButtonItemViews;
-(void)_replaceCustomLeftRightViewAtIndex:(unsigned long long)arg1 withView:(id)arg2 left:(bool)arg3 ;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(void)_updateItemsForLetterpressImagesVisualStateIfNecessary;
-(void)setHidesBackButton:(bool)arg1 ;
-(void)set_leftBarButtonItem:(id)arg1 ;
-(void)set_rightBarButtonItem:(id)arg1 ;
-(void)set_customRightView:(id)arg1 ;
-(void)set_customLeftView:(id)arg1 ;
-(void)set_rightBarButtonItems:(id)arg1 ;
-(void)set_leftBarButtonItems:(id)arg1 ;
-(void)set_customLeftViews:(id)arg1 ;
-(void)set_customRightViews:(id)arg1 ;
-(id)customLeftView;
-(void)setCustomLeftView:(id)arg1 ;
-(id)customRightView;
-(void)setCustomRightView:(id)arg1 ;
-(void)setLeftBarButtonItems:(id)arg1 ;
-(void)setRightBarButtonItems:(id)arg1 ;
-(id)_rightBarButtonItems;
-(id)_leftBarButtonItems;
-(void)setLeftItemsSupplementBackButton:(bool)arg1 ;
-(void)_updateViewsForBarSizeChangeAndApply:(bool)arg1 ;
-(id)_titleView;
-(void)setCustomTitleView:(id)arg1 ;
-(id)customTitleView;
-(void)setCustomLeftItem:(id)arg1 ;
-(id)customLeftItem;
-(void)setCustomLeftItem:(id)arg1 animated:(bool)arg2 ;
-(void)setCustomRightItem:(id)arg1 ;
-(id)customRightItem;
-(void)setCustomRightItem:(id)arg1 animated:(bool)arg2 ;
-(id)_firstNonSpaceLeftItem;
-(id)_firstNonSpaceRightItem;
-(void)_setIndependentBarStyle:(long long)arg1 ;
-(void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(long long)arg3 ;
-(id)_independentBackgroundImageForBarMetrics:(long long)arg1 ;
-(id)_independentShadowImage;
-(double)_fontScaleAdjustment;
-(id)_pendingTitle;
-(id)_abbreviatedBackButtonTitles;
-(bool)_isBarStyleIndependent;
-(long long)_independentBarStyle;
-(id)_leftItemSpaceList;
-(id)_rightItemSpaceList;
-(unsigned long long)_leftFlexibleSpaceCount;
-(unsigned long long)_rightFlexibleSpaceCount;
-(double)_titleViewWidthForAnimations;
-(void)set_titleViewWidthForAnimations:(double)arg1 ;
-(double)_idealCustomTitleWidth;
@end

