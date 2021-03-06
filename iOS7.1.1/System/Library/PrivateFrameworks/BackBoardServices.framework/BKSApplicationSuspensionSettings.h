/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <BackBoardServices/BKSXPCCoding.h>

@class NSNumber, NSString;

@interface BKSApplicationSuspensionSettings : NSObject <NSCopying, BKSXPCCoding> {

	NSNumber* _statusBarStyle;
	NSNumber* _statusBarHidden;
	NSNumber* _classicAppZoomedIn;
	NSNumber* _taskSuspendingUnsupported;
	NSNumber* _defaultPNGExpirationTime;
	NSString* _defaultPNG;

}

@property (nonatomic,retain) NSNumber * statusBarStyle;                         //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (nonatomic,retain) NSNumber * statusBarHidden;                        //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (nonatomic,retain) NSNumber * classicAppZoomedIn;                     //@synthesize classicAppZoomedIn=_classicAppZoomedIn - In the implementation block
@property (nonatomic,retain) NSNumber * taskSuspendingUnsupported;              //@synthesize taskSuspendingUnsupported=_taskSuspendingUnsupported - In the implementation block
@property (nonatomic,retain) NSNumber * defaultPNGExpirationTime;               //@synthesize defaultPNGExpirationTime=_defaultPNGExpirationTime - In the implementation block
@property (nonatomic,copy) NSString * defaultPNG;                               //@synthesize defaultPNG=_defaultPNG - In the implementation block
-(void)dealloc;
-(id)description;
-(id)statusBarStyle;
-(void)setStatusBarStyle:(id)arg1 ;
-(void)setStatusBarHidden:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithSettings:(id)arg1 zone:(NSZone)arg2 ;
-(id)classicAppZoomedIn;
-(id)taskSuspendingUnsupported;
-(id)defaultPNG;
-(void)setClassicAppZoomedIn:(id)arg1 ;
-(void)setTaskSuspendingUnsupported:(id)arg1 ;
-(void)setDefaultPNGExpirationTime:(id)arg1 ;
-(void)setDefaultPNG:(id)arg1 ;
-(id)defaultPNGExpirationTime;
-(id)statusBarHidden;
@end

