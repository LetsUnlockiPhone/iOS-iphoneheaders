/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface SKUISimpleCollectionViewCell : UICollectionViewCell {

	UIView* _contentChildView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIView * contentChildView;               //@synthesize contentChildView=_contentChildView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentChildView:(UIView *)arg1 ;
-(UIView *)contentChildView;
@end

