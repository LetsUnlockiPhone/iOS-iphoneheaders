/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIModalViewDelegate.h>

@class UIAlertView, BTSDevice, NSString;

@interface BTAlert : NSObject <UIModalViewDelegate> {

	id _delegate;
	UIAlertView* _alert;
	BTSDevice* _device;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAlertWithResult:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)dismiss;
@end
