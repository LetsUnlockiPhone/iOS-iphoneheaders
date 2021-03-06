/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPanGestureRecognizer.h>
#import <UIKit/_UIScreenEdgePanRecognizerDelegate.h>

@class _UIScreenEdgePanRecognizer, NSString;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

	_UIScreenEdgePanRecognizer* _recognizer;

}

@property (assign,nonatomic) unsigned edges; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEdges:(unsigned)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(float)_edgeRegionSize;
-(char)isRequiringLongPress;
-(char)_shouldTryToBeginWithEvent:(id)arg1 ;
-(unsigned)edges;
@end

