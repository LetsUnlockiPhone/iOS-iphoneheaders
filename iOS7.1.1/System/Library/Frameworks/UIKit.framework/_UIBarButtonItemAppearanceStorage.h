/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor, NSValue, _UIBarBackButtonItemAppearanceStorage;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {

	NSMutableDictionary* backgroundImages;
	NSMutableDictionary* miniBackgroundImages;
	UIColor* tintColor;
	NSValue* titlePositionOffset;
	NSValue* miniTitlePositionOffset;
	NSMutableDictionary* backgroundVerticalAdjustmentsForBarMetrics;
	_UIBarBackButtonItemAppearanceStorage* backButtonAppearance;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSValue * titlePositionOffset; 
@property (nonatomic,retain) NSValue * miniTitlePositionOffset; 
@property (nonatomic,retain) NSValue * backButtonTitlePositionOffset; 
@property (nonatomic,retain) NSValue * miniBackButtonTitlePositionOffset; 
-(void)dealloc;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(bool)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 isMini:(bool)arg4 ;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2 ;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(bool)arg3 ;
-(id)anyBackgroundImage;
-(id)miniTitlePositionOffset;
-(id)titlePositionOffset;
-(double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setMiniTitlePositionOffset:(id)arg1 ;
-(void)setTitlePositionOffset:(id)arg1 ;
-(id)anyBackButtonBackgroundImage;
-(id)miniBackButtonTitlePositionOffset;
-(id)backButtonTitlePositionOffset;
-(double)backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackButtonBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setMiniBackButtonTitlePositionOffset:(id)arg1 ;
-(void)setBackButtonTitlePositionOffset:(id)arg1 ;
@end

