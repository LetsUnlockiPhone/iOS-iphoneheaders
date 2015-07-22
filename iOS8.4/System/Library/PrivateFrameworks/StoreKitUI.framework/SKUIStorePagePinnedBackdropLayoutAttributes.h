/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <StoreKitUI/NSCopying.h>

@class UIColor, NSString;

@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	UIColor* _backdropColor;
	long long _backdropStyle;
	BOOL _hidesBackdropView;
	double _transitionProgress;
	NSString* _backdropGroupName;

}

@property (nonatomic,retain) UIColor * backdropColor;                 //@synthesize backdropColor=_backdropColor - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;              //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long backdropStyle;                 //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (assign,nonatomic) BOOL hidesBackdropView;                  //@synthesize hidesBackdropView=_hidesBackdropView - In the implementation block
@property (assign,nonatomic) double transitionProgress;               //@synthesize transitionProgress=_transitionProgress - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)backdropStyle;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setBackdropStyle:(long long)arg1 ;
-(void)setHidesBackdropView:(BOOL)arg1 ;
-(void)setBackdropColor:(UIColor *)arg1 ;
-(NSString *)backdropGroupName;
-(BOOL)hidesBackdropView;
-(UIColor *)backdropColor;
@end
