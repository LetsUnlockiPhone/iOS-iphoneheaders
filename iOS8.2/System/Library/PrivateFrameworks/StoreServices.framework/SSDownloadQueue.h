/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSDownloadManagerObserverPrivate.h>

@class SSDownloadManager, NSSet, NSArray, NSString;

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate> {

	char _autoFinishDownloads;
	SSDownloadManager* _downloadManager;
	CFSetRef _observers;

}

@property (readonly) NSSet * downloadKinds; 
@property (readonly) SSDownloadManager * downloadManager; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (assign,nonatomic) char shouldAutomaticallyFinishDownloads;              //@synthesize autoFinishDownloads=_autoFinishDownloads - In the implementation block
@property (getter=isUsingNetwork,readonly) char usingNetwork; 
@property (nonatomic,readonly) NSArray * placeholderDownloads; 
@property (nonatomic,readonly) NSArray * preorders; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaDownloadKinds;
+(id)softwareApplicationDownloadKinds;
-(NSArray *)downloads;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2 ;
-(void)getDownloadsUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(char)reloadFromServer;
-(void)_handleDownloadsDidChange:(id)arg1 ;
-(id)initWithDownloadKinds:(id)arg1 ;
-(id)_initWithDownloadManagerOptions:(id)arg1 ;
-(char)canCancelDownload:(id)arg1 ;
-(void)_sendDownloadStatusChangedAtIndex:(int)arg1 ;
-(void)_handleDownloadsRemoved:(id)arg1 ;
-(void)_sendQueueNetworkUsageChanged;
-(void)_messageObserversWithFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)_sendQueueChangedWithRemovals:(id)arg1 ;
-(id)initWithDownloadManagerOptions:(id)arg1 ;
-(char)addDownload:(id)arg1 ;
-(void)addPlaceholderDownloads:(id)arg1 ;
-(id)downloadForItemIdentifier:(unsigned long long)arg1 ;
-(NSArray *)placeholderDownloads;
-(NSArray *)preorders;
-(void)removePlaceholderDownload:(id)arg1 ;
-(char)startPreOrderDownload:(id)arg1 ;
-(void)_sendQueuePreOrdersChanged;
-(char)shouldAutomaticallyFinishDownloads;
-(void)setShouldAutomaticallyFinishDownloads:(char)arg1 ;
-(char)cancelDownload:(id)arg1 ;
-(char)isUsingNetwork;
-(NSSet *)downloadKinds;
-(SSDownloadManager *)downloadManager;
@end

