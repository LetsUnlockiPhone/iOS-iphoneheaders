/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:52 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardEmojiSplit.h>
#import <UIKit/UIKeyboardEmojiCategoryControl.h>

@class UIKeyboardEmojiCategoryController, UIColor, NSString;

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl> {

	UIKeyboardEmojiCategoryController* _categoryController;
	char _whiteText;
	UIColor* _pressIndicatorColor;
	int _currentSelected;
	int _lastUsedCategory;

}

@property (assign) char whiteText;                                  //@synthesize whiteText=_whiteText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)didMoveToWindow;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)whiteText;
-(void)setCategory:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)receiveNotifictaion:(id)arg1 ;
-(void)updateCategorySelectedIndicator:(int)arg1 ;
-(id)titleForRow:(int)arg1 ;
-(id)symbolForRow:(int)arg1 ;
-(void)setWhiteText:(char)arg1 ;
@end

