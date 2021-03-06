/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLPrivacy : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _authStatus;

}
+(id)sharedInstance;
+(void)enableForceOverrideTCC;
+(void)disableForceOverrideTCC;
-(int)photosTCCAccessStatus;
-(BOOL)isPhotosTCCAccessRestricted;
-(void)dealloc;
-(id)init;
-(BOOL)isPhotosAccessAllowedWithScope:(long long)arg1 promptIfNeededWithHandler:(/*^block*/id)arg2 ;
-(BOOL)_isPhotosAccessAllowedWithScope:(long long)arg1 forceHandler:(BOOL)arg2 accessAllowedHandler:(/*^block*/id)arg3 ;
-(BOOL)isPhotosAccessAllowedPromptIfNeededWithHandler:(/*^block*/id)arg1 ;
-(void)photoAccessPowersActive;
-(BOOL)isPhotoLibraryReadAccessAllowed;
-(BOOL)isPhotosTCCAccessNotAllowed;
-(BOOL)isPhotosTCCAccessAllowed;
-(void)isPhotosAccessAllowedWithScope:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)isPhotoLibrarySharingOrModificationAllowed;
@end

