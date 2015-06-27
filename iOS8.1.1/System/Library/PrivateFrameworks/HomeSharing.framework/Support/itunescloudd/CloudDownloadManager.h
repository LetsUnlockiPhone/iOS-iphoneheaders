/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <StoreServices/SSDownloadManager.h>
#import <itunescloudd/SSDownloadManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface CloudDownloadManager : SSDownloadManager <SSDownloadManagerObserver> {

	NSMutableDictionary* _downloadObservers;
	NSObject*<OS_dispatch_queue> _notificationQueue;

}

@property (nonatomic,readonly) BOOL hasDownloads; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDownloadManager;
-(void)addObserverWithIdentifier:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)removeObserverForIdentifier:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(id)initWithManagerOptions:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasDownloads;
@end
