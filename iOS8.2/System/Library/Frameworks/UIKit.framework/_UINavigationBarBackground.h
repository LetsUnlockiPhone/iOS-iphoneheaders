/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIBarBackgroundImageView.h>
#import <UIKit/_UIBackdropViewGraphicsQualityChangeDelegate.h>

@class UIColor, _UINavigationBarAppearanceStorage, UIImageView, _UIBackdropView, UIView;

@interface _UINavigationBarBackground : _UIBarBackgroundImageView <_UIBackdropViewGraphicsQualityChangeDelegate> {

	UIColor* _barTintColor;
	_UINavigationBarAppearanceStorage* _appearanceStorage;
	UIImageView* _shadowView;
	_UIBackdropView* _adaptiveBackdrop;
	struct {
		unsigned barTranslucence : 3;
		unsigned barStyle : 3;
		unsigned backgroundImageNeedsUpdate : 1;
		unsigned isContainedInPopover : 1;
		unsigned barWantsAdaptiveBackdrop : 1;
	}  _navbarFlags;

}

@property (assign,nonatomic) int barStyle; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) _UINavigationBarAppearanceStorage * appearanceStorage;              //@synthesize appearanceStorage=_appearanceStorage - In the implementation block
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                        //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) char translucent; 
@property (assign,nonatomic) char barWantsAdaptiveBackdrop; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(char)isTranslucent;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)didMoveToSuperview;
-(UIView *)_shadowView;
-(void)setAppearanceStorage:(_UINavigationBarAppearanceStorage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 barStyle:(int)arg2 barTintColor:(id)arg3 appearance:(id)arg4 barTranslucence:(int)arg5 ;
-(_UINavigationBarAppearanceStorage *)appearanceStorage;
-(void)updateBackgroundImage;
-(void)setBarStyle:(int)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(char)arg1 ;
-(int)barStyle;
-(void)setTranslucent:(char)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)_setIsContainedInPopover:(char)arg1 ;
-(id)_currentCustomBackground;
-(id)_currentCustomBackgroundRespectOversize_legacy:(char*)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(char)arg2 ;
-(UIColor *)barTintColor;
-(id)_currentCustomBackgroundDedicatedToBarMetrics:(int*)arg1 barPosition:(int*)arg2 ;
-(char)barWantsAdaptiveBackdrop;
-(void)_setShadowView:(id)arg1 ;
-(id)backdropView:(id)arg1 willChangeToGraphicsQuality:(int)arg2 ;
-(void)backdropView:(id)arg1 didChangeToGraphicsQuality:(int)arg2 ;
-(id)_adaptiveBackdrop;
-(id)_customShadowImageForSearchBar;
@end
