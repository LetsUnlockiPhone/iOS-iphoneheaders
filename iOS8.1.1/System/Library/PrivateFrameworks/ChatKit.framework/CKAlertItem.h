/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface CKAlertItem : SBAlertItem {

	long long _alignment;
	BOOL _alignmentHasBeenSet;
	BOOL _displayingEntireMessage;

}
-(id)name;
-(long long)bodyTextAlignmentForAlertSheet:(id)arg1 displayedLineCount:(int)arg2 ;
-(BOOL)shouldHideSMSPreview;
-(id)alertSheet;
-(void)_deactivateAllTaggedAlertItems;
-(void)didDeactivateForReason:(int)arg1 ;
-(id)_taggedAlertItems;
-(void)_deactivateTaggedAlertItem;
-(id)messageText;
-(Class)alertSheetClass;
-(void)_tag;
-(void)willActivate;
-(void)_untag;
-(id)lockLabel;
-(BOOL)willShowInAwayItems;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
@end
