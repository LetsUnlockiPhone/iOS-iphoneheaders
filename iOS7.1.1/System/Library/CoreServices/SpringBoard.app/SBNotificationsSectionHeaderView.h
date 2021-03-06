/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/_SBFVibrantTableViewHeaderFooterView.h>

@class UILabel, UIImageView, SBNotificationsClearButton, SBNotificationCenterSeparatorView;

@interface SBNotificationsSectionHeaderView : _SBFVibrantTableViewHeaderFooterView {

	UILabel* _titleLabel;
	UIImageView* _iconImageView;
	SBNotificationsClearButton* _xButton;
	SBNotificationsClearButton* _clearButton;
	/*^block*/ id _xAction;
	/*^block*/ id _clearAction;
	BOOL _showingClear;
	SBNotificationCenterSeparatorView* _separator;
	float _clearButtonDescender;

}
+(void)_compositingFilterForView:(id)arg1 ;
+(id)defaultBackgroundColorForGraphicsQuality:(int)arg1 ;
-(void)resetAnimated:(BOOL)arg1 ;
-(id)_circleXImage;
-(id)_clearImage;
-(void)_removeClearButtons;
-(void)_addClearButtons;
-(CGRect)_xButtonFrame;
-(CGRect)_clearButtonFrame;
-(void)setTarget:(id)arg1 forClearButtonVisibleAction:(/*^block*/ id)arg2 ;
-(void)setTarget:(id)arg1 forClearButtonAction:(/*^block*/ id)arg2 ;
-(BOOL)isShowingClear;
-(void)_setShowsClear:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHasClearButton:(BOOL)arg1 ;
-(CGRect)contentBounds;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFloating:(BOOL)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(void)prepareForReuse;
-(void)buttonAction:(id)arg1 ;
-(int)initialGraphicsQuality;
@end

