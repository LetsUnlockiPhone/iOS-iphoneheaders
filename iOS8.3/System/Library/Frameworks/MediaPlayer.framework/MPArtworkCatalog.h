/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:57:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPArtworkDataSource;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSString, NSCache;

@interface MPArtworkCatalog : NSObject {

	CGSize _fittingSize;
	char _loadingRepresentation;
	float _destinationScale;
	id _token;
	id<MPArtworkDataSource> _dataSource;
	NSString* _cacheIdentifier;
	id _requestingContext;
	id _destination;
	/*^block*/id _configurationBlock;

}

@property (assign,nonatomic) float destinationScale;                                 //@synthesize destinationScale=_destinationScale - In the implementation block
@property (assign,nonatomic) CGSize fittingSize;                                     //@synthesize fittingSize=_fittingSize - In the implementation block
@property (nonatomic,readonly) CGSize scaledFittingSize; 
@property (nonatomic,retain) id token;                                               //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) id<MPArtworkDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSCache * cache; 
@property (nonatomic,copy) NSString * cacheIdentifier;                               //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id requestingContext;                            //@synthesize requestingContext=_requestingContext - In the implementation block
@property (assign,nonatomic,__weak) id destination;                                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) id configurationBlock;                                    //@synthesize configurationBlock=_configurationBlock - In the implementation block
@property (getter=isLoadingRepresentation) char loadingRepresentation;               //@synthesize loadingRepresentation=_loadingRepresentation - In the implementation block
+(id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2 ;
+(void)setCacheLimit:(unsigned)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 ;
+(void)setCachePurgesWhenEnteringBackground:(char)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 ;
-(id)initWithToken:(id)arg1 dataSource:(id)arg2 ;
-(char)isLoadingRepresentation;
-(CGSize)fittingSize;
-(float)destinationScale;
-(void)setLoadingRepresentation:(char)arg1 ;
-(void)_updateRepresentation;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(void)setRequestingContext:(id)arg1 ;
-(NSString *)cacheIdentifier;
-(id)requestingContext;
-(void)_updateWithRepresentation:(id)arg1 ;
-(void)_loadBestRepresentationIfNeeded;
-(void)setDestinationScale:(float)arg1 ;
-(CGSize)scaledFittingSize;
-(void)setFittingSize:(CGSize)arg1 ;
-(void)requestImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)bestImageFromDisk;
-(void)setDestination:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(char)isArtworkVisuallyIdenticalToCatalog:(id)arg1 ;
-(void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2 ;
-(void)dealloc;
-(void)setDataSource:(id<MPArtworkDataSource>)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id<MPArtworkDataSource>)dataSource;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(NSCache *)cache;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(id)token;
-(void)setToken:(id)arg1 ;
@end

