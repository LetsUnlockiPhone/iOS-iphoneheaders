/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:44 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@interface UIKeyboardCandidateLogButton : UIButton {

	SCD_Struct_UI32 _visualStyling;

}

@property (assign,nonatomic) SCD_Struct_UI32 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
-(void)log;
-(void)setVisualStyling:(SCD_Struct_UI32)arg1 ;
-(id)initWithFrame:(CGRect)arg1 visualStyling:(SCD_Struct_UI32)arg2 ;
-(void)updateLabelColor;
-(SCD_Struct_UI32)visualStyling;
@end

