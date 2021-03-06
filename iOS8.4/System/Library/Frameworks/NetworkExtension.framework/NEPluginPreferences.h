/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString;

@interface NEPluginPreferences : NSObject {

	SCPreferencesRef _prefs;
	NSString* _pluginType;

}

@property (assign) SCPreferencesRef prefs;               //@synthesize prefs=_prefs - In the implementation block
@property (readonly) NSString * pluginType;              //@synthesize pluginType=_pluginType - In the implementation block
+(void)removePreferencesForPluginType:(id)arg1 ;
-(SCPreferencesRef)prefs;
-(NSString *)pluginType;
-(id)initWithPluginType:(id)arg1 ;
-(BOOL)isPluginTypeEnabled;
-(void)setPluginTypeEnabled:(BOOL)arg1 appURLData:(id)arg2 ;
-(id)copyAppURL;
-(BOOL)isFlagSet:(CFStringRef)arg1 ;
-(BOOL)setPreferences:(CFDictionaryRef)arg1 ofType:(long long)arg2 configurationIdentifier:(id)arg3 ;
-(CFDictionaryRef)copyPersistentDataOfType:(long long)arg1 configurationIdentifier:(id)arg2 ;
-(void)setPrefs:(SCPreferencesRef)arg1 ;
-(void)dealloc;
@end

