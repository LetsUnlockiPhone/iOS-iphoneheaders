/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:02 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIDimmingViewDelegate.h>

@class UIInputSwitcherTableView, UIInputSwitcherShadowView, UIInputSwitcherSelectionExtraView, NSTimer, UIDimmingView, UIKBTree, UIKeyboardLayoutStar, NSString;

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate> {

	UIInputSwitcherTableView* m_table;
	UIInputSwitcherShadowView* m_shadowView;
	UIInputSwitcherSelectionExtraView* m_selExtraView;
	CGRect m_referenceRect;
	float m_pointerOffset;
	char m_scrollable;
	char m_startAutoscroll;
	char m_scrolling;
	char m_shouldFade;
	CGPoint m_point;
	double m_scrollStartTime;
	int m_scrollDirection;
	NSTimer* m_scrollTimer;
	int m_visibleRows;
	int m_firstVisibleRow;
	int m_mode;
	UIDimmingView* m_dimmingView;
	char _usesStraightLeftEdge;
	char _usesDarkTheme;
	UIKBTree* _referenceKey;
	UIKeyboardLayoutStar* _layout;

}

@property (assign,nonatomic) int mode; 
@property (readonly) char usesTable; 
@property (assign,nonatomic) char usesStraightLeftEdge;                  //@synthesize usesStraightLeftEdge=_usesStraightLeftEdge - In the implementation block
@property (assign,nonatomic) char usesDarkTheme;                         //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) UIKBTree * referenceKey;                    //@synthesize referenceKey=_referenceKey - In the implementation block
@property (assign,nonatomic) UIKeyboardLayoutStar * layout;              //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewThatContainsBaseKey;
-(void)hide;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)applicationWillSuspend:(id)arg1 ;
-(id)font;
-(UIKeyboardLayoutStar *)layout;
-(id)table;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setLayout:(UIKeyboardLayoutStar *)arg1 ;
-(char)isVisible;
-(id)dimmingView;
-(int)numberOfItems;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2 ;
-(void)fadeWithDelay:(double)arg1 ;
-(void)fade;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)selectItemAtPoint:(CGPoint)arg1 ;
-(void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)stopAnyAutoscrolling;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)showAsHUD;
-(char)usesStraightLeftEdge;
-(char)usesDarkTheme;
-(id)maskForShadowViewBlurredBackground;
-(char)usesTable;
-(char)usesShadowView;
-(CGSize)preferredSize;
-(void)setUsesStraightLeftEdge:(char)arg1 ;
-(void)setupShadowViewWithSize:(CGSize)arg1 ;
-(char)usesDimmingView;
-(int)defaultSelectedIndex;
-(void)highlightRow:(int)arg1 ;
-(void)insertSelExtraView;
-(void)performShowAnimation;
-(int)_internationalKeyRoundedCornerInLayout:(id)arg1 ;
-(void)setReferenceKey:(UIKBTree *)arg1 ;
-(void)setKeyboardDimmed:(char)arg1 ;
-(UIKBTree *)referenceKey;
-(id)predictiveSwitch;
-(void)toggleKeyboardPredictionPreference;
-(void)_delayedFade;
-(void)setNeedsDisplayForCell:(id)arg1 ;
-(void)setNeedsDisplayForTopBottomCells;
-(void)endScrolling:(id)arg1 ;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(int)indexForIndexPath:(id)arg1 ;
-(id)localizedTitleForItemAtIndex:(int)arg1 ;
-(id)fontForItemAtIndex:(int)arg1 ;
-(id)subtitleForItemAtIndex:(int)arg1 ;
-(id)subtitleFontForItemAtIndex:(int)arg1 ;
-(void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(char)arg2 ;
-(void)setUsesDarkTheme:(char)arg1 ;
-(id)titleForItemAtIndex:(int)arg1 ;
-(id)subtitleFont;
-(char)centerPopUpOverKey;
-(float)minYOfLastTableCellForSelectionExtraView;
-(CGRect)popupRect;
@end

