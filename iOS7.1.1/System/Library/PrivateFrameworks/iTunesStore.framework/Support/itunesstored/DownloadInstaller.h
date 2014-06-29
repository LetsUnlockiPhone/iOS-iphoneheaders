/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperationDelegate.h>

@protocol DownloadInstallerDelegate;
@class NSMutableDictionary, Download, DownloadStep, StoreDownload, NSArray, NSString;

@interface DownloadInstaller : NSObject <ISOperationDelegate> {

	NSMutableDictionary* _assetsByType;
	<DownloadInstallerDelegate>* _delegate;
	Download* _download;
	DownloadStep* _downloadStep;
	int _fileInstallBehavior;
	StoreDownload* _storeDownload;

}

@property (readonly) long long downloadIdentifier; 
@property (readonly) DownloadStep * downloadStep; 
@property (assign,nonatomic) <DownloadInstallerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int fileInstallBehavior;                             //@synthesize fileInstallBehavior=_fileInstallBehavior - In the implementation block
@property (readonly) NSArray * assets; 
@property (readonly) NSString * ITunesMetadataPath; 
@property (readonly) StoreDownload * storeDownloadMetadata; 
+(id)installerWithDownloadStep:(id)arg1 entity:(id)arg2 ;
-(id)downloadStep;
-(id)initWithDownloadStep:(id)arg1 entity:(id)arg2 ;
-(id)newPurchaseManifestItem;
-(id)storeDownloadMetadata;
-(id)_copyMetadataForDownload:(id)arg1 storeDownload:(id)arg2 ;
-(id)destinationURLForAsset:(id)arg1 ;
-(id)_defaultDestinationDirectoryPath;
-(id)writeFileForAsset:(id)arg1 ;
-(id)ITunesMetadataPath;
-(BOOL)writeMetadataPlistToFile:(id)arg1 error:(id*)arg2 ;
-(id)installedFileNameForAsset:(id)arg1 ;
-(id)destinationDirectoryPathForAsset:(id)arg1 ;
-(id)copyITunesMetadataDictionary;
-(id)assetForAssetType:(id)arg1 ;
-(void)addPurchaseManifestItem;
-(id)documentsDirectoryForClientID:(id)arg1 downloadKind:(id)arg2 ;
-(id)installDownloadFiles;
-(BOOL)rollbackInstalledFilesWithError:(id*)arg1 ;
-(BOOL)runOperation:(id)arg1 error:(id*)arg2 ;
-(int)fileInstallBehavior;
-(void)setFileInstallBehavior:(int)arg1 ;
-(long long)downloadIdentifier;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)assets;
@end
