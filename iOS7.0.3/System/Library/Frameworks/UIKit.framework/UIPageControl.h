/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableArray, UIImage, UIColor, _UILegibilitySettings;

@interface UIPageControl : UIControl {

	NSMutableArray* _indicators;
	int _currentPage;
	int _displayedPage;
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	}  _pageControlFlags;
	UIImage* _currentPageImage;
	UIImage* _pageImage;
	int _lastUserInterfaceIdiom;
	UIColor* _currentPageIndicatorTintColor;
	UIColor* _pageIndicatorTintColor;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic,@dynamic) int numberOfPages; 
@property (assign,nonatomic,@dynamic) int currentPage; 
@property (assign,nonatomic,@dynamic) BOOL hidesForSinglePage; 
@property (assign,nonatomic,@dynamic) BOOL defersCurrentPageDisplay; 
@property (nonatomic,retain) UIColor * pageIndicatorTintColor;                                                                                  //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (nonatomic,retain) UIColor * currentPageIndicatorTintColor;                                                                           //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
@property (assign,setter=_setLegibilityStyle:,getter=_legibilityStyle,nonatomic) int legibilityStyle; 
@property (assign,setter=_setLegibilitySettings:,getter=_legibilitySettings,nonatomic) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(CGSize)intrinsicContentSize;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_commonPageControlInit;
-(void)setNumberOfPages:(int)arg1 ;
-(void)setCurrentPage:(int)arg1 ;
-(void)setCurrentPageIndicatorTintColor:(id)arg1 ;
-(void)setPageIndicatorTintColor:(id)arg1 ;
-(int)numberOfPages;
-(void)_invalidateIndicators;
-(id)_activePageIndicatorImage;
-(id)_pageIndicatorImageForPage:(int)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(int)arg1 ;
-(id)_customPageIndicatorCurrentImageForPage:(int)arg1 ;
-(id)_customPageIndicatorImageForPage:(int)arg1 ;
-(id)_pageIndicatorImage;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(int)arg2 ;
-(void)_setCurrentPage:(int)arg1 ;
-(void)_setDisplayedPage:(int)arg1 ;
-(void)_updateCurrentPageDisplay;
-(float)_indicatorSpacing;
-(CGRect)_indicatorFrameAtIndex:(int)arg1 ;
-(CGRect)_modernBounds;
-(BOOL)_hasCustomImageForPage:(int)arg1 enabled:(BOOL)arg2 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(int)arg3 ;
-(id)_correctIdiomaticNameForImageNamed:(id)arg1 ;
-(void)_modernTransitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(int)arg3 legible:(BOOL)arg4 ;
-(BOOL)_shouldDrawLegibly;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(int)arg3 legible:(BOOL)arg4 ;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(int)arg2 legible:(BOOL)arg3 ;
-(void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_modernIndicatorImageEnabled:(BOOL)arg1 ;
-(void)_setLegibilitySettings:(id)arg1 ;
-(id)_modernColorEnabled:(BOOL)arg1 ;
-(float)_modernCornerRadius;
-(id)_createModernIndicatorImageFromView:(id)arg1 ;
-(int)currentPage;
-(void)setHidesForSinglePage:(BOOL)arg1 ;
-(BOOL)hidesForSinglePage;
-(void)setDefersCurrentPageDisplay:(BOOL)arg1 ;
-(BOOL)defersCurrentPageDisplay;
-(void)updateCurrentPageDisplay;
-(CGSize)sizeForNumberOfPages:(int)arg1 ;
-(int)_displayedPage;
-(void)_setLegibilityStyle:(int)arg1 ;
-(int)_legibilityStyle;
-(id)currentPageIndicatorTintColor;
-(id)pageIndicatorTintColor;
-(id)_legibilitySettings;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

