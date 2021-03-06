/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXFeatureViewController.h>

@class UILabel, NSLayoutConstraint, GAXOptionsView;

@interface GAXFeatureViewController_Phone : GAXFeatureViewController {

	UILabel* _instructionsLabel;
	NSLayoutConstraint* _instructionsLabelWidthConstraint;
	GAXOptionsView* _optionsView;

}

@property (nonatomic,retain) UILabel * instructionsLabel;                                        //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,readonly) double instructionsLabelHorizontalOffset; 
@property (nonatomic,retain) NSLayoutConstraint * instructionsLabelWidthConstraint;              //@synthesize instructionsLabelWidthConstraint=_instructionsLabelWidthConstraint - In the implementation block
@property (nonatomic,readonly) BOOL isTouchEnabled; 
@property (nonatomic,readonly) UIOffset optionsButtonOffset; 
@property (nonatomic,retain) GAXOptionsView * optionsView;                                       //@synthesize optionsView=_optionsView - In the implementation block
@property (nonatomic,readonly) double featureViewControllerHeight; 
-(void)featureView:(id)arg1 didChangeState:(BOOL)arg2 ;
-(void)featureView:(id)arg1 didChangeTimeRestrictionDuration:(long long)arg2 timeRestrictionsEnabled:(BOOL)arg3 ;
-(GAXOptionsView *)optionsView;
-(BOOL)isTouchEnabled;
-(void)setOptionsView:(GAXOptionsView *)arg1 ;
-(void)releaseOutlets;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(UILabel *)instructionsLabel;
-(void)dismissOptionsAnimated:(BOOL)arg1 ;
-(id)_hardwareFeatureViews;
-(id)_appFeatureViews;
-(id)_timeRestrictionFeatureViews;
-(void)presentOptionsAnimated:(BOOL)arg1 ;
-(double)featureViewControllerHeight;
-(void)setInstructionsLabelWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(double)instructionsLabelHorizontalOffset;
-(UIOffset)optionsButtonOffset;
-(NSLayoutConstraint *)instructionsLabelWidthConstraint;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)loadView;
@end

