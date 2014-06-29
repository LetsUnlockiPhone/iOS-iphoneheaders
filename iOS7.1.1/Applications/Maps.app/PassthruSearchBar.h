/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UISearchBar.h>

@protocol UITextFieldDelegate;
@class UIColor;

@interface PassthruSearchBar : UISearchBar {

	<UITextFieldDelegate>* _textFieldDelegate;
	UIColor* _textColor;

}

@property (assign,nonatomic,__weak) <UITextFieldDelegate> * textFieldDelegate;              //@synthesize textFieldDelegate=_textFieldDelegate - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                           //@synthesize textColor=_textColor - In the implementation block
-(void)setTextColor:(id)arg1 ;
-(id)textColor;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void).cxx_destruct;
-(void)setTextFieldDelegate:(id)arg1 ;
-(id)textFieldDelegate;
@end
