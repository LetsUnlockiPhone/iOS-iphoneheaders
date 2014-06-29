/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class NSString;

@interface SBDistanceFieldView : UIView

@property (nonatomic,copy) NSString * renderMode; 
@property (assign) BOOL invertsShape; 
@property (assign) CGColorRef foregroundColor; 
@property (assign) float offset; 
@property (assign) float sharpness; 
@property (assign) float lineWidth; 
+(Class)layerClass;
-(id)renderMode;
-(float)sharpness;
-(BOOL)invertsShape;
-(void)setRenderMode:(id)arg1 ;
-(void)setInvertsShape:(BOOL)arg1 ;
-(void)setSharpness:(float)arg1 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(CGColorRef)foregroundColor;
-(void)setForegroundColor:(CGColorRef)arg1 ;
@end
