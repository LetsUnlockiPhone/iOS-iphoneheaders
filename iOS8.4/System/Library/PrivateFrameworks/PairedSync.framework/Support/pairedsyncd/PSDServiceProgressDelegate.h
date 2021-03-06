/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <pairedsyncd/PSYActivityProgress.h>

@class PSDActivity, NSString;

@interface PSDServiceProgressDelegate : NSObject <PSYActivityProgress> {

	PSDActivity* _service;

}

@property (assign,nonatomic,__weak) PSDActivity * service;              //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PSDActivity *)service;
-(void)setService:(PSDActivity *)arg1 ;
-(oneway void)activityDidCompleteSending;
-(oneway void)activityDidUpdateProgress:(float)arg1 ;
@end

