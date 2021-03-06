/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewLongNumericKeypad.h>

@class UILabel, UIView, NSString;

@interface SBUIPasscodeLockViewSIMLockKeypad : SBUIPasscodeLockViewLongNumericKeypad {

	UILabel* _statusSubtitleView;
	UIView* _entryFieldFiller;
	float _targetEntryFieldFillerAlpha;
	BOOL _isShowingStatus;
	UIView* _statusSpringView;
	UIView* _statusSpringViewParent;

}

@property (nonatomic,@dynamic,copy) NSString * statusTitle; 
@property (nonatomic,@dynamic,copy) NSString * statusSubtitle; 
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setBackgroundAlpha:(float)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(id)statusTitle;
-(void)setStatusTitle:(id)arg1 ;
-(id)statusSubtitle;
-(void)setStatusSubtitle:(id)arg1 ;
-(void)resetForFailedPasscode;
-(void)_setHasInput:(BOOL)arg1 ;
-(void)_layoutStatusView;
-(BOOL)_showsPromptLabelOnEntryField;
-(id)_statusSubtitleFont;
-(void)forceShowStatus:(BOOL)arg1 ;
-(void)_setText:(id)arg1 onLabel:(id)arg2 ;
-(BOOL)_needsToHideTextFieldForStatus;
-(void)_shakeStatus;
-(void)_sizeLabel:(id)arg1 ;
-(float)_expectedYOffsetBetweenTitleAndSubtitleViews;
-(float)_subtitleBaselineYOffsetFromTopOfNumberPad;
-(float)_subtitleBaselineYOffsetFromTopOfEntryField;
-(float)_expectedDistanceBetweenTitleAndSubtitleBaselines;
-(float)_distanceToFirstLineBaseline:(id)arg1 ;
-(float)_distanceFromLastLineBaselineToTextFieldBoundsHeight:(id)arg1 ;
@end

