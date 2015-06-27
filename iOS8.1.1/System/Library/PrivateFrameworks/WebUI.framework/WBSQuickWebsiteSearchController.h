/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <WebUI/WebUI-Structs.h>
@class NSObject, NSMutableDictionary, NSArray;

@interface WBSQuickWebsiteSearchController : NSObject {

	NSObject*<OS_dispatch_queue> _quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
	NSMutableDictionary* _quickWebsiteSearchProvidersByHost;
	NSMutableDictionary* _openSearchDescriptionsByDescriptionDocumentURLString;
	NSMutableDictionary* _hostSetsByOpenSearchDescriptionDocumentURLString;
	unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >* _writer;
	BOOL _quickWebsiteSearchProvidersLoadedFromDisk;

}

@property (nonatomic,readonly) NSArray * quickWebsiteSearchHosts; 
@property (assign) BOOL quickWebsiteSearchProvidersLoadedFromDisk;              //@synthesize quickWebsiteSearchProvidersLoadedFromDisk=_quickWebsiteSearchProvidersLoadedFromDisk - In the implementation block
+(id)sharedController;
-(id)init;
-(void)clear;
-(void)_loadFromDisk;
-(id)_dictionaryRepresentation;
-(id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1 ;
-(void)beginLoadingFromDiskIfNeeded;
-(void)_didCollectOpenSearchDescription:(id)arg1 ;
-(void)_resetCachedDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_saveToDiskSoon;
-(BOOL)quickWebsiteSearchProvidersLoadedFromDisk;
-(BOOL)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg1 ;
-(void)_sendNotification:(id)arg1 forQuickWebsiteSearchProvider:(id)arg2 ;
-(void)_addHost:(id)arg1 toOpenSearchDescriptionWithDocumentURL:(id)arg2 ;
-(void)_removeHost:(id)arg1 fromOpenSearchDescriptionWithDocumentURL:(id)arg2 ;
-(void)removeProvidersWithHosts:(id)arg1 ;
-(BOOL)_shouldRemoveQuickWebsiteSearchProvider:(id)arg1 ;
-(id)_searchDescriptionsURL;
-(void)_pruneUnusedQuickWebsiteSearchProviders;
-(void)_didFinishLoadingFromDisk;
-(void)setQuickWebsiteSearchProvidersLoadedFromDisk:(BOOL)arg1 ;
-(void)noteProvidersAreStale;
-(void)savePendingChangesBeforeTermination;
-(void)removeProvidersAddedAfterDate:(id)arg1 beforeDate:(id)arg2 ;
-(NSArray *)quickWebsiteSearchHosts;
-(id)providersMatchingQueryString:(id)arg1 ;
-(void)didPerformSearchWithProvider:(id)arg1 ;
-(void)setSearchURLTemplateStringFromForm:(id)arg1 forSourcePageURLString:(id)arg2 ;
-(void)setOpenSearchDescriptionURLString:(id)arg1 forSourcePageURLString:(id)arg2 ;
-(id)providerForSourcePageURLString:(id)arg1 ;
-(void)removeProviderWithHost:(id)arg1 ;
@end
