/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:38:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PEPServiceConfiguration : NSObject {

	NSString* _cacheFilePath;
	char _shouldDownloadNetworkConfigFile;
	double _cachedFileLastModifyDate;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_postNotification;
-(char)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(char)arg2 ;
-(void)_updateDefaults:(id)arg1 ;
-(char)registerNetworkDefaultsForAppID:(id)arg1 ;
@end

