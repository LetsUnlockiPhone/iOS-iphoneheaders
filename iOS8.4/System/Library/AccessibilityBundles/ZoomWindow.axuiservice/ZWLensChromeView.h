/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, CALayer, NSArray;

@interface ZWLensChromeView : UIView {

	BOOL _showingResizeHandles;
	CAShapeLayer* _chromeOuterBorderLayer;
	CAShapeLayer* _chromeInnerBorderLayer;
	CAShapeLayer* _lensResizingHandlesLayer;
	CAShapeLayer* _touchStealerShapeLayer;
	CALayer* _grabberOverlayLayer;
	CALayer* _backdropLayer;
	CAShapeLayer* _backdropMaskShapeLayer;
	CAShapeLayer* _backdropGrabberMaskLayer;
	CAShapeLayer* _backdropResizingMaskLayer;
	NSArray* _resizeElements;
	CGRect _previousResizeBounds;

}

@property (nonatomic,retain) CAShapeLayer * chromeOuterBorderLayer;                 //@synthesize chromeOuterBorderLayer=_chromeOuterBorderLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * chromeInnerBorderLayer;                 //@synthesize chromeInnerBorderLayer=_chromeInnerBorderLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * lensResizingHandlesLayer;               //@synthesize lensResizingHandlesLayer=_lensResizingHandlesLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * touchStealerShapeLayer;                 //@synthesize touchStealerShapeLayer=_touchStealerShapeLayer - In the implementation block
@property (nonatomic,retain) CALayer * grabberOverlayLayer;                         //@synthesize grabberOverlayLayer=_grabberOverlayLayer - In the implementation block
@property (nonatomic,retain) CALayer * backdropLayer;                               //@synthesize backdropLayer=_backdropLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * backdropMaskShapeLayer;                 //@synthesize backdropMaskShapeLayer=_backdropMaskShapeLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * backdropGrabberMaskLayer;               //@synthesize backdropGrabberMaskLayer=_backdropGrabberMaskLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * backdropResizingMaskLayer;              //@synthesize backdropResizingMaskLayer=_backdropResizingMaskLayer - In the implementation block
@property (nonatomic,retain) NSArray * resizeElements;                              //@synthesize resizeElements=_resizeElements - In the implementation block
@property (assign,nonatomic) CGRect previousResizeBounds;                           //@synthesize previousResizeBounds=_previousResizeBounds - In the implementation block
@property (assign,nonatomic) BOOL showingResizeHandles;                             //@synthesize showingResizeHandles=_showingResizeHandles - In the implementation block
-(void)setResizeElements:(NSArray *)arg1 ;
-(CAShapeLayer *)backdropMaskShapeLayer;
-(void)setBackdropGrabberMaskLayer:(CAShapeLayer *)arg1 ;
-(void)setLensResizingHandlesLayer:(CAShapeLayer *)arg1 ;
-(void)setPreviousResizeBounds:(CGRect)arg1 ;
-(CAShapeLayer *)touchStealerShapeLayer;
-(void)setShowingResizeHandles:(BOOL)arg1 ;
-(BOOL)showingResizeHandles;
-(CAShapeLayer *)chromeOuterBorderLayer;
-(CGRect)previousResizeBounds;
-(CAShapeLayer *)lensResizingHandlesLayer;
-(CAShapeLayer *)chromeInnerBorderLayer;
-(void)setChromeOuterBorderLayer:(CAShapeLayer *)arg1 ;
-(void)setTouchStealerShapeLayer:(CAShapeLayer *)arg1 ;
-(CALayer *)grabberOverlayLayer;
-(NSArray *)resizeElements;
-(void)setGrabberOverlayLayer:(CALayer *)arg1 ;
-(CAShapeLayer *)backdropGrabberMaskLayer;
-(void)setChromeInnerBorderLayer:(CAShapeLayer *)arg1 ;
-(void)setBackdropResizingMaskLayer:(CAShapeLayer *)arg1 ;
-(void)setBackdropMaskShapeLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)backdropResizingMaskLayer;
-(void)updateChromeVisibility:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)showLensResizingHandles:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(CALayer *)backdropLayer;
-(void)setBackdropLayer:(CALayer *)arg1 ;
@end
