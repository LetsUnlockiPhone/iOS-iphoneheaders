/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIView, NSDate;

@interface MTSwitch : UIControl {

	UIImageView* _backgroundImageView;
	UIImageView* _thumbImageView;
	UIView* _thumbView;
	float _trackingOffset;
	float _trackingStartLocation;
	CGRect _startThumbRect;
	NSDate* _trackingStartTime;
	char _on;

}

@property (assign,getter=isOn,nonatomic) char on;              //@synthesize on=_on - In the implementation block
-(CGRect)thumbRectForOn:(char)arg1 ;
-(CGRect)thumbRectForOffset:(float)arg1 ;
-(void)swiped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setOn:(char)arg1 ;
-(char)isOn;
-(void)setOn:(char)arg1 animated:(char)arg2 ;
@end

