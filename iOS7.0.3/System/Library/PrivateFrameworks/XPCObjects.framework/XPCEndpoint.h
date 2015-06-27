/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface XPCEndpoint : NSObject <NSCoding> {

	NSObject<OS_xpc_object>* _endpoint;

}

@property (assign,nonatomic) NSObject<OS_xpc_object> * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)endpoint;
-(id)createConnection;
-(id)initWithConnection:(id)arg1 ;
-(void)setEndpoint:(id)arg1 ;
-(id)_initWithEndpoint:(id)arg1 ;
@end
