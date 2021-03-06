/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIButton.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface ListViewSwitchButton : UIButton {

	char _state;
	UITapGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	SEL _tapSelector;
	id _tapSelectorTarget;

}
-(void)_viewTapped:(id)arg1 ;
-(void)setActiveState:(char)arg1 ;
-(void)_viewLongPressed:(id)arg1 ;
-(void)updateActiveState;
-(void)_fadeToDiminishedAlphaWithFadeDuration:(float)arg1 ;
-(void)_fadeViewToAlpha:(float)arg1 duration:(float)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fadeToFullAlphaWithFadeDuration:(float)arg1 ;
-(id)foregroundImageWithTintColor:(id)arg1 ;
-(UIEdgeInsets)imageEdgeInsetsForSourceImage;
-(id)initWithActiveState:(char)arg1 sendAction:(SEL)arg2 target:(id)arg3 ;
-(id)_selectedBackgroundImage;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

