/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/PresentationPlugins/CarDisplay.siriUIPresentationBundle/CarDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CarDisplay/CarDisplay-Structs.h>
#import <CarDisplay/SVSStarkConfirmationSnippetView.h>

@class UILabel;

@interface SVSStarkEmergencyCallConfirmationSnippetView : SVSStarkConfirmationSnippetView {

	UILabel* _titleLabel;
	UILabel* _countdownLabel;

}

@property (nonatomic,readonly) UILabel * countdownLabel;              //@synthesize countdownLabel=_countdownLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 confirmationButtons:(id)arg2 delegate:(id)arg3 ;
-(id)countdownLabel;
-(double)_confirmationButtonYOriginInBounds:(CGRect)arg1 ;
-(id)_createLabelWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end

