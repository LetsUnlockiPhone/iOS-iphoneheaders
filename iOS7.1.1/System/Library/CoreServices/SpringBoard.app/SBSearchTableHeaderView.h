/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIView, NSString;

@interface SBSearchTableHeaderView : UIView {

	UILabel* _titleLabel;
	UIView* _separatorView;
	NSString* _reuseIdentifier;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) NSString * reuseIdentifier;              //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
+(float)heightForActiveContentSizeCategory;
+(id)lineColor;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(id)title;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)reuseIdentifier;
-(void)prepareForReuse;
@end
