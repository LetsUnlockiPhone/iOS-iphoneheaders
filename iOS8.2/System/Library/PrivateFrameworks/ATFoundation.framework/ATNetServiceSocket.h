/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATSocket.h>
#import <ATFoundation/NSNetServiceDelegate.h>
#import <ATFoundation/NSStreamDelegate.h>

@protocol OS_tcp_connection, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSString, NSObject;

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate> {

	char _connected;
	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	NSObject*<OS_tcp_connection> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _sema;
	NSObject*<OS_dispatch_source> _source;
	char _readBuffer[65536];
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * interfaceName;                //@synthesize interfaceName=_interfaceName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeDescriptor;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(char)open;
-(char)_connect;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
@end
