/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface SCATAxisLayer : CALayer {

	int _axis;
	int _theme;
	CALayer* _foregroundLayer;
	CALayer* _compositingLayer;

}

@property (assign,nonatomic) int axis;                                //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) int theme;                               //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) BOOL isAnimatingForwards; 
@property (nonatomic,retain) CALayer * foregroundLayer;               //@synthesize foregroundLayer=_foregroundLayer - In the implementation block
@property (nonatomic,retain) CALayer * compositingLayer;              //@synthesize compositingLayer=_compositingLayer - In the implementation block
+(double)rangeLayerMaxWidth;
+(double)rangeLayerBorderWidth;
+(double)lineLayerMaxWidth;
-(id)initWithAxis:(int)arg1 ;
-(void)updateTheme:(int)arg1 animated:(BOOL)arg2 ;
-(void)updateLayerTreePosition:(CGPoint)arg1 ;
-(BOOL)isAnimatingForwards;
-(CALayer *)foregroundLayer;
-(CALayer *)compositingLayer;
-(void)setForegroundLayer:(CALayer *)arg1 ;
-(void)setCompositingLayer:(CALayer *)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(int)axis;
-(void)setAxis:(int)arg1 ;
-(int)theme;
-(void)setTheme:(int)arg1 ;
@end
