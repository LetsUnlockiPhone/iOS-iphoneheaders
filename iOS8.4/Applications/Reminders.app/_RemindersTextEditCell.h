/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class EKExpandingTextView;

@interface _RemindersTextEditCell : UITableViewCell {

	EKExpandingTextView* _expandingTextView;
	float _verticalPadding;
	float _minimumHeight;

}

@property (nonatomic,readonly) EKExpandingTextView * expandingTextView;              //@synthesize expandingTextView=_expandingTextView - In the implementation block
@property (assign,nonatomic) float verticalPadding;                                  //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (assign,nonatomic) float minimumHeight;                                    //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(EKExpandingTextView *)expandingTextView;
-(float)_heightNeededForContentWidth:(float)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(float)minimumHeight;
-(void)setMinimumHeight:(float)arg1 ;
-(float)desiredHeight;
-(float)verticalPadding;
-(void)setVerticalPadding:(float)arg1 ;
@end

