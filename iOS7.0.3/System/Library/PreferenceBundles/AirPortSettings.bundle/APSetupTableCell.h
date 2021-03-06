/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableTableCell.h>

@interface APSetupTableCell : PSEditableTableCell {

	BOOL _editable;

}

@property (assign,nonatomic) BOOL editable;              //@synthesize editable=_editable - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)editable;
-(void)textValueChanged:(id)arg1 ;
@end

