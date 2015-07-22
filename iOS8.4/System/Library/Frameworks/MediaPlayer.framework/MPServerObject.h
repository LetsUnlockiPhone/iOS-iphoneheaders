/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPServerObject : NSObject {

	int _clientPID;
	SCD_Struct_MP16* _clientAuditToken;

}

@property (nonatomic,readonly) int clientPID;                                  //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP16* clientAuditToken;              //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
+(id)_center;
-(void)_registerNotificationsForSelectors;
-(id)_forwardMessage:(id)arg1 userInfo:(id)arg2 auditToken:(SCD_Struct_MP16*)arg3 ;
-(SCD_Struct_MP16*)clientAuditToken;
-(id)init;
-(int)clientPID;
@end
