/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoardFoundation/_UISettingsKeyObserver.h>

@protocol SBFWallpaperViewLegibilityObserver, SBFWallpaperViewInternalObserver;
@class SBFWallpaperSettings, UIImageView, UIView, _UILegibilitySettingsProvider, _UILegibilitySettings, UIColor, NSTimer, SBFWallpaperParallaxSettings, UIImage, NSString;

@interface SBFWallpaperView : UIView <_UISettingsKeyObserver> {

	SBFWallpaperSettings* _wallpaperSettings;
	UIImageView* _topGradientView;
	UIImageView* _bottomGradientView;
	UIView* _parallaxView;
	float _contentScaleFactor;
	int _variant;
	_UILegibilitySettingsProvider* _legibilitySettingsProvider;
	_UILegibilitySettings* _legibilitySettings;
	UIColor* _lastAverageColor;
	NSTimer* _colorSampleTimer;
	char _shouldGenerateBlurredImagesWhenVisible;
	char _generatingBlurredImages;
	SBFWallpaperParallaxSettings* _parallaxSettings;
	char _wantsRasterization;
	int _disallowRasterizationBlockCount;
	char _filtersAverageColor;
	char _continuousColorSamplingEnabled;
	char _wallpaperAnimationEnabled;
	char _parallaxEnabled;
	char _suppressesGradients;
	id<SBFWallpaperViewLegibilityObserver> _legibilityObserver;
	UIView* _contentView;
	float _zoomFactor;
	float _contrast;
	float _parallaxFactor;
	id<SBFWallpaperViewInternalObserver> _internalObserver;
	float _parallaxAxisAdjustmentAngle;

}

@property (nonatomic,readonly) UIImage * wallpaperImage; 
@property (assign,nonatomic) id<SBFWallpaperViewLegibilityObserver> legibilityObserver;              //@synthesize legibilityObserver=_legibilityObserver - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) float zoomFactor;                                                       //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) int variant;                                                            //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) char filtersAverageColor;                                               //@synthesize filtersAverageColor=_filtersAverageColor - In the implementation block
@property (assign,nonatomic) float contrast;                                                         //@synthesize contrast=_contrast - In the implementation block
@property (assign,nonatomic) char continuousColorSamplingEnabled;                                    //@synthesize continuousColorSamplingEnabled=_continuousColorSamplingEnabled - In the implementation block
@property (assign,nonatomic) char wallpaperAnimationEnabled;                                         //@synthesize wallpaperAnimationEnabled=_wallpaperAnimationEnabled - In the implementation block
@property (assign,nonatomic) char parallaxEnabled;                                                   //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (assign,nonatomic) float parallaxFactor;                                                   //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,nonatomic) id<SBFWallpaperViewInternalObserver> internalObserver;                  //@synthesize internalObserver=_internalObserver - In the implementation block
@property (assign,nonatomic) char suppressesGradients;                                               //@synthesize suppressesGradients=_suppressesGradients - In the implementation block
@property (assign,nonatomic) float parallaxAxisAdjustmentAngle;                                      //@synthesize parallaxAxisAdjustmentAngle=_parallaxAxisAdjustmentAngle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_allowsParallax;
+(char)_allowsRasterization;
+(char)_shouldScaleForParallax;
-(CGRect)cropRect;
-(void)setZoomFactor:(float)arg1 ;
-(float)zoomFactor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)invalidate;
-(void)setContrast:(float)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(float)contentScaleFactor;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(float)contrast;
-(char)_isVisible;
-(UIImage *)wallpaperImage;
-(float)parallaxFactor;
-(char)parallaxEnabled;
-(char)supportsCropping;
-(void)updateLegibilitySettingsForAverageColor:(id)arg1 ;
-(id)_computeAverageColor;
-(void)_updateParallaxSettings;
-(void)_updateRasterizationState;
-(id)initWithFrame:(CGRect)arg1 variant:(int)arg2 ;
-(void)_updateLegibilitySettingsForAverageColor:(id)arg1 notify:(char)arg2 ;
-(void)_updateScaleFactor;
-(void)_beginDisallowRasterizationBlock;
-(void)_updateContentViewScale;
-(void)_endDisallowRasterizationBlock;
-(void)setVariant:(int)arg1 withAnimationFactory:(id)arg2 ;
-(void)setVariant:(int)arg1 withAnimationFactory:(id)arg2 forced:(char)arg3 ;
-(void)_prepareToAnimateGradients;
-(void)_updateGradientAlpha;
-(void)_updateGradientImage;
-(void)_handleVariantChange;
-(void)_cleanupAfterAnimatingGradients;
-(void)_setLegibilitySettings:(id)arg1 notify:(char)arg2 ;
-(id)_wallpaperName;
-(id)_primaryColorOverride;
-(float)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(float*)arg2 contrastBetweenBoxes:(float*)arg3 ;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(float)arg2 ;
-(void)_updateGeneratingBlurs;
-(id)_blurReplacementImage;
-(id)_blurredImage;
-(id)_imageForBackdropParameters:(SCD_Struct_SB8)arg1 includeTint:(char)arg2 ;
-(id)_displayedImage;
-(void)_handleVisibilityChange;
-(void)_applyParallaxSettings;
-(void)_notifyBlursInvalidated;
-(void)_startGeneratingBlurredImages;
-(void)_stopGeneratingBlurredImages;
-(void)_addParallax;
-(void)_removeParallax;
-(void)_notifyGeometryInvalidated;
-(id)averageColorInRect:(CGRect)arg1 withSmudgeRadius:(float)arg2 ;
-(char)contrastRequiresTreatments;
-(char)_shouldShowTopGradient;
-(char)_shouldShowBottomGradient;
-(float)_topGradientAlpha;
-(float)_bottomGradientAlpha;
-(CGRect)_topGradientTestRect;
-(float)gradientOpacityInRect:(CGRect)arg1 contrastWithinBoxesFactor:(float)arg2 allowLuminanceCheck:(char)arg3 ;
-(CGRect)_bottomGradientTestRect;
-(void)setCropRect:(CGRect)arg1 zoomScale:(float)arg2 ;
-(void)prepareToAppear;
-(void)prepareToDisappear;
-(float)cropZoomScale;
-(void)setFiltersAverageColor:(char)arg1 ;
-(float)contrastInRect:(CGRect)arg1 ;
-(void)setParallaxEnabled:(char)arg1 ;
-(void)setGeneratesBlurredImages:(char)arg1 ;
-(id)blurredImage;
-(id)imageForBackdropParameters:(SCD_Struct_SB8)arg1 includeTint:(char)arg2 ;
-(void)setSuppressesGradients:(char)arg1 ;
-(char)isDisplayingWallpaper:(id)arg1 forVariant:(int)arg2 options:(id)arg3 ;
-(char)wantsRasterization;
-(char)luminanceInRectRequiresTreatments:(CGRect)arg1 ;
-(id<SBFWallpaperViewLegibilityObserver>)legibilityObserver;
-(void)setLegibilityObserver:(id<SBFWallpaperViewLegibilityObserver>)arg1 ;
-(char)filtersAverageColor;
-(char)continuousColorSamplingEnabled;
-(void)setContinuousColorSamplingEnabled:(char)arg1 ;
-(char)wallpaperAnimationEnabled;
-(void)setWallpaperAnimationEnabled:(char)arg1 ;
-(void)setParallaxFactor:(float)arg1 ;
-(id<SBFWallpaperViewInternalObserver>)internalObserver;
-(void)setInternalObserver:(id<SBFWallpaperViewInternalObserver>)arg1 ;
-(char)suppressesGradients;
-(float)parallaxAxisAdjustmentAngle;
-(void)setParallaxAxisAdjustmentAngle:(float)arg1 ;
-(int)variant;
-(void)setVariant:(int)arg1 ;
@end
