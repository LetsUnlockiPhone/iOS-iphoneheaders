/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/SCATDelayPickerViewController.h>

@interface SCATDelayAfterInputPickerViewController : SCATDelayPickerViewController
-(void)setDelayFromUser:(double)arg1 ;
-(bool)delayEnabledFromPreferences;
-(bool)userCanDisableDelay;
-(void)setDelayEnabledFromUser:(bool)arg1 ;
-(id)localizedFooterText;
-(double)delayFromPreferences;
-(double)maximumTime;
-(double)minimumTime;
-(id)localizedTitle;
@end
