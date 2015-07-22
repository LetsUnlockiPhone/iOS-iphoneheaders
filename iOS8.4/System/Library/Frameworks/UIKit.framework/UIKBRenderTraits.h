/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class NSMutableArray, UIKBRenderGeometry, UIKBGradient, UIKBTextStyle, NSArray, NSString;

@interface UIKBRenderTraits : NSObject <NSCopying> {

	NSMutableArray* _renderEffects;
	NSMutableArray* _foregroundRenderEffects;
	BOOL _honorControlOpacity;
	BOOL _controlOpacities;
	UIKBRenderGeometry* _geometry;
	UIKBGradient* _backgroundGradient;
	UIKBGradient* _layeredBackgroundGradient;
	UIKBGradient* _layeredForegroundGradient;
	UIKBTextStyle* _symbolStyle;
	UIKBTextStyle* _secondarySymbolStyle;
	UIKBTextStyle* _fallbackSymbolStyle;
	NSArray* _variantGeometries;
	UIKBRenderTraits* _variantTraits;
	UIKBRenderTraits* _highlightedVariantTraits;
	double _forceOpacity;
	long long _blendForm;
	NSString* _hashString;

}

@property (nonatomic,retain) UIKBRenderGeometry * geometry;                            //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,retain) UIKBGradient * backgroundGradient;                        //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,retain) UIKBGradient * layeredBackgroundGradient;                 //@synthesize layeredBackgroundGradient=_layeredBackgroundGradient - In the implementation block
@property (nonatomic,retain) UIKBGradient * layeredForegroundGradient;                 //@synthesize layeredForegroundGradient=_layeredForegroundGradient - In the implementation block
@property (nonatomic,retain) UIKBTextStyle * symbolStyle;                              //@synthesize symbolStyle=_symbolStyle - In the implementation block
@property (nonatomic,retain) UIKBTextStyle * secondarySymbolStyle;                     //@synthesize secondarySymbolStyle=_secondarySymbolStyle - In the implementation block
@property (nonatomic,retain) UIKBTextStyle * fallbackSymbolStyle;                      //@synthesize fallbackSymbolStyle=_fallbackSymbolStyle - In the implementation block
@property (nonatomic,readonly) NSArray * renderEffects;                                //@synthesize renderEffects=_renderEffects - In the implementation block
@property (nonatomic,readonly) NSArray * foregroundRenderEffects;                      //@synthesize foregroundRenderEffects=_foregroundRenderEffects - In the implementation block
@property (nonatomic,retain) NSArray * variantGeometries;                              //@synthesize variantGeometries=_variantGeometries - In the implementation block
@property (nonatomic,retain) UIKBRenderTraits * variantTraits;                         //@synthesize variantTraits=_variantTraits - In the implementation block
@property (nonatomic,retain) UIKBRenderTraits * highlightedVariantTraits;              //@synthesize highlightedVariantTraits=_highlightedVariantTraits - In the implementation block
@property (assign,nonatomic) BOOL controlOpacities;                                    //@synthesize controlOpacities=_controlOpacities - In the implementation block
@property (assign,nonatomic) double forceOpacity;                                      //@synthesize forceOpacity=_forceOpacity - In the implementation block
@property (assign,nonatomic) long long blendForm;                                      //@synthesize blendForm=_blendForm - In the implementation block
@property (nonatomic,retain) NSString * hashString;                                    //@synthesize hashString=_hashString - In the implementation block
+(id)emptyTraits;
+(id)traitsWithGeometry:(id)arg1 ;
+(id)traitsWithSymbolStyle:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundGradient:(UIKBGradient *)arg1 ;
-(UIKBRenderGeometry *)geometry;
-(void)setSymbolStyle:(UIKBTextStyle *)arg1 ;
-(UIKBTextStyle *)symbolStyle;
-(void)addRenderEffect:(id)arg1 ;
-(void)setVariantGeometries:(NSArray *)arg1 ;
-(void)setVariantTraits:(UIKBRenderTraits *)arg1 ;
-(void)setHighlightedVariantTraits:(UIKBRenderTraits *)arg1 ;
-(void)setBlendForm:(long long)arg1 ;
-(void)setControlOpacities:(BOOL)arg1 ;
-(UIKBRenderTraits *)variantTraits;
-(NSArray *)variantGeometries;
-(void)setLayeredBackgroundGradient:(UIKBGradient *)arg1 ;
-(void)removeAllRenderEffects;
-(void)setGeometry:(UIKBRenderGeometry *)arg1 ;
-(NSString *)hashString;
-(long long)blendForm;
-(BOOL)controlOpacities;
-(void)modifyForMasking;
-(void)setSecondarySymbolStyle:(UIKBTextStyle *)arg1 ;
-(UIKBTextStyle *)secondarySymbolStyle;
-(void)setForceOpacity:(double)arg1 ;
-(void)setLayeredForegroundGradient:(UIKBGradient *)arg1 ;
-(void)overlayWithTraits:(id)arg1 ;
-(UIKBGradient *)backgroundGradient;
-(double)forceOpacity;
-(UIKBGradient *)layeredBackgroundGradient;
-(UIKBGradient *)layeredForegroundGradient;
-(UIKBTextStyle *)fallbackSymbolStyle;
-(NSArray *)renderEffects;
-(NSArray *)foregroundRenderEffects;
-(UIKBRenderTraits *)highlightedVariantTraits;
-(void)setHashString:(NSString *)arg1 ;
-(void)addForegroundRenderEffect:(id)arg1 ;
-(void)setFallbackSymbolStyle:(UIKBTextStyle *)arg1 ;
@end
