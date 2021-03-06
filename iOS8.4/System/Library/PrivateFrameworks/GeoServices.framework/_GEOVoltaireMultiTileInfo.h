/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList, NSURL;

@interface _GEOVoltaireMultiTileInfo : NSObject {

	GEOTileKeyList* _keys;
	NSURL* _url;
	BOOL _useStatusCodes;

}

@property (nonatomic,readonly) BOOL useStatusCodes;                //@synthesize useStatusCodes=_useStatusCodes - In the implementation block
@property (nonatomic,readonly) GEOTileKeyList * keys;              //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(NSURL *)url;
-(GEOTileKeyList *)keys;
-(BOOL)useStatusCodes;
-(id)initWithURL:(id)arg1 useStatusCodes:(BOOL)arg2 ;
-(void)appendKey:(GEOTileKey*)arg1 ;
@end

