/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSDictionary, NSArray;

@interface IMFileTransferCenter : NSObject {

	NSMutableDictionary* _guidToTransferMap;
	NSMutableDictionary* _guidToRemovedTransferMap;
	NSMutableDictionary* _accountIDToTransferGUIDsMap;
	NSMutableArray* _preauthorizedInfos;
	NSMutableArray* _preauthorizedGUIDs;
	NSMutableSet* _activeTransfers;
	NSMutableSet* _pendingTransfers;

}

@property (nonatomic,readonly) NSDictionary * transfers; 
@property (nonatomic,readonly) NSArray * activeTransferGUIDs; 
@property (nonatomic,readonly) NSArray * orderedTransfersGUIDs; 
@property (nonatomic,readonly) bool hasActiveFileTransfers; 
@property (nonatomic,readonly) bool hasPendingFileTransfers; 
@property (nonatomic,readonly) NSArray * activeTransfers; 
@property (nonatomic,readonly) NSArray * orderedTransfers; 
+(id)sharedInstance;
+(Class)transferCenterClass;
+(Class)fileTransferClass;
+(void)setTransferCenterClass:(Class)arg1 ;
-(void)dealloc;
-(void)acceptTransfer:(id)arg1 ;
-(id)transferForGUID:(id)arg1 ;
-(void)deleteTransfer:(id)arg1 ;
-(bool)registerGUID:(id)arg1 forNewOutgoingTransferWithLocalURL:(id)arg2 ;
-(void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3 ;
-(id)transfers;
-(void)removeTransfer:(id)arg1 ;
-(id)guidForNewOutgoingTransferWithLocalURL:(id)arg1 ;
-(id)transfersForAccount:(id)arg1 ;
-(void)stopTransfer:(id)arg1 ;
-(void)_handleStandaloneFileTransferRegistered:(id)arg1 ;
-(void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2 ;
-(void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2 ;
-(void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4 ;
-(void)_handleAllFileTransfers:(id)arg1 ;
-(void)_removePendingTransfer:(id)arg1 ;
-(void)_removeActiveTransfer:(id)arg1 ;
-(void)_removeAllActiveTransfers;
-(void)acknowledgeAllPendingTransfers;
-(void)_addTransfer:(id)arg1 toAccount:(id)arg2 ;
-(void)_addPendingTransfer:(id)arg1 ;
-(void)_addTransfer:(id)arg1 ;
-(bool)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2 ;
-(id)transferForGUID:(id)arg1 includeRemoved:(bool)arg2 ;
-(void)_addActiveTransfer:(id)arg1 ;
-(void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(bool)arg3 overwrite:(bool)arg4 ;
-(bool)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2 ;
-(void)_clearTransfers;
-(void)acceptFileTransferIfPreauthorzed:(id)arg1 ;
-(bool)hasPendingFileTransfers;
-(void)acknowledgePendingTransfer:(id)arg1 ;
-(bool)hasActiveFileTransfers;
-(void)assignTransfer:(id)arg1 toHandle:(id)arg2 ;
-(id)chatForTransfer:(id)arg1 ;
-(void)sendTransfer:(id)arg1 ;
-(void)retargetTransfer:(id)arg1 toPath:(id)arg2 ;
-(id)activeTransfers;
-(id)activeTransferGUIDs;
-(id)orderedTransfers;
-(id)orderedTransfersGUIDs;
-(void)clearFinishedTransfers;
-(void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4 ;
-(bool)wasFileTransferPreauthorized:(id)arg1 ;
@end
