/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class GEOMapServiceTraits;


@protocol GEOMapServiceCompletionTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(BOOL)matchesFragment:(id)arg1;

@end
