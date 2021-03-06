/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class iPodOutLabel, NSString;

@interface iPodOutTableViewCell : UITableViewCell {

	BOOL imageShouldFillHeight;
	float leftPadding;
	float rightPadding;
	int accessoryViewStyle;
	iPodOutLabel* iconLabel;
	float iconWidth;
	iPodOutLabel* textLabel2;
	iPodOutLabel* detailTextLabel2;
	long long identifier;

}

@property (assign,nonatomic) float leftPadding; 
@property (assign,nonatomic) float rightPadding; 
@property (assign,nonatomic) float iconWidth; 
@property (assign,nonatomic) int accessoryViewStyle; 
@property (assign,nonatomic) BOOL imageShouldFillHeight; 
@property (nonatomic,retain) NSString * icon; 
@property (assign,nonatomic) long long identifier; 
@property (nonatomic,retain) iPodOutLabel * iconLabel; 
@property (nonatomic,retain) iPodOutLabel * textLabel2; 
@property (nonatomic,retain) iPodOutLabel * detailTextLabel2; 
-(void)setIconWidth:(float)arg1 ;
-(void)setAccessoryViewStyle:(int)arg1 ;
-(void)setTextLabelText:(id)arg1 ;
-(void)setImageShouldFillHeight:(BOOL)arg1 ;
-(BOOL)imageShouldFillHeight;
-(id)iconLabel;
-(float)iconWidth;
-(void)setImageViewImage:(id)arg1 ;
-(void)setImageViewHighlightedImage:(id)arg1 ;
-(int)accessoryViewStyle;
-(void)setIconLabel:(id)arg1 ;
-(void)setTextLabel2:(id)arg1 ;
-(void)setDetailTextLabel2:(id)arg1 ;
-(id)textLabel2;
-(id)detailTextLabel2;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(id)textLabel;
-(id)detailTextLabel;
-(long long)identifier;
-(void)setIcon:(id)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(void)setRightPadding:(float)arg1 ;
-(float)rightPadding;
-(float)leftPadding;
-(id)icon;
-(void)setLeftPadding:(float)arg1 ;
-(void).cxx_destruct;
@end

