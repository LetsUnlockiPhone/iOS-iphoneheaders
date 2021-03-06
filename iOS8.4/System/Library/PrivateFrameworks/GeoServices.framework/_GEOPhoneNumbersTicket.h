/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOMapServiceTicket.h>

@class NSArray, GEOMapServiceTraits, NSString, GEOMapRegion;

@interface _GEOPhoneNumbersTicket : NSObject <GEOMapServiceTicket> {

	NSArray* _phoneNumbers;
	GEOMapServiceTraits* _traits;
	BOOL _canceled;
	BOOL _allowCellularDataForLookup;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;                  //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                     //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(GEOMapRegion *)resultBoundingRegion;
-(id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 ;
-(BOOL)isCanceled;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
@end

