/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateView_iPhone.h>
#import <UIKit/UIKeyboardCandidateViewInline.h>

@class NSString;

@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline> {

	CGRect _collapsedRect;
	char _withKeyboard;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)candidatesDidChange;
-(id)activeCandidateList;
-(void)setCandidateViewExtended:(char)arg1 ;
-(unsigned)_numberOfColumns:(char)arg1 ;
-(char)_shouldShowHideKeyboard;
-(char)_shouldUseFullMetrics;
-(void)_collapse:(id)arg1 ;
@end

