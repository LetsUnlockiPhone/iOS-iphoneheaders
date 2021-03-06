/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:25 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HSCloudLibrary;

@interface JaliscoImporter : NSObject {

	float _progress;
	BOOL _isCancelled;
	BOOL _prefetchArtwork;
	HSCloudLibrary* _library;

}

@property (nonatomic,readonly) BOOL isCancelled;                //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) float progress;                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL prefetchArtwork;              //@synthesize prefetchArtwork=_prefetchArtwork - In the implementation block
-(void)setPrefetchArtwork:(BOOL)arg1 ;
-(BOOL)prefetchArtwork;
-(id)metadataKeys;
-(id)purchaseTokens;
-(id)queryFilter;
-(BOOL)includeFlavors;
-(unsigned)onDiskRevision;
-(void)importTracksUpToRevision:(unsigned)arg1 sessionID:(unsigned)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(id)init;
-(void)setProgress:(float)arg1 ;
-(BOOL)isCancelled;
-(void)cancel;
-(float)progress;
-(void).cxx_destruct;
-(id)connection;
-(BOOL)includeHiddenItems;
-(id)handleResponse:(id)arg1 ;
-(id)library;
@end

