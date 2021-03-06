/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UITextField.h>

@class UIColor;

@interface IMSearchField : UITextField {

	char _xTapped;
	UIColor* _placeholderTextColor;

}

@property (assign,nonatomic) char xTapped;                                //@synthesize xTapped=_xTapped - In the implementation block
@property (nonatomic,retain) UIColor * placeholderTextColor;              //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(void)setXTapped:(char)arg1 ;
-(char)xTapped;
-(UIColor *)placeholderTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)canBecomeFirstResponder;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGPoint)_offsetForMiniBarState:(char)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(CGRect)borderRectForBounds:(CGRect)arg1 ;
-(void)drawPlaceholderInRect:(CGRect)arg1 ;
@end

