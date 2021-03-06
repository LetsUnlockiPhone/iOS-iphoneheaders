/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/NSSecureCoding.h>

@class CPLResource, NSString;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {

	int _priority;
	char _cancelled;
	CPLResource* _resource;
	NSString* _taskIdentifier;

}

@property (nonatomic,retain) CPLResource * resource;                               //@synthesize resource=_resource - In the implementation block
@property (nonatomic,copy) NSString * taskIdentifier;                              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign,getter=isHighPriority,nonatomic) char highPriority; 
@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
+(char)supportsSecureCoding;
-(void)setAssetUuid:(id)arg1 ;
-(id)assetUuid;
-(Class)classForKeyedArchiver;
-(void)launch;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(Class)classForCoder;
-(char)isCancelled;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)setHighPriority:(char)arg1 ;
-(CPLResource *)resource;
-(char)isHighPriority;
-(NSString *)taskIdentifier;
-(void)cancelTask;
-(void)setResource:(CPLResource *)arg1 ;
@end

