/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKBHandwritingStrokeEnabled.h>

@class UIKBHandwritingView;

@interface UIKBHandwritingStrokeView : UIView <UIKBHandwritingStrokeEnabled> {

	UIKBHandwritingView* _keyView;

}

@property (nonatomic,retain) UIKBHandwritingView * keyView;              //@synthesize keyView=_keyView - In the implementation block
@property (nonatomic,readonly) double inkWidth; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(double)inkWidth;
-(UIKBHandwritingView *)keyView;
-(void)setKeyView:(UIKBHandwritingView *)arg1 ;
@end

