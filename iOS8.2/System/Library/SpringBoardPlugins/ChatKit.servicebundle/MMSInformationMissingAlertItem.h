/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface MMSInformationMissingAlertItem : SBAlertItem {

	int _alertType;

}

@property (assign,nonatomic) int alertType;              //@synthesize alertType=_alertType - In the implementation block
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(void)setAlertType:(int)arg1 ;
-(int)alertType;
-(void)_showNetworkPrefs;
@end

