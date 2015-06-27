/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UITapGestureRecognizer, UIPickerTableView;

@interface UIPickerTableViewCell : UITableViewCell {

	UITapGestureRecognizer* _tap;
	UIPickerTableView* pickerTable;

}

@property (assign,nonatomic) UIPickerTableView * pickerTable; 
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_tapAction:(id)arg1 ;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(UIPickerTableView *)pickerTable;
-(void)setPickerTable:(UIPickerTableView *)arg1 ;
@end
