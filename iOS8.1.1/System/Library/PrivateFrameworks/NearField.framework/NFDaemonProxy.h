/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NearField/XPCConnectionDelegate.h>

@class XPCConnection, NSString;

@interface NFDaemonProxy : NSObject <XPCConnectionDelegate> {

	XPCConnection* _xpc;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDaemonProxy;
-(void)dealloc;
-(unsigned)getControllerInfo:(id*)arg1 ;
-(unsigned)getSecureElementInfo:(id*)arg1 ;
-(unsigned)getBoosterInfo:(id*)arg1 ;
-(id)_getXPCConnection;
-(void)XPCConnectionDidTerminate:(id)arg1 ;
-(void)XPCConnection:(id)arg1 didReceiveEvent:(id)arg2 ;
-(void)XPCConnectionServiceDidRestart:(id)arg1 ;
-(unsigned)readBoosterRegister:(unsigned char)arg1 value:(char*)arg2 ;
-(unsigned)sendBoosterCommand:(id)arg1 ;
@end
