/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface PSLanguageSelector : NSObject {

	NSString* _language;
	NSMutableArray* _supportedLanguages;
	NSArray* _supportedKeyboards;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)currentLanguage;
-(void)setLanguage:(id)arg1 ;
-(id)supportedLanguages;
-(void)_loadSupportedLanguages;
-(void)_setLanguage:(id)arg1 ;
-(void)setLanguage:(id)arg1 fallback:(id)arg2 ;
@end

