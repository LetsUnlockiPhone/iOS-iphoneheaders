/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol SKUIFlowcaseViewDelegate;
@class CADisplayLink, CALayer, NSArray, UIView, NSTimer, NSIndexSet;

@interface SKUIFlowcaseView : UIControl {

	<SKUIFlowcaseViewDelegate>* _delegate;
	int _distanceIndex;
	CADisplayLink* _displayLink;
	float _distances[10];
	BOOL _landscape;
	CALayer* _maskLayer1;
	CALayer* _maskLayer2;
	float _position;
	NSArray* _positions;
	BOOL _sendScrollDidEnd;
	int _selection;
	CALayer* _selectionLayer;
	UIView* _shadowView1;
	UIView* _shadowView2;
	CGPoint _startPoint;
	double _startTime;
	NSTimer* _timer;
	NSArray* _views;

}

@property (assign,nonatomic,__weak) <SKUIFlowcaseViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL landscape;                                            //@synthesize landscape=_landscape - In the implementation block
@property (assign,nonatomic) float position;                                            //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) NSArray * views;                                           //@synthesize views=_views - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSetForVisibleViews; 
+(id)_gradientMaskWithLandscape:(BOOL)arg1 inverted:(BOOL)arg2 ;
+(float)_endPositionForStartPosition:(float)arg1 velocity:(float)arg2 landscape:(BOOL)arg3 ;
+(id)_arrayForStartPosition:(float)arg1 endPosition:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setPosition:(float)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(float)position;
-(void)_update;
-(void)start;
-(void)clearSelection;
-(void)stop;
-(void)setViews:(id)arg1 ;
-(id)views;
-(id)indexSetForVisibleViews;
-(void)setLandscape:(BOOL)arg1 ;
-(void)_showSelectionAtIndex:(int)arg1 immediately:(BOOL)arg2 ;
-(void)_reloadForPosition;
-(void)_timerStart;
-(void)_timerStop;
-(int)_indexOfViewAtPoint:(CGPoint)arg1 ;
-(void)_decelerateWithVelocity:(float)arg1 ;
-(float)_positionForPosition:(float)arg1 ;
-(CATransform3D)_transformForPosition:(float)arg1 ;
-(void)_timerAction:(id)arg1 ;
-(BOOL)landscape;
-(void).cxx_destruct;
@end

