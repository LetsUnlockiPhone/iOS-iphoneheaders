/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicSettings/MusicSettings-Structs.h>
#import <Preferences/DevicePINController.h>

@interface VLPINController : DevicePINController
+(char)settingEnabled;
-(char)requiresKeyboard;
-(char)useProgressiveDelays;
-(CFStringRef)defaultsID;
-(char)validatePIN:(id)arg1 ;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(id)stringsTable;
-(char)simplePIN;
-(char)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)performActionAfterPINSet;
-(void)setPIN:(id)arg1 ;
-(void)performActionAfterPINRemove;
-(void)performActionAfterPINEntry;
@end
