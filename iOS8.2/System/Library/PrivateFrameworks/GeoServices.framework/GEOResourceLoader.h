/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface GEOResourceLoader : NSObject {

	NSString* _directory;
	NSString* _additionalDirectoryToConsider;
	NSMutableArray* _resourcesToLoad;
	/*^block*/id _completionHandler;
	/*^block*/id _progressHandler;
	int _numberOfDownloadsInProgress;
	int _numberOfCopiesInProgress;
	NSMutableArray* _loadedResources;
	char _canceled;
	NSString* _baseURLString;
	unsigned _maxConcurrentLoads;
	NSArray* _resourceInfos;
	long _queuePriority;

}

@property (nonatomic,readonly) NSArray * loadedResources;              //@synthesize loadedResources=_loadedResources - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)_cleanup;
-(id)initWithTargetDirectory:(id)arg1 baseURLString:(id)arg2 resources:(id)arg3 maximumConcurrentLoads:(unsigned)arg4 additionalDirectoryToConsider:(id)arg5 ;
-(NSArray *)loadedResources;
-(void)startWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 priority:(long)arg3 ;
-(void)_loadNextResource;
-(id)_urlForResource:(id)arg1 ;
-(char)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id*)arg3 ;
-(void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 orExistingPathOnDisk:(id)arg3 allowCreatingHardLink:(char)arg4 checksum:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_loadResourceFromNetwork:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

