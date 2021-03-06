/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSASAssetTransferer.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface MSASAssetUploader : MSASAssetTransferer {

	BOOL _didEncounterNetworkConditionError;
	int _state;
	NSMutableArray* _itemsInFlight;
	NSMutableDictionary* _assetCollectionsToItemInFlightMap;
	NSMutableDictionary* _assetToAssetCollectionMap;
	NSMutableArray* _finishedAssetCollections;
	NSMutableSet* _assetCollectionsWithAuthorizationError;
	NSMutableDictionary* _assetCollectionGUIDToRequestorContext;

}

@property (assign,nonatomic,@dynamic,__weak) <MSASAssetUploaderDelegate> * delegate; 
@property (assign,nonatomic) int state;                                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * itemsInFlight;                                           //@synthesize itemsInFlight=_itemsInFlight - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetCollectionsToItemInFlightMap;                  //@synthesize assetCollectionsToItemInFlightMap=_assetCollectionsToItemInFlightMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetToAssetCollectionMap;                          //@synthesize assetToAssetCollectionMap=_assetToAssetCollectionMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedAssetCollections;                                //@synthesize finishedAssetCollections=_finishedAssetCollections - In the implementation block
@property (nonatomic,retain) NSMutableSet * assetCollectionsWithAuthorizationError;                    //@synthesize assetCollectionsWithAuthorizationError=_assetCollectionsWithAuthorizationError - In the implementation block
@property (assign,nonatomic) BOOL didEncounterNetworkConditionError;                                   //@synthesize didEncounterNetworkConditionError=_didEncounterNetworkConditionError - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetCollectionGUIDToRequestorContext;              //@synthesize assetCollectionGUIDToRequestorContext=_assetCollectionGUIDToRequestorContext - In the implementation block
-(int)state;
-(void)setState:(int)arg1 ;
-(void)workQueueRetryOutstandingActivities;
-(void)unregisterAssetCollections:(id)arg1 ;
-(void)cancelAssetCollections:(id)arg1 ;
-(void)registerAssetCollections:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)unregisterAssetCollections:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4 ;
-(void)didFinishGettingAllAssets;
-(void)didFinishPuttingAllAssets;
-(void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3 ;
-(void)workQueueUploadNextBatch;
-(void)workQueueGoIdle;
-(void)_workQueueStop;
-(void)workQueueStop;
-(void)workQueueShutDownCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setDidEncounterNetworkConditionError:(BOOL)arg1 ;
-(id)_orphanedAssetCollectionError;
-(void)workQueueDidFinishWithItem:(id)arg1 error:(id)arg2 ;
-(void)workQueueRegisterAssets:(id)arg1 index:(unsigned)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)workQueueRegisterAssetCollections:(id)arg1 index:(unsigned)arg2 results:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)workQueueCancelAssetCollections:(id)arg1 ;
-(void)workQueueStopTrackingItem:(id)arg1 ;
-(BOOL)didEncounterNetworkConditionError;
-(id)_pathForPersonID:(id)arg1 ;
-(void)workQueueCancel;
-(id)itemsInFlight;
-(void)setItemsInFlight:(id)arg1 ;
-(id)assetCollectionsToItemInFlightMap;
-(void)setAssetCollectionsToItemInFlightMap:(id)arg1 ;
-(id)assetToAssetCollectionMap;
-(void)setAssetToAssetCollectionMap:(id)arg1 ;
-(id)finishedAssetCollections;
-(void)setFinishedAssetCollections:(id)arg1 ;
-(id)assetCollectionsWithAuthorizationError;
-(void)setAssetCollectionsWithAuthorizationError:(id)arg1 ;
-(id)assetCollectionGUIDToRequestorContext;
-(void)setAssetCollectionGUIDToRequestorContext:(id)arg1 ;
-(void).cxx_destruct;
@end

