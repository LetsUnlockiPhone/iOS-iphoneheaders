/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CKDMMCSRequestOptions : NSObject {

	BOOL _usesBackgroundSession;
	BOOL _allowsCellularAccess;
	BOOL _allowsPowerNapScheduling;
	NSString* _applicationBundleID;
	NSString* _applicationSecondaryID;
	NSString* _containerID;
	NSArray* _zoneNames;

}

@property (nonatomic,retain) NSString * applicationBundleID;                 //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * applicationSecondaryID;              //@synthesize applicationSecondaryID=_applicationSecondaryID - In the implementation block
@property (nonatomic,retain) NSString * containerID;                         //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSArray * zoneNames;                            //@synthesize zoneNames=_zoneNames - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundSession;                     //@synthesize usesBackgroundSession=_usesBackgroundSession - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL allowsPowerNapScheduling;                  //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
-(id)description;
-(BOOL)usesBackgroundSession;
-(void)setUsesBackgroundSession:(BOOL)arg1 ;
-(NSString *)containerID;
-(void)setContainerID:(NSString *)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSString *)applicationBundleID;
-(void)setAllowsPowerNapScheduling:(BOOL)arg1 ;
-(id)CKPropertiesDescription;
-(BOOL)allowsPowerNapScheduling;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(void)setZoneNames:(NSArray *)arg1 ;
-(NSString *)applicationSecondaryID;
-(NSArray *)zoneNames;
-(id)MMCSOptions;
-(void)setApplicationSecondaryID:(NSString *)arg1 ;
@end

