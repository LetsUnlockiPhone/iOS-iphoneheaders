/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface PBBridgeProgressView : UIView {

	double _currentProgress;
	UIImageView* _appleLogo;
	unsigned long long _style;

}

@property (assign,nonatomic) double currentProgress;                //@synthesize currentProgress=_currentProgress - In the implementation block
@property (nonatomic,retain) UIImageView * appleLogo;               //@synthesize appleLogo=_appleLogo - In the implementation block
@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
-(void)setCurrentProgress:(double)arg1 ;
-(double)currentProgress;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(CGSize)_size;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(double)_tickLength;
-(UIImageView *)appleLogo;
-(void)setAppleLogo:(UIImageView *)arg1 ;
@end
