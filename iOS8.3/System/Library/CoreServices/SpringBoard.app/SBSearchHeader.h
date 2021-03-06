/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBSearchGestureObserver.h>

@protocol SBSearchHeaderDelegate;
@class UIButton, UITextField, NSString;

@interface SBSearchHeader : UIView <SBSearchGestureObserver> {

	UIButton* _cancelButton;
	UIEdgeInsets _cancelMargins;
	UIEdgeInsets _margins;
	UITextField* _searchField;
	id<SBSearchHeaderDelegate> _delegate;

}

@property (nonatomic,retain,readonly) UITextField * searchField;               //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic) id<SBSearchHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingLeftMargin;
+(id)keyPathsForValuesAffectingRightMargin;
+(id)keyPathsForValuesAffectingLeftCancelMargin;
+(id)keyPathsForValuesAffectingRightCancelMargin;
+(id)barTintColor;
-(void)searchGesture:(id)arg1 changedPercentComplete:(float)arg2 ;
-(void)updateMargins;
-(float)leftCancelMargin;
-(float)rightCancelMargin;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBSearchHeaderDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SBSearchHeaderDelegate>)delegate;
-(UITextField *)searchField;
-(void)_cancelButtonPressed;
-(float)rightMargin;
-(float)leftMargin;
-(void)updatePlaceholder;
@end

