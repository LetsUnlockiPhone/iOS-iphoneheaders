/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, NSArray, NSMutableArray;

@interface _UIHighlightView : UIView {

	UIColor* _color;
	double _cornerRadius;
	CGRect _invertedHighlightClipRect;
	NSArray* _cornerRadii;
	NSMutableArray* _innerBounds;
	NSMutableArray* _innerQuads;
	bool _invertHighlight;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setColor:(id)arg1 ;
-(void)cleanUp;
-(void)setCornerRadii:(id)arg1 ;
-(void)setFrames:(id)arg1 boundaryRect:(CGRect)arg2 ;
-(void)setQuads:(id)arg1 boundaryRect:(CGRect)arg2 ;
-(void)setInvertHighlight:(bool)arg1 clipRect:(CGRect)arg2 ;
@end
