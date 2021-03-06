/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILongPressGestureRecognizer, UITapGestureRecognizer, CALayer;

@interface StarkPanButton : UIButton <UIGestureRecognizerDelegate> {

	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _physicalLongPressRecognizer;
	UITapGestureRecognizer* _physicalTapRecognizer;
	CALayer* _backgroundLayer;

}
+(id)arrowImageForDirection:(int)arg1 ;
-(id)initWithDirection:(int)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_focusStateDidChange;
-(BOOL)_isFocusableElement;
-(void).cxx_destruct;
@end

