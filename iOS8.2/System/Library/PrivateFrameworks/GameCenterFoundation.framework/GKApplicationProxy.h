/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LSApplicationProxy, NSDictionary, NSBundle, NSString, NSNumber, NSDate;

@interface GKApplicationProxy : NSObject {

	LSApplicationProxy* _lsProxy;
	NSDictionary* _metadata;

}

@property (nonatomic,retain,readonly) NSBundle * bundle; 
@property (nonatomic,retain,readonly) NSString * bundleVersion; 
@property (nonatomic,retain,readonly) NSString * bundleID; 
@property (nonatomic,retain,readonly) NSNumber * adamID; 
@property (nonatomic,retain,readonly) NSNumber * externalVersion; 
@property (nonatomic,retain,readonly) NSDate * purchaseDate; 
@property (getter=isRestricted,nonatomic,readonly) char restricted; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) char gameCenterEnabled; 
@property (getter=isInstalled,nonatomic,readonly) char installed; 
@property (nonatomic,retain) LSApplicationProxy * lsProxy;                                     //@synthesize lsProxy=_lsProxy - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                          //@synthesize metadata=_metadata - In the implementation block
+(id)metadataForBundleURL:(id)arg1 ;
-(void)dealloc;
-(id)bundleURL;
-(NSBundle *)bundle;
-(NSString *)bundleID;
-(id)initWithProxy:(id)arg1 ;
-(NSNumber *)externalVersion;
-(id)initWithBundleID:(id)arg1 ;
-(void)setLsProxy:(LSApplicationProxy *)arg1 ;
-(LSApplicationProxy *)lsProxy;
-(NSString *)bundleVersion;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(char)isRestricted;
-(NSDate *)purchaseDate;
-(NSNumber *)adamID;
-(char)isInstalled;
-(char)isGameCenterEnabled;
@end

